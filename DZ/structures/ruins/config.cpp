////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.84
//https://mikero.bytex.digital/Downloads
//'now' is Tue Aug 23 21:45:00 2022 : 'file' last modified on Tue Jun 21 17:53:41 2022
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
	class DZ_Structures_Ruins
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
	class StaticObj_Rubble_Bricks1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Bricks1.p3d";
	};
	class StaticObj_Rubble_Bricks2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Bricks2.p3d";
	};
	class StaticObj_Rubble_Bricks3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Bricks3.p3d";
	};
	class StaticObj_Rubble_Concrete1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Concrete1.p3d";
	};
	class StaticObj_Rubble_Concrete2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Concrete2.p3d";
	};
	class StaticObj_Rubble_Concrete3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Concrete3.p3d";
	};
	class StaticObj_Rubble_DirtPile_Large: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_DirtPile_Large.p3d";
	};
	class StaticObj_Rubble_DirtPile_Medium1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_DirtPile_Medium1.p3d";
	};
	class StaticObj_Rubble_DirtPile_Medium2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_DirtPile_Medium2.p3d";
	};
	class StaticObj_Rubble_Glass: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Glass.p3d";
	};
	class StaticObj_Rubble_Metal1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Metal1.p3d";
	};
	class StaticObj_Rubble_Metal2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Metal2.p3d";
	};
	class StaticObj_Rubble_Metal3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Metal3.p3d";
	};
	class StaticObj_Rubble_Rocks1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Rocks1.p3d";
	};
	class StaticObj_Rubble_Rocks2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Rocks2.p3d";
	};
	class StaticObj_Rubble_Wood1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Wood1.p3d";
	};
	class StaticObj_Rubble_Wood2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Wood2.p3d";
	};
	class StaticObj_Rubble_Wood3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Rubble_Wood3.p3d";
	};
	class StaticObj_Ruin_Chimney: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_Chimney.p3d";
	};
	class StaticObj_Ruin_Church: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_Church.p3d";
	};
	class StaticObj_Ruin_Corner1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_Corner1.p3d";
	};
	class StaticObj_Ruin_Corner2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_Corner2.p3d";
	};
	class StaticObj_Ruin_DoorWall: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_DoorWall.p3d";
	};
	class StaticObj_Ruin_House_Total: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_House_Total.p3d";
	};
	class StaticObj_Ruin_HouseBlock_Corner_Total: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_HouseBlock_Corner_Total.p3d";
	};
	class StaticObj_Ruin_HouseBlock_Half: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_HouseBlock_Half.p3d";
	};
	class StaticObj_Ruin_HouseBlock_Total: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_HouseBlock_Total.p3d";
	};
	class StaticObj_Ruin_Rubble: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_Rubble.p3d";
	};
	class StaticObj_Ruin_Wall: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Ruins\Ruin_Wall.p3d";
	};
};
