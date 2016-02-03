class CfgPatches {
	class NLDO_Units_Wheeled {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgVehicles {

	class O_MRAP_02_hmg_F;
	class O_MRAP_02_F;
	class O_APC_Wheeled_02_rcws_F;
	class O_Truck_02_transport_F;
	class O_Truck_02_covered_F;
	class O_Truck_02_medical_F;
	class O_Truck_02_Ammo_F;
	class O_Truck_02_fuel_F;
	class O_Truck_02_box_F;

	class NLDO_Punisher_76 : O_MRAP_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "Punisher (76th)";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Green\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Green\Data\Wheels_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Green\Data\Comgun_co.paa"};
	
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
			class _xx_CUP_75Rnd_TE4_LRT4_Tracer_545x39_RPK_M
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

	class NLDO_Punisher_31 : NLDO_Punisher_76
	{
		displayName = "Punisher (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Woodland\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Woodland\Data\Wheels_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Woodland\Data\Comgun_co.paa"};
	};

	class NLDO_Punisher_76_HMG : O_MRAP_02_hmg_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "Punisher HMG (76th)";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Green\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Green\Data\Wheels_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Green\Data\Comgun_co.paa"};
	
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

	class NLDO_Punisher_31_HMG : NLDO_Punisher_76_HMG
	{
		displayName = "Punisher HMG(31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Woodland\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Woodland\Data\Wheels_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\PunisherMRAP\Woodland\Data\Comgun_co.paa"};
	};

	class NLDO_Otokar_76 : O_APC_Wheeled_02_rcws_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "Otokar (76th)";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\OtokarArma\Green\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\OtokarArma\Green\Data\Wheels_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\OtokarArma\Green\Data\Comgun_co.paa"};

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

	class NLDO_Otokar_31 : NLDO_Otokar_76
	{
		displayName = "Otokar (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\OtokarArma\Woodland\Data\Body_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\OtokarArma\Woodland\Data\Wheels_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\OtokarArma\Woodland\Data\Comgun_co.paa"};
	};

	class NLDO_kamaz_Transport_76 : O_Truck_02_transport_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "Kamaz Transport (76th)";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_front_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_covered_co.paa"};

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

	class NLDO_kamaz_Transport_31 : NLDO_kamaz_Transport_76
	{
		displayName = "Kamaz Transport (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
	};

	class NLDO_kamaz_Covered_76 : O_Truck_02_covered_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "Kamaz Covered (76th)";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_front_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_covered_co.paa"};

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

	class NLDO_kamaz_Covered_31 : NLDO_kamaz_Covered_76
	{
		displayName = "kamaz Covered (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
	};

	class NLDO_kamaz_Medical_76 : O_Truck_02_medical_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "Kamaz Medical (76th)";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_front_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_covered_co.paa"};

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

	class NLDO_kamaz_Medical_31 : NLDO_kamaz_Medical_76
	{
		displayName = "kamaz Medical (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
	};

	class NLDO_kamaz_Fuel_76 : O_Truck_02_fuel_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "Kamaz Fuel (76th)";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_front_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_fuel_co.paa"};

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

	class NLDO_kamaz_Fuel_31 : NLDO_kamaz_Fuel_76
	{
		displayName = "kamaz Fuel (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
	};

	class NLDO_kamaz_Repair_76 : O_Truck_02_box_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "Kamaz Repair (76th)";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_front_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_repair_co.paa"};

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

	class NLDO_kamaz_Repair_31 : NLDO_kamaz_Repair_76
	{
		displayName = "kamaz Repair (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
	};

	class NLDO_kamaz_Ammo_76 : O_Truck_02_Ammo_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "Kamaz Ammo (76th)";
		faction = "NLDO_RU_VDV_76";
		crew = "NLDO_RU_VDV_76_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_76_rifleman"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_front_co.paa", "\NLDO_RU_VDV\Vehicles\Wheeled\KamazTrucks\Data\Kamaz_repair_co.paa"};

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

	class NLDO_kamaz_Ammo_31 : NLDO_kamaz_Ammo_76
	{
		displayName = "kamaz Ammo (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
	};
};