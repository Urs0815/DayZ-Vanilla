////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.94
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 19 20:13:23 2022 : 'file' last modified on Mon Jul 25 16:24:40 2022
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
	class DZ_Water
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
	class Land_streambed_leaf_long_curve_left: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_long_curve_left.p3d";
	};
	class Land_streambed_leaf_long_curve_left_2: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_long_curve_left_2.p3d";
	};
	class Land_streambed_leaf_long_curve_right: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_long_curve_right.p3d";
	};
	class Land_streambed_leaf_long_curve_right_2: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_long_curve_right_2.p3d";
	};
	class Land_streambed_leaf_long_snake: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_long_snake.p3d";
	};
	class Land_streambed_leaf_long_straight: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_long_straight.p3d";
	};
	class Land_streambed_leaf_long_straight_2: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_long_straight_2.p3d";
	};
	class Land_streambed_leaf_short_arrow: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_short_arrow.p3d";
	};
	class Land_streambed_leaf_short_slanted: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_short_slanted.p3d";
	};
	class Land_streambed_leaf_short_slanted_inv: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_short_slanted_inv.p3d";
	};
	class Land_streambed_leaf_short_straight: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_leaf_short_straight.p3d";
	};
	class Land_streambed_moss_long_curve_left: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_long_curve_left.p3d";
	};
	class Land_streambed_moss_long_curve_left_2: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_long_curve_left_2.p3d";
	};
	class Land_streambed_moss_long_curve_right: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_long_curve_right.p3d";
	};
	class Land_streambed_moss_long_curve_right_2: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_long_curve_right_2.p3d";
	};
	class Land_streambed_moss_long_snake: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_long_snake.p3d";
	};
	class Land_streambed_moss_long_straight: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_long_straight.p3d";
	};
	class Land_streambed_moss_long_straight_2: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_long_straight_2.p3d";
	};
	class Land_streambed_moss_short_arrow: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_short_arrow.p3d";
	};
	class Land_streambed_moss_short_slanted: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_short_slanted.p3d";
	};
	class Land_streambed_moss_short_slanted_inv: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_short_slanted_inv.p3d";
	};
	class Land_streambed_moss_short_straight: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_moss_short_straight.p3d";
	};
	class Land_streambed_sand_long_curve_left: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_sand_long_curve_left.p3d";
	};
	class Land_streambed_sand_long_curve_right: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_sand_long_curve_right.p3d";
	};
	class Land_streambed_sand_long_snake: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_sand_long_snake.p3d";
	};
	class Land_streambed_sand_long_straight: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_sand_long_straight.p3d";
	};
	class Land_streambed_sand_short_arrow: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_sand_short_arrow.p3d";
	};
	class Land_streambed_sand_short_slanted: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_sand_short_slanted.p3d";
	};
	class Land_streambed_sand_short_slanted_inv: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_sand_short_slanted_inv.p3d";
	};
	class Land_streambed_sand_short_straight: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Streambed\streambed_sand_short_straight.p3d";
	};
	class StaticObj_water_pond_50x50m: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\water\Ponds\pond_50x50.p3d";
	};
};
