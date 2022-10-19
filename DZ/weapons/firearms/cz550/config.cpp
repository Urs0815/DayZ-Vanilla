////////////////////////////////////////////////////////////////////
//DeRap: cz550\config.bin
//Produced from mikero's Dos Tools Dll version 8.94
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 19 20:13:36 2022 : 'file' last modified on Fri Sep 02 16:02:00 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(8 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class DZ_Weapons_Firearms_CZ550
	{
		units[] = {"cz550"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 3300;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		opticsFlare = 0;
		winchesterTypeOpticsMount = 1;
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 0.931718;
		barrelArmor = 1.6;
		initSpeedMultiplier = 1.15;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"Mag_CZ550_4rnd","Mag_CZ550_10rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"CZ550_Shot_SoundSet","CZ550_Tail_SoundSet","CZ550_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ550_silencerHomeMade_SoundSet","CZ550_silencerHomeMadeTail_SoundSet","CZ550_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
		};
	};
	class CZ550: CZ550_Base
	{
		scope = 2;
		displayName = "$STR_cfgweapons_cz5500";
		descriptionShort = "$STR_cfgweapons_cz5501";
		model = "\dz\weapons\firearms\cz550\cz550.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting","suppressorImpro"};
		itemSize[] = {10,3};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz550\data\cz550_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\cz550\data\cz550.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\cz550\Data\cz550.rvmat"}},{0.7,{"DZ\weapons\firearms\cz550\Data\cz550.rvmat"}},{0.5,{"DZ\weapons\firearms\cz550\Data\cz550_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\cz550\Data\cz550_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\cz550\Data\cz550_destruct.rvmat"}}};
				};
			};
		};
	};
};
