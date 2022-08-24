////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.84
//https://mikero.bytex.digital/Downloads
//'now' is Tue Aug 23 21:45:53 2022 : 'file' last modified on Tue Jun 21 18:17:25 2022
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
	class DZ_Structures_Wrecks
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
	class Land_Wreck_Uaz: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Uaz.p3d";
	};
	class Land_Wreck_Uaz_DE: Land_Wreck_Uaz
	{
		scope = 2;
		storageCategory = 4;
	};
	class Land_Boat_Small1: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Ships\Boat_Small1.p3d";
	};
	class Land_Boat_Small2: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Ships\Boat_Small2.p3d";
	};
	class Land_Boat_Small3: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Ships\Boat_Small3.p3d";
	};
	class Land_Ship_Big_FrontA: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Ships\Ship_Big_FrontA.p3d";
		featureSize = 50;
	};
	class Land_Ship_Big_FrontB: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Ships\Ship_Big_FrontB.p3d";
	};
	class Land_Ship_Big_BackA: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Ships\Ship_Big_BackA.p3d";
		featureSize = 50;
	};
	class Land_Ship_Big_BackB: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Ships\Ship_Big_BackB.p3d";
		featureSize = 50;
	};
	class Land_Ship_Big_Castle: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Ships\Ship_Big_Castle.p3d";
		featureSize = 50;
	};
	class Land_Train_742_Blue: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Trains\Train_742_Blue.p3d";
	};
	class Land_Train_742_Red: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Trains\Train_742_Red.p3d";
	};
	class Land_Train_Wagon_Box: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Trains\Train_Wagon_Box.p3d";
		class Doors
		{
			class Door1
			{
				displayName = "$STR_CfgVehicles_Land_Train_Wagon_Box_Doors_Door10";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.5;
				soundOpen = "doorWoodSlideOpen";
				soundClose = "doorWoodSlideClose";
				soundLocked = "doorWoodRattle";
			};
			class Door2
			{
				displayName = "$STR_CfgVehicles_Land_Train_Wagon_Box_Doors_Door20";
				component = "Door2";
				soundPos = "door2_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.5;
				soundOpen = "doorWoodSlideOpen";
				soundClose = "doorWoodSlideClose";
				soundLocked = "doorWoodRattle";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
			class DamageZones
			{
				class doors1
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
				class doors2
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door2"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Train_Wagon_Box_DE: Land_Train_Wagon_Box
	{
		scope = 2;
		storageCategory = 4;
	};
	class Land_Train_Wagon_Box_Mil_DE: Land_Train_Wagon_Box
	{
		scope = 2;
		storageCategory = 4;
	};
	class Land_Wreck_Caravan_MGreen: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Caravan_MGreen.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodSmallRattle";
				soundOpenABit = "doorWoodSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
			class DamageZones
			{
				class doors1
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"doors1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Wreck_Caravan_MRust: Land_Wreck_Caravan_MGreen
	{
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Caravan_MRust.p3d";
	};
	class Land_Wreck_Caravan_WBrown: Land_Wreck_Caravan_MGreen
	{
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Caravan_WBrown.p3d";
	};
	class Land_Wreck_Caravan_WGreen: Land_Wreck_Caravan_MGreen
	{
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Caravan_WGreen.p3d";
	};
	class Land_Wreck_Ikarus: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Ikarus.p3d";
	};
	class Land_Wreck_Lada_Green: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Lada_Green.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors2
			{
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors3
			{
				displayName = "door 3";
				component = "Doors3";
				soundPos = "doors3_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors4
			{
				displayName = "door 4";
				component = "Doors4";
				soundPos = "doors4_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors5
			{
				displayName = "door 5";
				component = "Doors5";
				soundPos = "doors5_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
		};
	};
	class Land_Wreck_Lada_Red: Land_Wreck_Lada_Green
	{
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Lada_Red.p3d";
	};
	class Land_Wreck_S1023_Blue: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_S1023_Blue.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
		};
	};
	class Land_Wreck_S1023_Beige: Land_Wreck_S1023_Blue
	{
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_S1023_Beige.p3d";
	};
	class Land_Wreck_V3S: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_V3S.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors2
			{
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors5
			{
				displayName = "door 5";
				component = "Doors5";
				soundPos = "doors5_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
		};
	};
	class Land_Wreck_V3S_DE: Land_Wreck_V3S
	{
		scope = 2;
		storageCategory = 4;
	};
	class Land_Wreck_Volha_Blue: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Volha_Blue.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors2
			{
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors3
			{
				displayName = "door 3";
				component = "Doors3";
				soundPos = "doors3_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors4
			{
				displayName = "door 4";
				component = "Doors4";
				soundPos = "doors4_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
			class Doors5
			{
				displayName = "door 5";
				component = "Doors5";
				soundPos = "doors5_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarSmallOpen";
				soundClose = "doorCarSmallClose";
				soundLocked = "doorCarSmallRattle";
				soundOpenABit = "doorCarSmallOpenABit";
			};
		};
	};
	class Land_Wreck_Volha_Grey: Land_Wreck_Volha_Blue
	{
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Volha_Grey.p3d";
	};
	class Land_Wreck_Trailer_Closed: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Trailer_Closed.p3d";
	};
	class Land_Wreck_Harverster: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Harverster.p3d";
	};
	class Land_Wreck_Harvester_head_trailer: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Harvester_head_trailer.p3d";
	};
	class Land_Wreck_C130J: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Aircraft\Wreck_C130J.p3d";
	};
	class Wreck_UH1Y: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "\DZ\structures\Wrecks\Aircraft\Wreck_UH1Y.p3d";
	};
	class Wreck_Mi8: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "\DZ\structures\Wrecks\Aircraft\Wreck_Mi8.p3d";
	};
	class Wreck_Mi8_Crashed: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "\DZ\structures\Wrecks\Aircraft\Wreck_Mi8_Crashed.p3d";
	};
	class Land_Wreck_Volha_Police: Land_Wreck_Volha_Blue
	{
		scope = 2;
		storageCategory = 4;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_Volha_Police.p3d";
	};
	class Land_Wreck_hb01_aban1_police: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb01_aban1_police.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
			class Doors2
			{
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
			class Doors3
			{
				displayName = "door 3";
				component = "Doors3";
				soundPos = "doors3_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
		};
	};
	class Land_Wreck_hb01_aban2_police: Land_Wreck_hb01_aban1_police
	{
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_hb01_aban2_police.p3d";
	};
	class Land_Wreck_sed01_aban1_police: Land_Wreck_hb01_aban1_police
	{
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_sed01_aban1_police.p3d";
	};
	class Land_Wreck_sed01_aban2_police: Land_Wreck_hb01_aban1_police
	{
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_sed01_aban2_police.p3d";
	};
	class Land_Wreck_hb01_aban1_blue: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\Wreck_hb01_aban1_blue.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
			class Doors2
			{
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
			class Doors3
			{
				displayName = "door 3";
				component = "Doors3";
				soundPos = "doors3_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
		};
	};
	class Land_Wreck_hb01_aban1_green: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb01_aban1_green";
	};
	class Land_Wreck_hb01_aban1_white: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb01_aban1_white";
	};
	class Land_Wreck_hb01_aban2_blue: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb01_aban2_blue";
	};
	class Land_Wreck_hb01_aban2_green: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb01_aban2_green";
	};
	class Land_Wreck_hb01_aban2_white: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb01_aban2_white";
	};
	class Land_Wreck_hb02_aban1_black: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb02_aban1_black";
	};
	class Land_Wreck_hb02_aban1_blue: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb02_aban1_blue";
	};
	class Land_Wreck_hb02_aban1_red: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb02_aban1_red";
	};
	class Land_Wreck_hb02_aban2_black: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb02_aban2_black";
	};
	class Land_Wreck_hb02_aban2_blue: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb02_aban2_blue";
	};
	class Land_Wreck_hb02_aban2_red: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_hb02_aban2_red";
	};
	class Land_Wreck_sed01_aban1_black: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed01_aban1_black";
	};
	class Land_Wreck_sed01_aban1_white: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed01_aban1_white";
	};
	class Land_Wreck_sed01_aban1_wine: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed01_aban1_wine";
	};
	class Land_Wreck_sed01_aban2_black: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed01_aban2_black";
	};
	class Land_Wreck_sed01_aban2_white: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed01_aban2_white";
	};
	class Land_Wreck_sed01_aban2_wine: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed01_aban2_wine";
	};
	class Land_Wreck_sed02_aban1_grey: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed02_aban1_grey";
	};
	class Land_Wreck_sed02_aban1_red: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed02_aban1_red";
	};
	class Land_Wreck_sed02_aban1_yellow: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed02_aban1_yellow";
	};
	class Land_Wreck_sed02_aban2_grey: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed02_aban2_grey";
	};
	class Land_Wreck_sed02_aban2_red: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed02_aban2_red";
	};
	class Land_Wreck_sed02_aban2_yellow: Land_Wreck_hb01_aban1_blue
	{
		model = "DZ\structures\Wrecks\Vehicles\Wreck_sed02_aban2_yellow";
	};
	class Land_wreck_truck01_aban1_blue: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\wreck_truck01_aban1_blue.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
		};
	};
	class Land_wreck_truck01_aban1_green: Land_wreck_truck01_aban1_blue
	{
		model = "\DZ\structures\Wrecks\Vehicles\wreck_truck01_aban1_green.p3d";
	};
	class Land_wreck_truck01_aban1_orange: Land_wreck_truck01_aban1_blue
	{
		model = "\DZ\structures\Wrecks\Vehicles\wreck_truck01_aban1_orange.p3d";
	};
	class Land_wreck_truck01_aban2_blue: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\Wrecks\Vehicles\wreck_truck01_aban2_blue.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
			class Doors2
			{
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
		};
	};
	class Land_wreck_truck01_aban2_green: Land_wreck_truck01_aban2_blue
	{
		model = "\DZ\structures\Wrecks\Vehicles\wreck_truck01_aban2_green.p3d";
	};
	class Land_wreck_truck01_aban2_orange: Land_wreck_truck01_aban2_blue
	{
		model = "\DZ\structures\Wrecks\Vehicles\wreck_truck01_aban2_orange.p3d";
	};
	class Wreck_SantasSleigh: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "\DZ\structures\Wrecks\Aircraft\Wreck_SantasSleigh.p3d";
	};
	class StaticObj_Wreck_Mi8: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Aircraft\Wreck_Mi8.p3d";
	};
	class StaticObj_Wreck_Mi8_Crashed: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Aircraft\Wreck_Mi8_Crashed.p3d";
	};
	class StaticObj_Wreck_SantasSleigh: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Aircraft\Wreck_SantasSleigh.p3d";
	};
	class StaticObj_Wreck_UH1Y: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Aircraft\Wreck_UH1Y.p3d";
	};
	class StaticObj_Wreck_Boat_Small1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Boat_Small1.p3d";
	};
	class StaticObj_Wreck_Boat_Small2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Boat_Small2.p3d";
	};
	class StaticObj_Wreck_Boat_Small3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Boat_Small3.p3d";
	};
	class StaticObj_Wreck_Ship_Big_BackA: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Ship_Big_BackA.p3d";
	};
	class StaticObj_Wreck_Ship_Big_BackB: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Ship_Big_BackB.p3d";
	};
	class StaticObj_Wreck_Ship_Big_Castle: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Ship_Big_Castle.p3d";
	};
	class StaticObj_Wreck_Ship_Big_FrontA: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Ship_Big_FrontA.p3d";
	};
	class StaticObj_Wreck_Ship_Big_FrontB: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Ship_Big_FrontB.p3d";
	};
	class StaticObj_Wreck_Ship_Big_Lifeboat: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Ship_Big_Lifeboat.p3d";
	};
	class StaticObj_Wreck_Ship_Medium_Back: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Ship_Medium_Back.p3d";
	};
	class StaticObj_Wreck_Ship_Medium_Front: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Ships\Ship_Medium_Front.p3d";
	};
	class StaticObj_Wreck_Train_742_Blue: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Trains\Train_742_Blue.p3d";
	};
	class StaticObj_Wreck_Train_742_Red: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Trains\Train_742_Red.p3d";
	};
	class StaticObj_Wreck_Train_Wagon_Flat: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Trains\Train_Wagon_Flat.p3d";
	};
	class StaticObj_Wreck_Train_Wagon_Tanker: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Trains\Train_Wagon_Tanker.p3d";
	};
	class StaticObj_Wreck_BMP1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_BMP1.p3d";
	};
	class StaticObj_Wreck_BMP2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_BMP2.p3d";
	};
	class StaticObj_Wreck_BRDM: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_BRDM.p3d";
	};
	class StaticObj_Wreck_Bulldozer: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Bulldozer.p3d";
	};
	class StaticObj_Wreck_Decal_Big: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Decal_Big.p3d";
	};
	class StaticObj_Wreck_Decal_Big_NoLC: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Decal_Big_NoLC.p3d";
	};
	class StaticObj_Wreck_Decal_Small1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Decal_Small1.p3d";
	};
	class StaticObj_Wreck_Decal_Small1_NoLC: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Decal_Small1_NoLC.p3d";
	};
	class StaticObj_Wreck_Decal_Small2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Decal_Small2.p3d";
	};
	class StaticObj_Wreck_Decal_Small2_NoLC: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Decal_Small2_NoLC.p3d";
	};
	class StaticObj_Wreck_Digger: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Digger.p3d";
	};
	class StaticObj_Wreck_HMMWV: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_HMMWV.p3d";
	};
	class StaticObj_Wreck_PowGen: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_PowGen.p3d";
	};
	class StaticObj_Wreck_T72_Chassis: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_T72_Chassis.p3d";
	};
	class StaticObj_Wreck_T72_Turret: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_T72_Turret.p3d";
	};
	class StaticObj_Wreck_Trailer_Cistern: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Trailer_Cistern.p3d";
	};
	class StaticObj_Wreck_Trailer_Flat: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Trailer_Flat.p3d";
	};
	class StaticObj_Wreck_Ural: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Ural.p3d";
	};
	class StaticObj_Wreck_Train_Wagon_Flat_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_Wagon_Flat.p3d";
	};
	class StaticObj_Wreck_Train_Wagon_Flat_Mil_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_Wagon_Flat.p3d";
	};
	class StaticObj_Train_Wagon_Flat_Industrial_Planks_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_Wagon_Flat.p3d";
	};
	class StaticObj_Train_Wagon_Flat_Industrial_Barrels_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_Wagon_Flat.p3d";
	};
	class StaticObj_Wreck_Train_Wagon_Tanker_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_Wagon_Tanker.p3d";
	};
	class StaticObj_Wreck_Train_Wagon_Tanker_Mil_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_Wagon_Tanker.p3d";
	};
	class StaticObj_Wreck_Train_742_Blue_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_742_Blue.p3d";
	};
	class StaticObj_Wreck_Train_742_Red_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_742_Red.p3d";
	};
	class StaticObj_Wreck_Train_742_Blue_Mil_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_742_Blue.p3d";
	};
	class StaticObj_Wreck_Train_742_Red_Mil_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Trains\Train_742_Red.p3d";
	};
	class StaticObj_Wreck_BMP1_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_BMP1.p3d";
	};
	class StaticObj_Wreck_BMP2_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_BMP2.p3d";
	};
	class StaticObj_Wreck_BRDM_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_BRDM.p3d";
	};
	class StaticObj_Wreck_Ural_DE: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "DZ\structures\Wrecks\Vehicles\Wreck_Ural.p3d";
	};
};
