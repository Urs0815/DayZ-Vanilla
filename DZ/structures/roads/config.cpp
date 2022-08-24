////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.84
//https://mikero.bytex.digital/Downloads
//'now' is Tue Aug 23 21:44:55 2022 : 'file' last modified on Tue Jun 21 17:52:15 2022
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
	class DZ_Structures_Roads
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
	class Land_Tunnel_Biathlon_Left: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\roads\tunnels\Tunnel_Biathlon_Left.p3d";
	};
	class Land_Tunnel_Biathlon_Right: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\roads\tunnels\Tunnel_Biathlon_Right.p3d";
	};
	class StaticObj_Bridge_Metal_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Bridges\Bridge_Metal_25.p3d";
	};
	class StaticObj_Bridge_Metal_25_1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Bridges\Bridge_Metal_25_1.p3d";
	};
	class StaticObj_Bridge_Stone_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Bridges\Bridge_Stone_25.p3d";
	};
	class StaticObj_Bridge_Wood_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Bridges\Bridge_Wood_25.p3d";
	};
	class StaticObj_Bridge_Wood_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Bridges\Bridge_Wood_50.p3d";
	};
	class StaticObj_Bridge_Wood_50_1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Bridges\Bridge_Wood_50_1.p3d";
	};
	class StaticObj_Decal_Concrete_Panels: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_Concrete_Panels.p3d";
	};
	class StaticObj_Decal_Concrete_Panels_End1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_Concrete_Panels_End1.p3d";
	};
	class StaticObj_Decal_Concrete_Panels_End2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_Concrete_Panels_End2.p3d";
	};
	class StaticObj_Decal_Crosswalk: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_Crosswalk.p3d";
	};
	class StaticObj_Decal_damage_long1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_damage_long1.p3d";
	};
	class StaticObj_Decal_damage_long2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_damage_long2.p3d";
	};
	class StaticObj_Decal_damage_long3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_damage_long3.p3d";
	};
	class StaticObj_Decal_damage_long4: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_damage_long4.p3d";
	};
	class StaticObj_Decal_damage_long5: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_damage_long5.p3d";
	};
	class StaticObj_Decal_damage_medium1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_damage_medium1.p3d";
	};
	class StaticObj_Decal_damage_medium2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_damage_medium2.p3d";
	};
	class StaticObj_Decal_damage_small1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_damage_small1.p3d";
	};
	class StaticObj_Decal_damage_small2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_damage_small2.p3d";
	};
	class StaticObj_Decal_Heli_Army: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_Heli_Army.p3d";
	};
	class StaticObj_Decal_Manhole: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_Manhole.p3d";
	};
	class StaticObj_Decal_Manhole2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_Manhole2.p3d";
	};
	class StaticObj_Decal_Manhole3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Decals\Decal_Manhole3.p3d";
	};
	class StaticObj_Panel_Concrete_1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Panels\Panel_Concrete_1.p3d";
	};
	class StaticObj_Panel_Concrete_2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Panels\Panel_Concrete_2.p3d";
	};
	class StaticObj_Panel_Concrete_Dam: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Panels\Panel_Concrete_Dam.p3d";
	};
	class StaticObj_Panels_Concrete: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Panels\Panels_Concrete.p3d";
	};
	class StaticObj_Path_Panels: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Panels\Path_Panels.p3d";
	};
	class StaticObj_Path_Panels_Damaged: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Panels\Path_Panels_Damaged.p3d";
	};
	class StaticObj_Roads_Partasf1_0_2000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_0 2000.p3d";
	};
	class StaticObj_Roads_Partasf1_1_1000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_1 1000.p3d";
	};
	class StaticObj_Roads_Partasf1_6: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_6.p3d";
	};
	class StaticObj_Roads_Partasf1_6_crosswalk: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_6_crosswalk.p3d";
	};
	class StaticObj_Roads_Partasf1_6konec: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_6konec.p3d";
	};
	class StaticObj_Roads_Partasf1_7_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_7 100.p3d";
	};
	class StaticObj_Roads_Partasf1_10_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_10 25.p3d";
	};
	class StaticObj_Roads_Partasf1_10_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_10 50.p3d";
	};
	class StaticObj_Roads_Partasf1_10_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_10 75.p3d";
	};
	class StaticObj_Roads_Partasf1_10_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_10 100.p3d";
	};
	class StaticObj_Roads_Partasf1_12: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_12.p3d";
	};
	class StaticObj_Roads_Partasf1_15_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_15 75.p3d";
	};
	class StaticObj_Roads_Partasf1_22_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_22 50.p3d";
	};
	class StaticObj_Roads_Partasf1_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_25.p3d";
	};
	class StaticObj_Roads_Partasf1_30_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_30 25.p3d";
	};
	class StaticObj_Roads_Partasf1_60_10: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf1_60 10.p3d";
	};
	class StaticObj_Roads_Partasf2_0_2000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_0 2000.p3d";
	};
	class StaticObj_Roads_Partasf2_1_1000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_1 1000.p3d";
	};
	class StaticObj_Roads_Partasf2_6: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_6.p3d";
	};
	class StaticObj_Roads_Partasf2_6_crosswalk: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_6_crosswalk.p3d";
	};
	class StaticObj_Roads_Partasf2_6konec: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_6konec.p3d";
	};
	class StaticObj_Roads_Partasf2_7_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_7 100.p3d";
	};
	class StaticObj_Roads_Partasf2_10_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_10 25.p3d";
	};
	class StaticObj_Roads_Partasf2_10_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_10 50.p3d";
	};
	class StaticObj_Roads_Partasf2_10_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_10 75.p3d";
	};
	class StaticObj_Roads_Partasf2_10_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_10 100.p3d";
	};
	class StaticObj_Roads_Partasf2_12: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_12.p3d";
	};
	class StaticObj_Roads_Partasf2_15_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_15 75.p3d";
	};
	class StaticObj_Roads_Partasf2_22_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_22 50.p3d";
	};
	class StaticObj_Roads_Partasf2_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_25.p3d";
	};
	class StaticObj_Roads_Partasf2_30_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_30 25.p3d";
	};
	class StaticObj_Roads_Partasf2_60_10: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf2_60 10.p3d";
	};
	class StaticObj_Roads_Partasf3_0_2000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_0 2000.p3d";
	};
	class StaticObj_Roads_Partasf3_1_1000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_1 1000.p3d";
	};
	class StaticObj_Roads_Partasf3_6: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_6.p3d";
	};
	class StaticObj_Roads_Partasf3_6konec: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_6konec.p3d";
	};
	class StaticObj_Roads_Partasf3_7_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_7 100.p3d";
	};
	class StaticObj_Roads_Partasf3_10_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_10 25.p3d";
	};
	class StaticObj_Roads_Partasf3_10_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_10 50.p3d";
	};
	class StaticObj_Roads_Partasf3_10_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_10 75.p3d";
	};
	class StaticObj_Roads_Partasf3_10_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_10 100.p3d";
	};
	class StaticObj_Roads_Partasf3_12: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_12.p3d";
	};
	class StaticObj_Roads_Partasf3_15_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_15 75.p3d";
	};
	class StaticObj_Roads_Partasf3_22_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_22 50.p3d";
	};
	class StaticObj_Roads_Partasf3_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_25.p3d";
	};
	class StaticObj_Roads_Partasf3_30_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_30 25.p3d";
	};
	class StaticObj_Roads_Partasf3_60_10: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\asf3_60 10.p3d";
	};
	class StaticObj_Roads_Partcity_0_2000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_0 2000.p3d";
	};
	class StaticObj_Roads_Partcity_1_1000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_1 1000.p3d";
	};
	class StaticObj_Roads_Partcity_6: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_6.p3d";
	};
	class StaticObj_Roads_Partcity_6konec: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_6konec.p3d";
	};
	class StaticObj_Roads_Partcity_7_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_7 100.p3d";
	};
	class StaticObj_Roads_Partcity_10_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_10 25.p3d";
	};
	class StaticObj_Roads_Partcity_10_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_10 50.p3d";
	};
	class StaticObj_Roads_Partcity_10_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_10 75.p3d";
	};
	class StaticObj_Roads_Partcity_10_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_10 100.p3d";
	};
	class StaticObj_Roads_Partcity_12: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_12.p3d";
	};
	class StaticObj_Roads_Partcity_15_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_15 75.p3d";
	};
	class StaticObj_Roads_Partcity_22_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_22 50.p3d";
	};
	class StaticObj_Roads_Partcity_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_25.p3d";
	};
	class StaticObj_Roads_Partcity_30_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_30 25.p3d";
	};
	class StaticObj_Roads_Partcity_60_10: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\city_60 10.p3d";
	};
	class StaticObj_Roads_Partgrav_0_2000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_0 2000.p3d";
	};
	class StaticObj_Roads_Partgrav_1_1000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_1 1000.p3d";
	};
	class StaticObj_Roads_Partgrav_6: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_6.p3d";
	};
	class StaticObj_Roads_Partgrav_6konec: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_6konec.p3d";
	};
	class StaticObj_Roads_Partgrav_7_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_7 100.p3d";
	};
	class StaticObj_Roads_Partgrav_10_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_10 25.p3d";
	};
	class StaticObj_Roads_Partgrav_10_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_10 50.p3d";
	};
	class StaticObj_Roads_Partgrav_10_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_10 75.p3d";
	};
	class StaticObj_Roads_Partgrav_10_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_10 100.p3d";
	};
	class StaticObj_Roads_Partgrav_12: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_12.p3d";
	};
	class StaticObj_Roads_Partgrav_15_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_15 75.p3d";
	};
	class StaticObj_Roads_Partgrav_22_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_22 50.p3d";
	};
	class StaticObj_Roads_Partgrav_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_25.p3d";
	};
	class StaticObj_Roads_Partgrav_30_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_30 25.p3d";
	};
	class StaticObj_Roads_Partgrav_60_10: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\grav_60 10.p3d";
	};
	class StaticObj_Roads_Partkr_t_asf1_asf2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_asf1_asf2.p3d";
	};
	class StaticObj_Roads_Partkr_t_asf1_asf3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_asf1_asf3.p3d";
	};
	class StaticObj_Roads_Partkr_t_asf1_city: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_asf1_city.p3d";
	};
	class StaticObj_Roads_Partkr_t_asf2_asf2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_asf2_asf2.p3d";
	};
	class StaticObj_Roads_Partkr_t_asf2_asf3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_asf2_asf3.p3d";
	};
	class StaticObj_Roads_Partkr_t_asf3_asf2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_asf3_asf2.p3d";
	};
	class StaticObj_Roads_Partkr_t_asf3_asf3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_asf3_asf3.p3d";
	};
	class StaticObj_Roads_Partkr_t_asf3_mud: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_asf3_mud.p3d";
	};
	class StaticObj_Roads_Partkr_t_city_asf3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_city_asf3.p3d";
	};
	class StaticObj_Roads_Partkr_t_city_city: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_city_city.p3d";
	};
	class StaticObj_Roads_Partkr_t_mud_mud: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_t_mud_mud.p3d";
	};
	class StaticObj_Roads_Partkr_x_asf1_asf3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_x_asf1_asf3.p3d";
	};
	class StaticObj_Roads_Partkr_x_asf1_city: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_x_asf1_city.p3d";
	};
	class StaticObj_Roads_Partkr_x_asf2_asf3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_x_asf2_asf3.p3d";
	};
	class StaticObj_Roads_Partkr_x_city_city: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_x_city_city.p3d";
	};
	class StaticObj_Roads_Partkr_x_city_city_asf3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\kr_x_city_city_asf3.p3d";
	};
	class StaticObj_Roads_Partmud_0_2000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_0 2000.p3d";
	};
	class StaticObj_Roads_Partmud_1_1000: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_1 1000.p3d";
	};
	class StaticObj_Roads_Partmud_6: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_6.p3d";
	};
	class StaticObj_Roads_Partmud_6konec: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_6konec.p3d";
	};
	class StaticObj_Roads_Partmud_7_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_7 100.p3d";
	};
	class StaticObj_Roads_Partmud_10_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_10 25.p3d";
	};
	class StaticObj_Roads_Partmud_10_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_10 50.p3d";
	};
	class StaticObj_Roads_Partmud_10_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_10 75.p3d";
	};
	class StaticObj_Roads_Partmud_10_100: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_10 100.p3d";
	};
	class StaticObj_Roads_Partmud_12: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_12.p3d";
	};
	class StaticObj_Roads_Partmud_15_75: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_15 75.p3d";
	};
	class StaticObj_Roads_Partmud_22_50: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_22 50.p3d";
	};
	class StaticObj_Roads_Partmud_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_25.p3d";
	};
	class StaticObj_Roads_Partmud_30_25: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_30 25.p3d";
	};
	class StaticObj_Roads_Partmud_60_10: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\mud_60 10.p3d";
	};
	class StaticObj_Roads_Partpath_dirt_10: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\path_dirt_10.p3d";
	};
	class StaticObj_Roads_Partpath_dirt_30: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\path_dirt_30.p3d";
	};
	class StaticObj_Roads_Partpath_dirt_curve: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\path_dirt_curve.p3d";
	};
	class StaticObj_Roads_Partpath_rock_10: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\path_rock_10.p3d";
	};
	class StaticObj_Roads_Partpath_rock_30: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\path_rock_30.p3d";
	};
	class StaticObj_Roads_Partpath_rock_curve: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\path_rock_curve.p3d";
	};
	class StaticObj_Roads_Partrunway_beton: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_beton.p3d";
	};
	class StaticObj_Roads_Partrunway_beton_end1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_beton_end1.p3d";
	};
	class StaticObj_Roads_Partrunway_beton_end2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_beton_end2.p3d";
	};
	class StaticObj_Roads_Partrunway_dirt_1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_dirt_1.p3d";
	};
	class StaticObj_Roads_Partrunway_dirt_2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_dirt_2.p3d";
	};
	class StaticObj_Roads_Partrunway_dirt_3: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_dirt_3.p3d";
	};
	class StaticObj_Roads_Partrunway_end15: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_end15.p3d";
	};
	class StaticObj_Roads_Partrunway_end33: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_end33.p3d";
	};
	class StaticObj_Roads_Partrunway_main: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_main.p3d";
	};
	class StaticObj_Roads_Partrunway_main_40: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_main_40.p3d";
	};
	class StaticObj_Roads_Partrunway_poj_draha: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_poj_draha.p3d";
	};
	class StaticObj_Roads_Partrunway_poj_L_1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_poj_L_1.p3d";
	};
	class StaticObj_Roads_Partrunway_poj_L_1_end: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_poj_L_1_end.p3d";
	};
	class StaticObj_Roads_Partrunway_poj_L_2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_poj_L_2.p3d";
	};
	class StaticObj_Roads_Partrunway_poj_L_2_end: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_poj_L_2_end.p3d";
	};
	class StaticObj_Roads_Partrunway_poj_spoj: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_poj_spoj.p3d";
	};
	class StaticObj_Roads_Partrunway_poj_spoj_2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_poj_spoj_2.p3d";
	};
	class StaticObj_Roads_Partrunway_poj_T_1: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_poj_T_1.p3d";
	};
	class StaticObj_Roads_Partrunway_poj_T_2: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runway_poj_T_2.p3d";
	};
	class StaticObj_Roads_Partrunwayold_40_main: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Parts\runwayold_40_main.p3d";
	};
	class StaticObj_Sidewalk1_1m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_1m.p3d";
	};
	class StaticObj_Sidewalk1_5m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_5m.p3d";
	};
	class StaticObj_Sidewalk1_10m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_10m.p3d";
	};
	class StaticObj_Sidewalk1_Corner: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_Corner.p3d";
	};
	class StaticObj_Sidewalk1_End: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_End.p3d";
	};
	class StaticObj_Sidewalk1_TCross: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_TCross.p3d";
	};
	class StaticObj_Sidewalk1_Turn_5deg: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_Turn_5deg.p3d";
	};
	class StaticObj_Sidewalk1_Turn_10deg: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_Turn_10deg.p3d";
	};
	class StaticObj_Sidewalk1_Turn_20deg: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_Turn_20deg.p3d";
	};
	class StaticObj_Sidewalk1_Turn_30deg: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk1_Turn_30deg.p3d";
	};
	class StaticObj_Sidewalk2_1m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk2_1m.p3d";
	};
	class StaticObj_Sidewalk2_5m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk2_5m.p3d";
	};
	class StaticObj_Sidewalk3_Border: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk3_Border.p3d";
	};
	class StaticObj_Sidewalk3_Border_nolc: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk3_Border_nolc.p3d";
	};
	class StaticObj_Sidewalk3_Narrow_4m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk3_Narrow_4m.p3d";
	};
	class StaticObj_Sidewalk3_Narrow_12m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk3_Narrow_12m.p3d";
	};
	class StaticObj_Sidewalk3_Narrow_Corner: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk3_Narrow_Corner.p3d";
	};
	class StaticObj_Sidewalk3_Wide_4m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk3_Wide_4m.p3d";
	};
	class StaticObj_Sidewalk3_Wide_12m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk3_Wide_12m.p3d";
	};
	class StaticObj_Sidewalk3_Wide_Corner: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk3_Wide_Corner.p3d";
	};
	class StaticObj_Sidewalk3_WideB_4m: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Sidewalks\Sidewalk3_WideB_4m.p3d";
	};
	class StaticObj_Tunnel_Biathlon_Left: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Tunnels\Tunnel_Biathlon_Left.p3d";
	};
	class StaticObj_Tunnel_Biathlon_Left_anthoxanthum: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Tunnels\Tunnel_Biathlon_Left_anthoxanthum.p3d";
	};
	class StaticObj_Tunnel_Biathlon_Left_elytrigia: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Tunnels\Tunnel_Biathlon_Left_elytrigia.p3d";
	};
	class StaticObj_Tunnel_Biathlon_Right: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Tunnels\Tunnel_Biathlon_Right.p3d";
	};
	class StaticObj_Tunnel_Biathlon_Right_anthoxanthum: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Tunnels\Tunnel_Biathlon_Right_anthoxanthum.p3d";
	};
	class StaticObj_Tunnel_Biathlon_Right_elytrigia: HouseNoDestruct
	{
		scope = 2;
		model = "DZ\structures\Roads\Tunnels\Tunnel_Biathlon_Right_elytrigia.p3d";
	};
};
