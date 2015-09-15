
class CfgPatches
{
	class NLDO_Flags
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
	};
};
class CfgVehicles
{
	class FlagPole_F;



	class NLDO_Russia_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Flag(Russia)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\NLDO_Flags\Flags\Russia.paa""";

};
	class NLDO_ProRussiaSep_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Flag(Pro Russian Sep)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\NLDO_Flags\Flags\ProRussianSep.paa""";

};
	};
	class NLDO_Ukraine_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Flag(Lowlands Tactical)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\NLDO_Flags\Flags\Ukraine.paa""";

		};
	};
};
//};
