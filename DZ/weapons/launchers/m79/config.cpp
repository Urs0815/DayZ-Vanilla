////////////////////////////////////////////////////////////////////
//DeRap: m79\config.bin
//Produced from mikero's Dos Tools Dll version 8.84
//https://mikero.bytex.digital/Downloads
//'now' is Tue Aug 23 21:47:11 2022 : 'file' last modified on Fri May 27 16:11:41 2022
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
	class DZ_Weapons_Launchers_M79
	{
		units[] = {"M79"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Launchers"};
	};
};
class Mode_Single;
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class M79_Base: Rifle_Base
	{
		scope = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,10,170,4,10};
		WeaponLength = 0.981055;
		barrelArmor = 1.875;
		initSpeedMultiplier = 1.0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_40mm_Explosive","Ammo_40mm_ChemGas","Ammo_40mm_Smoke_Red","Ammo_40mm_Smoke_Green","Ammo_40mm_Smoke_White","Ammo_40mm_Smoke_Black"};
		magazines[] = {};
		DisplayMagazine = 0;
		ejectType = 3;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\izh18\izh18_reload",0.8,1,20};
		reloadSound[] = {"",0.05623413,1,20};
		shotAction = "";
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"M79_Shot_SoundSet","M79_Tail_SoundSet","M79_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_1",1,1,800};
			soundBegin[] = {"begin1",0.56,"begin2",0.5};
			reloadTime = 1;
			dispersion = 0.025;
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mosin9130_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 0;
					positionOffset[] = {-0.03,0,0};
				};
			};
		};
		class NoiseShoot
		{
			strength = 50;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {75};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 75;
			distanceZoomMax = 75;
		};
	};
	class M79: M79_Base
	{
		scope = 2;
		displayName = "$STR_M790";
		descriptionShort = "$STR_M791";
		model = "\dz\weapons\launchers\m79\m79.p3d";
		weight = 2700;
		itemSize[] = {6,3};
		attachments[] = {"weaponOpticsAug"};
		hiddenSelections[] = {"camo_a","camo_b"};
		hiddenSelectionsTextures[] = {"\dz\weapons\launchers\m79\data\m79_a_co.paa","\dz\weapons\launchers\m79\data\m79_b_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\launchers\m79\data\m79_a.rvmat","dz\weapons\launchers\m79\data\m79_b.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\weapons\launchers\m79\data\m79_a.rvmat","DZ\weapons\launchers\m79\data\m79_b.rvmat"}},{0.7,{"DZ\weapons\launchers\m79\data\m79_a.rvmat","DZ\weapons\launchers\m79\data\m79_b.rvmat"}},{0.5,{"DZ\weapons\launchers\m79\data\m79_a_damage.rvmat","DZ\weapons\launchers\m79\data\m79_b_damage.rvmat"}},{0.3,{"DZ\weapons\launchers\m79\data\m79_a_damage.rvmat","DZ\weapons\launchers\m79\data\m79_b_damage.rvmat"}},{0.0,{"DZ\weapons\launchers\m79\data\m79_a_destruct.rvmat","DZ\weapons\launchers\m79\data\m79_b_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics: Inventory_Base
	{
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "PSO11Optic_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "PSO11Optic_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class M79DummyOptics: ItemOptics
	{
		scope = 2;
		model = "\dz\weapons\launchers\m79\proxy\dummyscope.p3d";
		weight = 1;
		inventorySlot[] = {"weaponOpticsAug"};
		reversed = 0;
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 75;
			distanceZoomMax = 75;
			discreteDistance[] = {75};
			discreteDistanceInitIndex = 0;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxydummyscope: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsAug";
		model = "\dz\weapons\firearms\aug\proxy\dummyscope.p3d";
	};
};
