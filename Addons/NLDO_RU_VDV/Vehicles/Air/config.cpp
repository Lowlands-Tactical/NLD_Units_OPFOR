class CfgPatches {
	class NLDO_Units_Air {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgFactionClasses
{

	class NLDO_RU_VDV_31_Air
	{
		displayName="[NLDO] 31st Guards AA";
		icon="\NLDO_RU_VDV\Icon\Icon-russia.jpg";
		priority=1;
		side=1;
	};
	class NLDO_RU_VDV_76_Air
	{
		displayName="[NLDO] 76th Guards AA";
		icon="\NLDO_RU_VDV\Icon\Icon-russia.jpg";
		priority=1;
		side=1;
	};
};

class CfgVehicleClasses
{
	class NLDO_RU_VDV_31_Air
	{
		displayName="Air [31st]";
	};
	class NLDO_RU_VDV_76_Air
	{
		displayName="Air [76th]";
	};
};

class WeaponFireGun ;
class WeaponCloudsGun ;
class WeaponFireMGun ;
class WeaponCloudsMGun ;
class RCWSOptics;

class CfgVehicles 
{
	class O_Heli_Light_02_F;
	class O_Heli_Light_02_unarmed_F;
	class O_Heli_Attack_02_black_F;
	class O_Plane_CAS_02_F;

	class NLDO_KA60_76 : O_Heli_Light_02_unarmed_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_unarmed_F";
		displayName = "KA-60 (76th)";
		side = 0;
		crew = "NLDO_RU_VDV_HeliPilot_76";
		typicalCargo[] = {"NLDO_RU_VDV_HeliCrew_76","NLDO_RU_VDV_HeliPilot_76"};
		vehicleClass = "NLDO_RU_VDV_76_Air";
		faction = "NLDO_RU_VDV_76";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\KA-60\Black\Data\Body_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=25;
			};
			class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=10;
			};
			class _xx_CUP_RPG18_M
			{
				magazine="CUP_RPG18_M";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class NLDO_KA60_31 : NLDO_KA60_76
	{
		displayName = "KA-60 (31st)";
		crew = "NLDO_RU_VDV_HeliPilot_31";
		typicalCargo[] = {"NLDO_RU_VDV_HeliCrew_31","NLDO_RU_VDV_HeliPilot_31"};
		vehicleClass = "NLDO_RU_VDV_31_Air";
		faction = "NLDO_RU_VDV_31";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\KA-60\Camo\Data\Body_co.paa"};
	};
	
	class NLDO_KA60_Armed_76 : O_Heli_Light_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_F";
		displayName = "KA-60 armed (76th)";
		side = 0;
		crew = "NLDO_RU_VDV_HeliPilot_76";
		typicalCargo[] = {"NLDO_RU_VDV_HeliCrew_76","NLDO_RU_VDV_HeliPilot_76"};
		vehicleClass = "NLDO_RU_VDV_76_Air";
		faction = "NLDO_RU_VDV_76";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\KA-60\Black\Data\Body_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=25;
			};
			class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=10;
			};
			class _xx_CUP_RPG18_M
			{
				magazine="CUP_RPG18_M";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
	class NLDO_KA60_Armed_31 : NLDO_KA60_Armed_76
	{
		displayName = "KA-60 armed (31st)";
		crew = "NLDO_RU_VDV_HeliPilot_31";
		typicalCargo[] = {"NLDO_RU_VDV_HeliCrew_31","NLDO_RU_VDV_HeliPilot_31"};
		vehicleClass = "NLDO_RU_VDV_31_Air";
		faction = "NLDO_RU_VDV_31";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\KA-60\Camo\Data\Body_co.paa"};
	};
	
	class NLDO_MI48_76 : O_Heli_Attack_02_black_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Attack_02_black_F";
		displayName = "MI-48 (76th)";
		side = 0;
		crew = "NLDO_RU_VDV_HeliPilot_76";
		typicalCargo[] = {"NLDO_RU_VDV_HeliCrew_76","NLDO_RU_VDV_HeliPilot_76"};
		vehicleClass = "NLDO_RU_VDV_76_Air";
		faction = "NLDO_RU_VDV_76";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\MI-48\Black\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Air\MI-48\Black\Data\Rotor_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=25;
			};
			class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=10;
			};
			class _xx_CUP_RPG18_M
			{
				magazine="CUP_RPG18_M";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
	class NLDO_MI48_31 : NLDO_MI48_Black_76
	{
		displayName = "MI-48 (31st)";
		crew = "NLDO_RU_VDV_HeliPilot_31";
		typicalCargo[] = {"NLDO_RU_VDV_HeliCrew_31","NLDO_RU_VDV_HeliPilot_31"};
		vehicleClass = "NLDO_RU_VDV_31_Air";
		faction = "NLDO_RU_VDV_31";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\MI-48\Woodland\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Air\MI-48\Woodland\Data\Rotor_co.paa"};
	};
	
	class NLDO_YAK131_76 : O_Plane_CAS_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Plane_CAS_02_F";
		displayName = "YAK-131 (76th)";
		side = 0;
		crew = "NLDO_RU_VDV_Pilot_76";
		vehicleClass = "NLDO_RU_VDV_76_Air";
		faction = "NLDO_RU_VDV_76";
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\Yak-131\Data\Body_up_co.paa","\NLDO_RU_VDV\Vehicles\Air\Yak-131\Data\Body_down_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=25;
			};
			class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=10;
			};
			class _xx_CUP_RPG18_M
			{
				magazine="CUP_RPG18_M";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
	class NLDO_YAK131_31 : NLDO_YAK131_76
	{
		displayName = "YAK-131 (31st)";
		crew = "NLDO_RU_VDV_Pilot_31";
		vehicleClass = "NLDO_RU_VDV_31_Air";
		faction = "NLDO_RU_VDV_31";
	};
};
