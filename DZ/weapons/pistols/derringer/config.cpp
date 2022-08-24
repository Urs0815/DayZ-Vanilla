////////////////////////////////////////////////////////////////////
//DeRap: derringer\config.bin
//Produced from mikero's Dos Tools Dll version 8.84
//https://mikero.bytex.digital/Downloads
//'now' is Tue Aug 23 21:47:16 2022 : 'file' last modified on Fri Jun 17 09:35:27 2022
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
	class DZ_Pistols_Derringer
	{
		units[] = {"Derringer_Black","Derringer_Grey","Derringer_Pink"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Single;
class Mode_Double;
class Muzzle_Base;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class Derringer_Base: Pistol_Base
	{
		scope = 0;
		displayName = "$STR_cfgweapons_derringer_base0";
		descriptionShort = "$STR_cfgWeapons_Derringer_Base1";
		model = "\dz\weapons\pistols\derringer\derringer.p3d";
		weight = 350;
		itemSize[] = {2,1};
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		attachments[] = {};
		modelOptics = "-";
		PPDOFProperties[] = {1,1,10,200,10,1};
		WeaponLength = 0.635576;
		barrelArmor = 1.333;
		initSpeedMultiplier = 0.8;
		muzzles[] = {"this","SecondMuzzle"};
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_357"};
		DisplayMagazine = 0;
		ejectType = 2;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\FNX45\FNX_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\derringer\deringer_reload_full",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\derringer\deringer_reload_short",0.8,1,20};
		shotAction = "reloadDerringer";
		reloadAction = "reloadDerringerFull";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsMaterials[] = {"dz\weapons\pistols\derringer\data\derringer_1.rvmat"};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Derringer_Shot_SoundSet","Derringer_Tail_SoundSet","Derringer_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\firearms\derringer\deringer_single_0",1,1,600};
			begin2[] = {"dz\sounds\weapons\firearms\derringer\deringer_single_1",1,1,600};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			recoil = "recoil_derringer";
			recoilProne = "recoil_derringer_prone";
			dispersion = 0.006;
			magazineSlot = "magazine";
		};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize = 1;
			muzzlePos = "usti hlavne";
			muzzleEnd = "konec hlavne";
			modes[] = {"Single"};
			magazines[] = {};
			chamberableFrom[] = {"Ammo_357"};
			barrelArmor = 1.333;
			initSpeedMultiplier = 0.8;
			drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.005623413,1};
			soundBullet[] = {};
			class Single: Mode_Single
			{
				soundSetShot[] = {"Derringer_Shot_SoundSet","Derringer_Tail_SoundSet","Derringer_InteriorTail_SoundSet"};
				reloadTime = 1;
				dispersion = 0.006;
				magazineSlot = "magazine";
			};
			class OpticsInfo: OpticsInfoPistol
			{
				memoryPointCamera = "eye";
				modelOptics = "-";
				distanceZoomMin = 25;
				distanceZoomMax = 25;
				discreteDistance[] = {25};
				discreteDistanceInitIndex = 0;
			};
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_cz75_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\weapons\pistols\derringer\data\derringer_1.rvmat"}},{0.7,{"DZ\weapons\pistols\derringer\data\derringer_1.rvmat"}},{0.5,{"DZ\weapons\pistols\derringer\data\derringer_1_damage.rvmat"}},{0.3,{"DZ\weapons\pistols\derringer\data\derringer_1_damage.rvmat"}},{0.0,{"DZ\weapons\pistols\derringer\data\derringer_1_destruct.rvmat"}}};
				};
			};
		};
	};
	class Derringer_Black: Derringer_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\derringer\data\derringer_black_co.paa"};
	};
	class Derringer_Pink: Derringer_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\derringer\data\derringer_pink_co.paa"};
	};
	class Derringer_Grey: Derringer_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\derringer\data\derringer_grey_co.paa"};
	};
};
