////////////////////////////////////////////////////////////////////
//DeRap: aug\config.bin
//Produced from mikero's Dos Tools Dll version 8.94
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 19 20:13:36 2022 : 'file' last modified on Fri Sep 02 16:01:41 2022
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
	class DZ_Weapons_Firearms_aug
	{
		units[] = {"AugSteyr"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Aug_Base: Rifle_Base
	{
		scope = 0;
		weight = 3600;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazineSwitchTime = 0.38;
		initSpeedMultiplier = 1.0;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 0.8;
		barrelArmor = 2.3;
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadAug";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_reload",0.8,1,20};
		modes[] = {"SemiAuto","Burst","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.085;
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			burst = 3;
			reloadTime = 0.098;
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.09;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			modelOptics = "-";
			opticsZoomMin = 0.28;
			opticsZoomMax = 0.28;
			opticsZoomInit = 0.28;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 25;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
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
	};
	class Aug: Aug_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_AugSteyr0";
		descriptionShort = "$STR_cfgWeapons_AugSteyr1";
		model = "\dz\weapons\firearms\aug\aug.p3d";
		weight = 3600;
		magazines[] = {"Mag_Aug_30Rnd","Mag_STANAG_30Rnd","Mag_STANAGCoupled_30Rnd","Mag_STANAG_60Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","Mag_CMAG_10Rnd_Green","Mag_CMAG_20Rnd_Green","Mag_CMAG_30Rnd_Green","Mag_CMAG_40Rnd_Green","Mag_CMAG_10Rnd_Black","Mag_CMAG_20Rnd_Black","Mag_CMAG_30Rnd_Black","Mag_CMAG_40Rnd_Black"};
		attachments[] = {"weaponWrap","weaponMuzzleM4","weaponOptics","weaponFlashlight"};
		itemSize[] = {8,3};
		spawnDamageRange[] = {0.0,0.6};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\aug\data\aug_barrel.rvmat","DZ\weapons\firearms\aug\data\aug_stock.rvmat","DZ\weapons\firearms\aug\data\rail.rvmat"}},{0.7,{"DZ\weapons\firearms\aug\data\aug_barrel.rvmat","DZ\weapons\firearms\aug\data\aug_stock.rvmat","DZ\weapons\firearms\aug\data\rail.rvmat"}},{0.5,{"DZ\weapons\firearms\aug\data\aug_barrel_damage.rvmat","DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat","DZ\weapons\firearms\aug\data\rail_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\aug\data\aug_barrel_damage.rvmat","DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat","DZ\weapons\firearms\aug\data\rail_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\aug\data\aug_barrel_destruct.rvmat","DZ\weapons\firearms\aug\data\aug_stock_destruct.rvmat","DZ\weapons\firearms\aug\data\rail_destruct.rvmat"}}};
				};
			};
		};
	};
	class AugShort: Aug_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_AugSteyr_Short0";
		descriptionShort = "$STR_cfgWeapons_AugSteyr_Short1";
		model = "\dz\weapons\firearms\aug\aug_short.p3d";
		weight = 3200;
		WeaponLength = 0.48;
		magazines[] = {"Mag_Aug_30Rnd"};
		attachments[] = {"weaponWrap","weaponOpticsAug","suppressorImpro"};
		simpleHiddenSelections[] = {"hide_barrel"};
		initSpeedMultiplier = 0.85;
		itemSize[] = {6,3};
		spawnDamageRange[] = {0.0,0.6};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\aug\data\aug_barrel.rvmat","DZ\weapons\firearms\aug\data\aug_stock.rvmat","DZ\weapons\firearms\aug\data\scope.rvmat"}},{0.7,{"DZ\weapons\firearms\aug\data\aug_barrel.rvmat","DZ\weapons\firearms\aug\data\aug_stock.rvmat","DZ\weapons\firearms\aug\data\scope.rvmat"}},{0.5,{"DZ\weapons\firearms\aug\data\aug_barrel_damage.rvmat","DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat","DZ\weapons\firearms\aug\data\scope_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\aug\data\aug_barrel_damage.rvmat","DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat","DZ\weapons\firearms\aug\data\scope_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\aug\data\aug_barrel_destruct.rvmat","DZ\weapons\firearms\aug\data\aug_stock_destruct.rvmat","DZ\weapons\firearms\aug\data\scope_destruct.rvmat"}}};
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
	class AugOptic: ItemOptics
	{
		scope = 2;
		model = "\dz\weapons\firearms\aug\proxy\scope.p3d";
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
			opticsZoomMin = "0.5236/1.5";
			opticsZoomMax = "0.5236/1.5";
			opticsZoomInit = "0.5236/1.5";
			distanceZoomMin = 50;
			distanceZoomMax = 400;
			discreteDistance[] = {50,100,150,200,300,400};
			discreteDistanceInitIndex = 1;
			PPMaskProperties[] = {0.5,0.5,0.185,0.01};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0.1;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 400;
			discreteDistance[] = {50,100,150,200,300,400};
			discreteDistanceInitIndex = 1;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
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
		model = "\dz\weapons\firearms\aug\proxy\scope.p3d";
	};
};
