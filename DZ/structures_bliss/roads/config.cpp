////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.84
//https://mikero.bytex.digital/Downloads
//'now' is Tue Aug 23 21:49:14 2022 : 'file' last modified on Tue Jun 21 19:51:21 2022
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
	class DZ_Structures_Bliss_Roads
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class StaticObj_Road_Sidewalk_Stairs: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk_Stairs.p3d";
	};
	class StaticObj_Road_Sidewalk4_4m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk4_4m.p3d";
	};
	class StaticObj_Road_Sidewalk4_8m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk4_8m.p3d";
	};
	class StaticObj_Road_Sidewalk4_Border_2m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk4_Border_2m.p3d";
	};
	class StaticObj_Road_Sidewalk4_Border_4m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk4_Border_4m.p3d";
	};
	class StaticObj_Road_Sidewalk4_Border_8m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk4_Border_8m.p3d";
	};
	class StaticObj_Road_Sidewalk4_Corner: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk4_Corner.p3d";
	};
	class StaticObj_Road_Sidewalk4_Narrow_2m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk4_Narrow_2m.p3d";
	};
	class StaticObj_Road_Sidewalk4_Narrow_4m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk4_Narrow_4m.p3d";
	};
	class StaticObj_Road_Sidewalk4_Narrow_8m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk4_Narrow_8m.p3d";
	};
	class StaticObj_Road_Sidewalk5_Narrow: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk5_Narrow.p3d";
	};
	class StaticObj_Road_Sidewalk5_Narrow_Corner: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk5_Narrow_Corner.p3d";
	};
	class StaticObj_Road_Sidewalk5_Wide: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk5_Wide.p3d";
	};
	class StaticObj_Road_Sidewalk5_Wide_Corner: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sidewalks\Sidewalk5_Wide_Corner.p3d";
	};
	class StaticObj_Road_sinkhole_sila: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures_bliss\Roads\Sinkhole\sinkhole_sila.p3d";
	};
};
