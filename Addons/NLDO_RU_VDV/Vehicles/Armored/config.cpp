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
		displayName="Armored";
	};
	class NLDO_RU_VDV_76_Armored
	{
		displayName="Armored";
	};
};

class CfgVehicles {

	class O_MBT_02_cannon_F;
	class O_APC_Tracked_02_cannon_F;

	class NLDO_T100_armata : O_MBT_02_cannon_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "T100 (armata)";
		vehicleClass = "NLDO_RU_VDV_76_Armored";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\T-95 Black Eagle\Armata\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95 Black Eagle\Armata\Data\Turret_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95 Black Eagle\Armata\Data\Turret_extra_co.paa"};

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

	class NLDO_T100_green : NLDO_T100_armata
	{
		displayName = "T100 (green)";
		vehicleClass = "NLDO_RU_VDV_31_Armored";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\T-95 Black Eagle\Green\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95 Black Eagle\Green\Data\Turret_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95 Black Eagle\Green\Data\Turret_extra_co.paa"};
		};

	class NLDO_T100_woodland : NLDO_T100_armata
	{
		displayName = "T100 (woodland)";
		vehicleClass = "NLDO_RU_VDV_31_Armored";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\T-95 Black Eagle\Woodland\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95 Black Eagle\Woodland\Data\Turret_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\T-95 Black Eagle\Woodland\Data\Turret_extra_co.paa"};
	};

	class NLDO_BMP_T_armata : O_APC_Tracked_02_cannon_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "BMP-T (armata)";
		vehicleClass = "NLDO_RU_VDV_76_Armored";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Armata\Data\Body_up_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Armata\Data\Body_down_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Armata\Data\Turret_co.paa"};

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
	
	class NLDO_BMP_T_green : NLDO_BMP_T_armata
	{
		displayName = "BMP-T (green)";
		vehicleClass = "NLDO_RU_VDV_31_Armored";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Green\Data\Body_up_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Green\Data\Body_down_co.paa", "\NLDO_RU_VDV\Vehicles\Armored\BMP-T\Green\Data\Turret_co.paa"};
	};
};