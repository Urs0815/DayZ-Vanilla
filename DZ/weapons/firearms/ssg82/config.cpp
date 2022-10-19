////////////////////////////////////////////////////////////////////
//DeRap: ssg82\config.bin
//Produced from mikero's Dos Tools Dll version 8.94
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 19 20:13:38 2022 : 'file' last modified on Fri Sep 02 16:02:37 2022
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
	class DZ_Weapons_Firearms_SSG82
	{
		units[] = {"SSG82"};
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
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 4500;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 0.96;
		barrelArmor = 0.8;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer"};
		magazines[] = {"Mag_SSG82_5rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
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
			soundSetShot[] = {"SSG82_Shot_SoundSet","SSG82_Tail_SoundSet","SSG82_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SSG82_silencerHomeMade_SoundSet","SSG82_silencerHomeMadeTail_SoundSet","SSG82_silencerInteriorHomeMadeTail_SoundSet"}};
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
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
	};
	class SSG82: SSG82_Base
	{
		scope = 2;
		displayName = "$STR_cfgweapons_SSG820";
		descriptionShort = "$STR_cfgweapons_SSG821";
		model = "\dz\weapons\firearms\ssg82\ssg82.p3d";
		attachments[] = {"weaponWrap","weaponOpticsAug","suppressorImpro"};
		itemSize[] = {9,3};
		hiddenSelections[] = {"camo_01","camo_02"};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\ssg82\data\ssg82_01_co.paa","dz\weapons\firearms\ssg82\data\ssg82_02_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\ssg82\data\ssg82_01.rvmat","dz\weapons\firearms\ssg82\data\ssg82_02.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\ssg82\data\ssg82_01.rvmat","DZ\weapons\firearms\ssg82\data\ssg82_02.rvmat"}},{0.7,{"DZ\weapons\firearms\ssg82\data\ssg82_01.rvmat","DZ\weapons\firearms\ssg82\data\ssg82_02.rvmat"}},{0.5,{"DZ\weapons\firearms\ssg82\data\ssg82_01_damage.rvmat","DZ\weapons\firearms\ssg82\data\ssg82_02_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\ssg82\data\ssg82_01_damage.rvmat","DZ\weapons\firearms\ssg82\data\ssg82_02_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\ssg82\data\ssg82_01_destruct.rvmat","DZ\weapons\firearms\ssg82\data\ssg82_02_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics: Inventory_Base{};
	class SSG82Optic: ItemOptics
	{
		scope = 2;
		model = "\dz\weapons\firearms\ssg82\proxy\optic_SSG82.p3d";
		weight = 1;
		inventorySlot[] = {"weaponOpticsAug"};
		reversed = 0;
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.26,0.085};
			PPLensProperties[] = {0.75,0.75,0,0};
			PPBlurProperties = 0.4;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyscope: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsAug";
		model = "\dz\weapons\firearms\ssg82\proxy\optic_SSG82.p3d";
	};
};
