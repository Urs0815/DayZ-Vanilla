class BearTrap extends TrapBase
{
	// Raycasts start positions:
	// Positions are local to model. Vertical offset prevents ground collision.
	static const vector m_RaycastSources[5] = {
		"0.0 0.1 0.0",	// center
		"0.2 0.1 0.2",	// north east
		"-.2 0.1 0.2",	// north west
		"0.2 0.1 -0.2",	// south east
		"-0.2 0.1 -0.2"	// south west
	};
	
	void BearTrap()
	{
		m_DamagePlayers 			= 5; 				// How much damage player gets when caught
		m_DamageOthers 				= 5;         		// How much damage other entities(CreatureAI) gets when caught
		m_DefectRate 				= 0;
		m_InitWaitTime 				= 0; 				// After this time after deployment, the trap is activated
		m_AnimationPhaseGrounded 	= "placing";
		m_AnimationPhaseSet 		= "BearTrap_Set";
		m_AnimationPhaseTriggered 	= "placing";
	}
	
	override bool CanBeDisarmed()
	{
		return true;
	}
	
	override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
	{
		super.EEHealthLevelChanged(oldLevel, newLevel, zone);

		if (GetGame().IsServer())
		{
			if (newLevel == GameConstants.STATE_RUINED)
			{
				SetInactive();
			}
		}
	}
	
	override void CreateTrigger()
	{
		super.CreateTrigger();

		vector mins		= "-0.1 -0.05 -0.1";
		vector maxs 	= "0.1 0.4 0.1";

		m_TrapTrigger.SetOrientation(GetOrientation());
		m_TrapTrigger.SetExtents(mins, maxs);
		m_TrapTrigger.SetParentObject(this);
	}
	
	override void OnUpdate(EntityAI victim)
	{
		if (victim && victim.IsInherited(CarScript))
		{
			EntityAI wheel = GetClosestCarWheel(victim);
			if (wheel)
			{
				OnServerSteppedOn(wheel, "");
			}
		}
	}
	
	override void OnSteppedOn(EntityAI victim)
	{
		if (GetGame().IsServer() && victim)
		{
			if (!victim.GetAllowDamage())
			{
				return;
			}

			if (victim.IsInherited(CarScript))
			{
				//! CarScript specific reaction on BearTrap
				Param1<EntityAI> params = new Param1<EntityAI>(victim);
				m_UpdateTimer.Run(UPDATE_TIMER_INTERVAL, this, "OnUpdate", params, true);

				return;
			}
			else
			{
				for (int i = 0; i < 5; ++i)
				{
					vector raycast_start_pos 			= ModelToWorld(m_RaycastSources[i]);
					vector raycast_end_pos 				= "0 0.5 0" + raycast_start_pos;
					
					RaycastRVParams rayInput 			= new RaycastRVParams(raycast_start_pos, raycast_end_pos, this);
					rayInput.flags 						= CollisionFlags.ALLOBJECTS;
					rayInput.type 						= ObjIntersectFire;
					rayInput.radius 					= 0.05;
					array<ref RaycastRVResult> results 	= new array<ref RaycastRVResult>;
			
					if (DayZPhysics.RaycastRVProxy(rayInput, results))
					{
						RaycastRVResult res;
						for (int j = 0; j < results.Count(); j++)
						{
							Object contact_obj = results[j].obj;
							if (contact_obj)
							{
								OnServerSteppedOn(contact_obj, contact_obj.GetDamageZoneNameByComponentIndex(results[j].component));
								break;
							}
						}
						
						return;
					}
				}
					
				// Damage random leg since we don't know what part of player's body was caught in the trap.
				string damageZoneRand = "LeftLeg";
				if (Math.RandomIntInclusive(0, 1) == 1)
				{
					damageZoneRand = "RightLeg";
				}
	
				OnServerSteppedOn(victim, damageZoneRand);
			}
		}
		else if (!GetGame().IsDedicatedServer()) //! this is also called on client (OnRPC->SnapOn->OnSteppedOn chain)
		{
			if (victim)
			{
				if (victim.IsInherited(PlayerBase))
				{
					victim.SpawnDamageDealtEffect();
				}

				PlaySoundBiteLeg();
			}
		}
	}
	
	override void OnSteppedOut(EntityAI victim)
	{
		if (victim.IsInherited(CarScript))
		{
			if (m_UpdateTimer && m_UpdateTimer.IsRunning())
			{
				m_UpdateTimer.Stop();
			}
		}
	}
	
	protected void OnServerSteppedOn(Object obj, string damageZone)
	{
		if (obj.IsInherited(CarWheel))
		{
			obj.ProcessDirectDamage(DT_CLOSE_COMBAT, this, damageZone, "BearTrapHit_CarWheel", "0 0 0", 1);
			if (m_UpdateTimer.IsRunning())
			{
				m_UpdateTimer.Stop();
			}
			
			SetInactive(false);
			Synch(EntityAI.Cast(obj));

			return;
		}

		//! PlayerBase specific handling
		if (obj.IsInherited(PlayerBase))
		{
			CauseVictimToStartLimping(obj, damageZone);
		}
		
		//! DayZInfected specific handling
		if (obj.IsInherited(DayZInfected))
		{
			DayZInfected victim = DayZInfected.Cast(obj);
			if (victim &&  Math.RandomIntInclusive(0, 1) == 1)
			{
				victim.StartCommand_Crawl(0); // switch to crawl anim
			}
		}
		
		obj.ProcessDirectDamage(DT_CLOSE_COMBAT, this, damageZone, "BearTrapHit", "0 0 0", 1);
		
		SetInactive(false);
		Synch(EntityAI.Cast(obj));
	}
	
	// Causes the player to start limping. This is temporary and should at some point be replaced by broken legs
	void CauseVictimToStartLimping(Object obj, string damagedZone)
	{
		PlayerBase victim = PlayerBase.Cast(obj);
		if (victim)
		{
			victim.DamageAllLegs(victim.GetMaxHealth()); //deal 100% damage to break legs
		}
	}
		
	void PlaySoundBiteLeg()
	{
		EffectSound sound = SEffectManager.PlaySound("beartrapCloseDamage_SoundSet", GetPosition(), 0, 0, false);
		sound.SetAutodestroy(true);
	}
	
	void PlaySoundBiteEmpty()
	{
		EffectSound sound = SEffectManager.PlaySound("beartrapClose_SoundSet", GetPosition(), 0, 0, false);
		sound.SetAutodestroy(true);
	}
	
	void PlaySoundOpen()
	{
		EffectSound sound = SEffectManager.PlaySound("beartrapOpen_SoundSet", GetPosition(), 0, 0, false);
		sound.SetAutodestroy(true);
	}

	override void OnActivate()
	{
		#ifndef SERVER
		PlaySoundOpen();
		#endif
	}
	
	override void OnDisarm()
	{
		#ifndef SERVER
		PlaySoundBiteEmpty();
		#endif
	}
	
	//================================================================
	// ADVANCED PLACEMENT
	//================================================================
	
	override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);
		
		if (GetGame().IsServer())
		{
			PlayerBase player_PB = PlayerBase.Cast(player);
			StartActivate(player_PB);
			
			m_TrapTrigger.SetPosition(position);
			m_TrapTrigger.SetOrientation(orientation);
		}	
	}
	
	override bool IsDeployable()
	{
		return true;
	}
	
	override string GetLoopDeploySoundset()
	{
		return "beartrap_deploy_SoundSet";
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionClapBearTrapWithThisItem);
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}

#ifdef DEVELOPER	
	//================================================================
	// DEBUG
	//================================================================
			
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		StartActivate(null);
	}
	
	override void GetDebugButtonNames(out string button1, out string button2, out string button3, out string button4)
	{
		button1 = "Activate";
		button2 = "Deactivate";
	}
	
	override void OnDebugButtonPressServer(int button_index)
	{
		switch (button_index)
		{
			case 1:
				StartActivate(null);
			break;
			case 2:
				SetInactive();
			break;
		}
		
	}
#endif
}