////////////////////////////////////////////////////////////////////
//DeRap: gp25\config.bin
//Produced from mikero's Dos Tools Dll version 8.94
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 19 20:13:39 2022 : 'file' last modified on Fri May 27 10:37:41 2022
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
	class DZ_Weapons_Launchers_GP25
	{
		units[] = {"GP25"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle_Base;
	class GP25Base: Rifle_Base
	{
		scope = 1;
	};
	class GP25: GP25Base
	{
		scope = 2;
		model = "\DZ\weapons\launchers\gp25\ubgl_gp25.p3d";
	};
	class GP25_Standalone: GP25Base
	{
		scope = 2;
		model = "\DZ\weapons\launchers\gp25\ubgl_gp25.p3d";
	};
};
