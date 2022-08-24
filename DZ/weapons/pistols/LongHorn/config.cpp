////////////////////////////////////////////////////////////////////
//DeRap: LongHorn\config.bin
//Produced from mikero's Dos Tools Dll version 8.84
//https://mikero.bytex.digital/Downloads
//'now' is Tue Aug 23 21:47:17 2022 : 'file' last modified on Fri Jun 17 09:35:13 2022
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
	class DZ_Pistols_Encore
	{
		units[] = {"LongHorn"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
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
	class Pistol_Base;
	class LongHorn_Base: Pistol_Base
	{
		scope = 0;
		weight = 2050;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		WeaponLength = 0.7;
		initSpeedMultiplier = 0.8;
		barrelArmor = 2.0;
		PPDOFProperties[] = {1,0.9,10,150,5,10};
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		ejectType = 2;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\LongHorn\Longhorn_reload",0.8,1,20};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"LongHorn_Shot_SoundSet","LongHorn_Tail_SoundSet","LongHorn_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"LongHorn_silencerHomeMade_SoundSet","LongHorn_silencerHomeMadeTail_SoundSet","LongHorn_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\LongHorn\LongHorn_close_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\LongHorn\LongHorn_close_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\LongHorn\LongHorn_close_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1.0;
			recoil = "recoil_longhorn";
			recoilProne = "recoil_longhorn_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
		};
	};
	class LongHorn: LongHorn_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_LongHorn0";
		descriptionShort = "$STR_cfgWeapons_LongHorn1";
		model = "\dz\weapons\pistols\LongHorn\LongHorn.p3d";
		attachments[] = {"weaponOpticsCrossbow","suppressorImpro"};
		DisplayMagazine = 0;
		itemSize[] = {5,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\weapons\pistols\LongHorn\data\LongHorn.rvmat"}},{0.7,{"DZ\weapons\pistols\LongHorn\data\LongHorn.rvmat"}},{0.5,{"DZ\weapons\pistols\LongHorn\data\LongHorn_damage.rvmat"}},{0.3,{"DZ\weapons\pistols\LongHorn\data\LongHorn_damage.rvmat"}},{0.0,{"DZ\weapons\pistols\LongHorn\data\LongHorn_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyLongHorn: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\LongHorn\LongHorn.p3d";
	};
};
