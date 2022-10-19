////////////////////////////////////////////////////////////////////
//DeRap: aiconfigs\config.bin
//Produced from mikero's Dos Tools Dll version 8.94
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 19 20:14:34 2022 : 'file' last modified on Tue Mar 01 12:48:32 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_data_aiconfigs_bliss{};
};
class GroupBehaviourTemplates
{
	class BlissBearGroupBeh
	{
		type = "Bear";
		agentPathLength = 20.0;
		simpleLodGroupSpeed = 1.0;
		singleAgentSafeKeeperDelayMin = 30.0;
		singleAgentSafeKeeperDelayMax = 50.0;
		safeKeeperIntervalMin = 30.0;
		safeKeeperIntervalMax = 50.0;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin = 8.0;
				endTimeMax = 9.0;
				zoneType = "Graze";
			};
			class Activity2
			{
				endTimeMin = 10.0;
				endTimeMax = 11.0;
				zoneType = "Graze";
			};
			class Activity3
			{
				endTimeMin = 13.0;
				endTimeMax = 14.0;
				zoneType = "Graze";
			};
			class Activity4
			{
				endTimeMin = 17.0;
				endTimeMax = 18.0;
				zoneType = "Graze";
			};
			class Activity5
			{
				endTimeMin = 20.0;
				endTimeMax = 21.0;
				zoneType = "Graze";
			};
		};
	};
};
