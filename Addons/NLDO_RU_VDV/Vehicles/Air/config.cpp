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

	class NLDO_RU_VDV_Air
	{
		displayName="VDV Air";
		icon="\NLDO_RU_VDV\Icon\Icon-russia.jpg";
		priority=1;
		side=1;
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

	class NLDO_KA60 : O_Heli_Light_02_unarmed_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_unarmed_F";
		displayName = "KA-60 Orca";
		side = 0;
		crew = "NLDO_RU_VDV_Pilot";
		faction = "NLDO_RU_VDV_Air";
		vehicleClass = Air;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\KA-60\Black\Data\KA60.paa"};
		
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
	
	class NLDO_KA60_Armed : O_Heli_Light_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_F";
		displayName = "KA-60 Orca (Armed)";
		side = 0;
		crew = "NLDO_RU_VDV_Pilot";
		faction = "NLDO_RU_VDV_Air";
		vehicleClass = Air;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\KA-60\Black\Data\KA60.paa"};
		
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
	
	class NLDO_MI48_Black : O_Heli_Attack_02_black_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Attack_02_black_F";
		displayName = "MI-48 (Black)";
		side = 0;
		crew = "NLDO_RU_VDV_Pilot";
		faction = "NLDO_RU_VDV_Air";
		vehicleClass = Air;
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\MI-48\Black\Data\MI48body.paa", "\NLDO_RU_VDV\Vehicles\Air\MI-48\Black\Data\MI48body1.paa"};
		
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
	
	class NLDO_YAK131 : O_Plane_CAS_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Plane_CAS_02_F";
		displayName = "YAK-131";
		side = 0;
		crew = "NLDO_RU_VDV_Pilot";
		faction = "NLDO_RU_VDV_Air";
		vehicleClass = Air;
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Vehicles\Air\Yak-131\Data\yakbody.paa","\NLDO_RU_VDV\Vehicles\Air\Yak-131\Data\yakbody1.paa"};
		
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
};
