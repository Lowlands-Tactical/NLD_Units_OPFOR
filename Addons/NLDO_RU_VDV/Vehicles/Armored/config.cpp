class CfgPatches {
	class NLDO_Units_Armored {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgVehicleClasses
{
	class NLDO_RU_VDV_31_Armored
	{
		displayName="Armored [31st]";
	};
	class NLDO_RU_VDV_76_Armored
	{
		displayName="Armored [76th]";
	};
};

class CfgVehicles {

	class O_MBT_02_cannon_F;
	class O_APC_Tracked_02_cannon_F;
	class O_MBT_02_arty_F;

	class NLDO_T100_76 : O_MBT_02_cannon_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "T100 (76th)";
		vehicleClass = "NLDO_RU_VDV_76_Armored";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_Crew_76";
		typicalCargo[] = {"NLDO_RU_VDV_Crew_76"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\T-95BlackEagle\Green\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95BlackEagle\Green\Data\Turret_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95BlackEagle\Green\Data\Turret_extra_co.paa"};

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

	class NLDO_T100_31 : NLDO_T100_Green
	{
		displayName = "T100 (31st)";
		vehicleClass = "NLDO_RU_VDV_31_Armored";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_Crew_31";
		typicalCargo[] = {"NLDO_RU_VDV_Crew_31"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\T-95BlackEagle\Woodland\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95BlackEagle\Woodland\Data\Turret_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95BlackEagle\Woodland\Data\Turret_extra_co.paa"};
		};

	class NLDO_BMP_T_76 : O_APC_Tracked_02_cannon_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "BMP-T (76th)";
		vehicleClass = "NLDO_RU_VDV_76_Armored";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Green\Data\Body_up_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Green\Data\Body_down_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Green\Data\Turret_co.paa"};

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
	
	class NLDO_BMP_T_31 : NLDO_BMP_T_Green
	{
		displayName = "BMP-T (31st)";
		vehicleClass = "NLDO_RU_VDV_31_Armored";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_Crew_31";
		typicalCargo[] = {"NLDO_RU_VDV_Crew_31"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Woodland\Data\Body_up_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Woodland\Data\Body_down_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Woodland\Data\Turret_co.paa"};
	};
	class NLDO_2S19MSTA_76 : O_MBT_02_arty_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "2S19 MSTA (76th)";
		vehicleClass = "NLDO_RU_VDV_76_Armored";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_Crew_76";
		typicalCargo[] = {"NLDO_RU_VDV_Crew_76"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo4"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\2S19MSTA\Green\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\2S19MSTA\Green\Data\Turret_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\2S19MSTA\Green\Data\Comgun_co.paa"};

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
	
	class NLDO_2S19MSTA_31 : NLDO_2S19MSTA_Green
	{
		displayName = "2S19 MSTA (31st)";
		vehicleClass = "NLDO_RU_VDV_31_Armored";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_Crew_31";
		typicalCargo[] = {"NLDO_RU_VDV_Crew_31"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo4"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\2S19MSTA\Woodland\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\2S19MSTA\Woodland\Data\Turret_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\2S19MSTA\Woodland\Data\Comgun_co.paa"};
	};
};