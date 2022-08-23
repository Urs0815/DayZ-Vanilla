class SKS_Bayonet extends Inventory_Base
{
	override bool IsMeleeFinisher()
	{
		return true;
	}
	
	override array<int> GetValidFinishers()
	{
		return {EMeleeHitType.FINISHER_LIVERSTAB};
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == null && parent.FindAttachmentBySlotName("weaponMuzzle") == null )
		{
			return true;
		}
		return false;
	}
	
	override void OnWasAttached(EntityAI parent, int slot_id)
	{
		super.OnWasAttached(parent, slot_id);
		
		if( parent.IsWeapon() )
		{
			parent.SetBayonetAttached(true,slot_id);
		}		
	}
	
	override void OnWasDetached(EntityAI parent, int slot_id)
	{
		super.OnWasDetached(parent, slot_id);
		
		if( parent.IsWeapon() )
		{
			parent.SetBayonetAttached(false);
		}
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionBurnSewTarget);
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionSkinning);
		AddAction(ActionMineBush);
		AddAction(ActionMineTreeBark);
		AddAction(ActionBurnSewSelf);
		AddAction(ActionDigWorms);
		AddAction(ActionShaveTarget);
		AddAction(ActionShave);
	}
}