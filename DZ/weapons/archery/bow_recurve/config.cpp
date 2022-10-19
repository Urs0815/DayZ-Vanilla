////////////////////////////////////////////////////////////////////
//DeRap: bow_recurve\config.bin
//Produced from mikero's Dos Tools Dll version 8.94
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 19 20:13:34 2022 : 'file' last modified on Wed Jan 05 18:12:03 2022
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
	class DZ_Weapons_Archery_Bow_Recurve
	{
		units[] = {"bow_recurve"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Archery"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Archery_Base;
	class RecurveBow: Archery_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_RecurveBow0";
		descriptionShort = "$STR_cfgWeapons_RecurveBow1";
		model = "\dz\weapons\archery\bow_Recurve\bow_recurve.p3d";
		animClass = "Bow";
		rotationFlags = 17;
		weight = 550;
		itemSize[] = {6,10};
		reloadAction = "ReloadBow";
		shotAction = "ReloadBow";
		drySound[] = {"dz\sounds\weapons\bows\dry_bow_0",0.9,1,30};
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_ArrowComposite","Ammo_ArrowPrimitive","Ammo_ArrowBoned","Ammo_SharpStick","Mag_Arrows_Quiver"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\archery\bow_Recurve\data\bow_Recurve.rvmat","DZ\weapons\archery\bow_Recurve\data\bow_Recurve_damage.rvmat","DZ\weapons\archery\bow_Recurve\data\bow_Recurve_destruct.rvmat"};
		};
	};
};
