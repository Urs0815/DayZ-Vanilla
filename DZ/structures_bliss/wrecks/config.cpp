////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.94
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 19 20:15:12 2022 : 'file' last modified on Thu Sep 01 15:03:38 2022
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
	class DZ_Structures_Bliss_Wrecks
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
	class Land_Boat_Small4: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures_bliss\Wrecks\Ships\Boat_Small4.p3d";
	};
	class Land_Boat_Small5: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures_bliss\Wrecks\Ships\Boat_Small5.p3d";
	};
	class Land_Boat_Small6: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures_bliss\Wrecks\Ships\Boat_Small6.p3d";
	};
	class Land_Wreck_Tractor: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures_bliss\Wrecks\Vehicles\Wreck_Tractor.p3d";
	};
	class Land_Wreck_Tractor_DE: Land_Wreck_Tractor
	{
		scope = 2;
		storageCategory = 4;
	};
	class Land_Wreck_Mining_Excavator: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures_bliss\Wrecks\Vehicles\Wreck_Mining_Excavator.p3d";
	};
	class Land_Wreck_Mining_HaulTruck: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures_bliss\Wrecks\Vehicles\Wreck_Mining_HaulTruck.p3d";
	};
};
