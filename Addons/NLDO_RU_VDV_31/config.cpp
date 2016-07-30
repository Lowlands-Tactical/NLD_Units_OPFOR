class CfgPatches {
	class NLDO_RU_VDV_31 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_BaseData","CUP_BaseConfigs","NLDO_Units_Common"};
	};
};

// The faction class
class CfgFactionClasses
{
	class NLDO_RU_VDV_31
	{
		displayName="[NLDO] 31st Guards AA";
		icon="NLDO_Common\Icon\russian_flag.jpg";
		priority=1;
		side=0;
	};
};

class CfgVehicleClasses
{
	class nldo_ru_vdv_31_Infantry
	{
		displayName="Men";
	};
	class nldo_ru_vdv_31_Mechanized
	{
		displayName="Mechanized Infantry";
	};
	class nldo_ru_vdv_31_Motorized
	{
		displayName="Motorized Infantry";
	};
	class nldo_ru_vdv_31_Armor
	{
		displayName="Armor";
	};
	class nldo_ru_vdv_31_Air
	{
		displayName="Air";
	};
};

// The units insignia
class CfgUnitInsignia
{
    class NLDO_31AMB_Russia
    {
        displayName = "[NLDO] 31AMB (Russia)";
        author = "Lowlands Tactical";
        texture = "\NLDO_RU_VDV_31\Badges\31th_Rondel.paa";
        textureVehicle = "\NLDO_RU_VDV_31\Badges\31th_Rondel.paa";
    };
};


// CfgVehicles
class CfgVehicles
{

// Inheritence classes
	class I_Soldier_base_F;
	class B_FieldPack_blk;
	class B_UAV_01_backpack_F;
	class O_ghillie_sard_F;

// Start Backpacks
	class NLDO_FieldPack_Flora_Empty : B_FieldPack_blk {
		displayName = "[NLDO] Flora FieldPack";
		picture = "\NLDO_RU_VDV_31\Gear\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV_31\Gear\Backpack.paa"};
		maximumLoad = 360;
	};

	class NLDO_FieldPack_Flora_B : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};


	class NLDO_FieldPack_Flora_GL : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack GL";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_1Rnd_HE_GP25_M
			{
				magazine="CUP_1Rnd_HE_GP25_M";
				count=15;
			};
			class _xx_CUP_1Rnd_SMOKE_GP25_M
			{
				magazine="CUP_1Rnd_SMOKE_GP25_M";
				count=2;
			};
			class _xx_CUP_1Rnd_SmokeRed_GP25_M
			{
				magazine="CUP_1Rnd_SmokeRed_GP25_M";
				count=2;
			};
			class _xx_CUP_1Rnd_SmokeGreen_GP25_M
			{
				magazine="CUP_1Rnd_SmokeGreen_GP25_M";
				count=2;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
	};

	class NLDO_FieldPack_Flora_TL : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack TL";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=2;
			};
			class _xx_CUP_1Rnd_SMOKE_GP25_M
			{
				magazine="CUP_1Rnd_SMOKE_GP25_M";
				count=4;
			};
			class _xx_CUP_1Rnd_SmokeRed_GP25_M
			{
				magazine="CUP_1Rnd_SmokeRed_GP25_M";
				count=4;
			};
			class _xx_CUP_1Rnd_HE_GP25_M
			{
				magazine="CUP_1Rnd_HE_GP25_M";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
		};
	};



	class NLDO_FieldPack_Flora_Medic : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack Medic";
        scope = 1;

		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};


	class NLDO_FieldPack_Flora_AT : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack AT";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_RPG18_M
			{
				magazine="CUP_RPG18_M";
				count=3;
			};

			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
	};


	class NLDO_FieldPack_Flora_AR : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack AR";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count=6;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
	};


	class NLDO_FieldPack_Flora_Eng : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack Eng";
        scope = 1;

		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
	};


	class NLDO_FieldPack_Flora_Ammo : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack Ammo";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=8;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
	};


	class NLDO_FieldPack_Flora_Expl : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack Expl";
        scope = 1;

		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=3;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
	};


	class NLDO_FieldPack_Flora_JTAC : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack JTAC";
        scope = 1;

		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
	};


	class NLDO_FieldPack_Flora_AAR : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack AAR";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count=8;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
	};


	class NLDO_FieldPack_Flora_MMG : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack MMG";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=4;
			};

		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
	};


	class NLDO_FieldPack_Flora_MAT : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack MAT";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_AT13_M
			{
				magazine="CUP_AT13_M";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
	};


	class NLDO_FieldPack_Flora_AA : NLDO_FieldPack_Flora_Empty {
		displayName = "[NLDO] Flora FieldPack AA";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_Igla_M
			{
				magazine="CUP_Igla_M";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
	};
// End Backpacks

// Start of Men
	class NLDO_RU_VDV_31_marksman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2;
		displayName = "Marksman";
		faction = "NLDO_RU_VDV_31";
		genericNames = "NLDO_RU";
		backpack = "NLDO_FieldPack_Flora_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Gear\Uniform.paa", "NLDO_RU_VDV_31\Badges\31th_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"NLDO_SVD","hgun_Rook40_F","put","throw", "Rangefinder"};
    respawnweapons[] = {"NLDO_SVD","hgun_Rook40_F","put","throw","Rangefinder"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};
		
	class NLDO_RU_VDV_31_sniper: O_ghillie_sard_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2;
		displayName = "Sniper";
		faction = "NLDO_RU_VDV_31";
		genericNames = "NLDO_RU";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "U_O_FullGhillie_sard";
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"V_Chestrig_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_OPFOR"};
    weapons[] = {"NLDO_SV98","hgun_Rook40_F","put","throw", "Rangefinder"};
    respawnweapons[] = {"NLDO_SV98","hgun_Rook40_F","put","throw","Rangefinder"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};
		
	class NLDO_RU_VDV_31_spotter: O_ghillie_sard_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2;
		displayName = "Spotter";
		faction = "NLDO_RU_VDV_31";
		genericNames = "NLDO_RU";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "U_O_FullGhillie_sard";
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"V_Chestrig_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_OPFOR"};
    weapons[] = {"CUP_srifle_VSSVintorez_pso","hgun_Rook40_F","put","throw", "Rangefinder"};
    respawnweapons[] = {"CUP_srifle_VSSVintorez_pso","hgun_Rook40_F","put","throw","Rangefinder"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_rifleman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2;
		displayName = "Rifleman";
		faction = "NLDO_RU_VDV_31";
		genericNames = "NLDO_RU";
		backpack = "NLDO_FieldPack_Flora_B";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_Camo2";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = { "NLDO_RU_VDV_31\Gear\t-shirt.paa", "NLDO_RU_VDV_31\Gear\Uniform.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_aar: NLDO_RU_VDV_31_marksman
	{
		displayName = "Assistent Automatic Rifleman";
		backpack = "NLDO_FieldPack_Flora_AAR";
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};
	
	class NLDO_RU_VDV_31_eng: NLDO_RU_VDV_31_marksman
	{
		displayName = "Engineer";
		backpack = "NLDO_FieldPack_Flora_eng";
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};
		
	class NLDO_RU_VDV_31_expl: NLDO_RU_VDV_31_marksman
	{
		displayName = "Explosive Specialist";
		backpack = "NLDO_FieldPack_Flora_expl";
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_ammg: NLDO_RU_VDV_31_marksman
	{
		displayName = "Assistent Medium Machinegunner";
		backpack = "NLDO_FieldPack_Flora_MMG";
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_mmg: NLDO_RU_VDV_31_marksman
	{
		displayName = "Medium machinegunner";
		icon = "iconManMG";
		backpack = "NLDO_FieldPack_Flora_MMG";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"CUP_lmg_Pecheneg","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"CUP_lmg_Pecheneg","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_tl: NLDO_RU_VDV_31_marksman
	{
		displayName = "Team Leader";
		icon = "iconManLeader";
		backpack = "NLDO_FieldPack_Flora_TL";
    weapons[] = {"NLDO_AK74M_GL","hgun_Rook40_F","put","throw","Binocular"};
    respawnweapons[] = {"NLDO_AK74M_GL","hgun_Rook40_F","put","throw","Binocular"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_ar: NLDO_RU_VDV_31_marksman
	{
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		backpack = "NLDO_FieldPack_Flora_AR";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"NLDO_RPK74M","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_RPK74M","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_ammo: NLDO_RU_VDV_31_rifleman
	{
		displayName = "Ammo Bearer";
		backpack = "NLDO_FieldPack_Flora_Ammo";
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};
		
	class NLDO_RU_VDV_31_aa: NLDO_RU_VDV_31_rifleman
	{
		displayName = "Missile Specialist AA";
		backpack = "NLDO_FieldPack_Flora_AA";
        weapons[] = {"NLDO_AK74M","CUP_launch_Igla","hgun_Rook40_F","put","throw"};
		respawnweapons[] = {"NLDO_AK74M","CUP_launch_Igla","hgun_Rook40_F","put","throw"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};

	class NLDO_RU_VDV_31_officer: NLDO_RU_VDV_31_marksman
	{
		displayName = "Officer";
		icon = "iconManOfficer";
		backpack = "NLDO_FieldPack_Flora_TL";
    weapons[] = {"NLDO_AK74M_GL","hgun_Rook40_F","put","throw","Binocular"};
    respawnweapons[] = {"NLDO_AK74M_GL","hgun_Rook40_F","put","throw","Binocular"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_amat: NLDO_RU_VDV_31_marksman
	{
		displayName = "Assistent Medium Anti-Tank";
		backpack = "NLDO_FieldPack_Flora_MAT";
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_cls: NLDO_RU_VDV_31_marksman
	{
		displayName = "Combat Life Saver";
		icon = "iconManMedic";
		backpack = "NLDO_FieldPack_Flora_Medic";
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_mat: NLDO_RU_VDV_31_marksman
	{
		displayName = "Medium Anti-Tank";
		icon = "iconManAT";
		backpack = "NLDO_FieldPack_Flora_MAT";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","CUP_launch_Metis","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","CUP_launch_Metis","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_at: NLDO_RU_VDV_31_rifleman
	{
		displayName = "Anti-Tank";
		icon = "iconManAT";
		backpack = "NLDO_FieldPack_Flora_AT";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"NLDO_AK74M","hgun_Rook40_F","CUP_launch_RPG18","put","throw"};
    respawnweapons[] = {"NLDO_AK74M","hgun_Rook40_F","CUP_launch_RPG18","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_gl: NLDO_RU_VDV_31_rifleman
	{
		displayName = "Grenadier";
		backpack = "NLDO_FieldPack_Flora_GL";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"NLDO_AK74M_GL","hgun_Rook40_F","put","throw"};
    respawnweapons[] = {"NLDO_AK74M_GL","hgun_Rook40_F","put","throw"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		};

	class NLDO_RU_VDV_31_sl: NLDO_RU_VDV_31_marksman
	{
		displayName = "Squad Leader";
		icon = "iconManLeader";
		backpack = "NLDO_FieldPack_Flora_TL";
    weapons[] = {"NLDO_AK74M_GL","hgun_Rook40_F","put","throw","Binocular"};
    respawnweapons[] = {"NLDO_AK74M_GL","hgun_Rook40_F","put","throw","Binocular"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
// The End of Men

// Start of support cast
	class NLDO_RU_VDV_31_HeliPilot: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2;
		displayName = "Heli Pilot";
		faction = "NLDO_RU_VDV_31";
		backpack = "";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_HeliPilot_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"NLDO_Common\Gear\PilotCoverall.paa", "NLDO_Common\Badges\Heli_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_RU_VDV_HeliHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_RU_VDV_HeliHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		weapons[] = {"hgun_Rook40_F","put","throw"};
		respawnweapons[] = {"hgun_Rook40_F","put","throw"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed"};
		respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed"};
	};


	class NLDO_RU_VDV_31_HeliCrew: NLDO_RU_VDV_31_HeliPilot
	{
		displayName = "HeliCrew";
		faction = "NLDO_RU_VDV_31";
		linkedItems[] = {"NLDO_RU_RU_VDV_HeliCrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_RU_VDV_HeliCrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
	};
	class NLDO_RU_VDV_31_Pilot: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2;
		displayName = "Pilot";
		faction = "NLDO_RU_VDV_31";
		backpack = "";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_Pilot_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"NLDO_Common\Gear\PilotCoverall.paa", "NLDO_Common\Badges\YAK_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_RU_VDV_PilotHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_RU_VDV_PilotHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		weapons[] = {"hgun_Rook40_F","put","throw"};
		respawnweapons[] = {"hgun_Rook40_F","put","throw"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed"};
		respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed"};
	};


	class NLDO_RU_VDV_31_Crew: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2;
		displayName = "Crew";
		faction = "NLDO_RU_VDV_31";
		genericNames = "NLDO_RU";
		backpack = "";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Gear\Uniform.paa", "\NLDO_RU_VDV_31\Badges\31th_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_CrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_CrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
        weapons[] = {"CUP_arifle_AKS74U","hgun_Rook40_F","put","throw"};
        respawnweapons[] = {"CUP_arifle_AKS74U","hgun_Rook40_F","put","throw"};
        magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed"};
        respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed"};
	};
// End of support cast

// Start wheelie vehicles
	class O_MRAP_02_hmg_F;
	class O_MRAP_02_gmg_F;
	class O_MRAP_02_F;
	class O_APC_Wheeled_02_rcws_F;
	class O_Truck_02_transport_F;
	class O_Truck_02_covered_F;
	class O_Truck_02_medical_F;
	class O_Truck_02_Ammo_F;
	class O_Truck_02_fuel_F;
	class O_Truck_02_box_F;
	class O_Truck_03_transport_F;
	class O_Truck_03_ammo_F;

	class NLDO_Punisher_31 : O_MRAP_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Punisher (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Body_co.paa", "NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Wheels_co.paa", "NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Comgun_co.paa"};

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


	class NLDO_Punisher_31_HMG : O_MRAP_02_hmg_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Punisher HMG (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Body_co.paa", "NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Wheels_co.paa", "NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Comgun_co.paa"};

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
	
	class NLDO_Punisher_31_GMG : O_MRAP_02_gmg_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Punisher GMG (31st)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Body_co.paa", "NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Wheels_co.paa", "NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Comgun_co.paa"};

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


	class NLDO_Otokar_31 : O_APC_Wheeled_02_rcws_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Otokar (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_Crew";
		typicalCargo[] = {"NLDO_RU_VDV_31_Crew"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\OtokarArma\Body_co.paa", "NLDO_RU_VDV_31\Wheeled\OtokarArma\Wheels_co.paa", "NLDO_RU_VDV_31\Wheeled\PunisherMRAP\Comgun_co.paa"};

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


	class NLDO_kamaz_Transport_31 : O_Truck_02_transport_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Kamaz Transport (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_front_co.paa", "NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_covered_co.paa"};

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

	class NLDO_kamaz_Covered_31 : O_Truck_02_covered_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Kamaz Covered (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_front_co.paa", "NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_covered_co.paa"};

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


	class NLDO_kamaz_Medical_31 : O_Truck_02_medical_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Kamaz Medical (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_front_co.paa", "NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_covered_co.paa"};

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


	class NLDO_kamaz_Fuel_31 : O_Truck_02_fuel_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Kamaz Fuel (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_front_co.paa", "NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_fuel_co.paa"};

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


	class NLDO_kamaz_Repair_31 : O_Truck_02_box_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Kamaz Repair (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_front_co.paa", "NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_repair_co.paa"};

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


	class NLDO_kamaz_Ammo_31 : O_Truck_02_Ammo_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Kamaz Ammo (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_front_co.paa", "NLDO_RU_VDV_31\Wheeled\KamazTrucks\Kamaz_repair_co.paa"};

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
	
	class NLDO_typhoon_Ammo_31 : O_Truck_03_ammo_F	
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Kamaz Typhoon Ammo (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\TyphoonTrucks\Typhoon_front.paa", "NLDO_RU_VDV_31\Wheeled\TyphoonTrucks\Typhoon_chassis.paa", "NLDO_RU_VDV_31\Wheeled\TyphoonTrucks\Typhoon_ammo.paa"};

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
	
	class NLDO_typhoon_transport_31 : O_Truck_03_transport_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] Kamaz Typhoon Transport (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_rifleman";
		typicalCargo[] = {"NLDO_RU_VDV_31_rifleman"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Wheeled\TyphoonTrucks\Typhoon_front.paa", "NLDO_RU_VDV_31\Wheeled\TyphoonTrucks\Typhoon_chassis.paa","NLDO_RU_VDV_31\Wheeled\TyphoonTrucks\Typhoon_cargo.paa"};

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
	
// End wheelie vehicles

// Start Armored Vehicles
	class O_MBT_02_cannon_F;
	class O_APC_Tracked_02_cannon_F;
	class O_MBT_02_arty_F;
	class O_APC_Tracked_02_AA_F;

	class NLDO_T95_31 : O_MBT_02_cannon_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] T95 (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_Crew";
		typicalCargo[] = {"NLDO_RU_VDV_31_Crew"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Armored\T-95BlackEagle\Body_co.paa", "NLDO_RU_VDV_31\Armored\T-95BlackEagle\Turret_co.paa", "NLDO_RU_VDV_31\Armored\T-95BlackEagle\Turret_extra_co.paa"};

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


	class NLDO_BMP_T_31 : O_APC_Tracked_02_cannon_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] BMP-T (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_Crew";
		typicalCargo[] = {"NLDO_RU_VDV_31_Crew"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Armored\BMP-T\Body_up_co.paa", "NLDO_RU_VDV_31\Armored\BMP-T\Body_down_co.paa", "NLDO_RU_VDV_31\Armored\BMP-T\Turret_co.paa"};

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
	
	class NLDO_TUNGUSKA_31 : O_APC_Tracked_02_AA_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] 2K22 Tunguska (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_Crew";
		typicalCargo[] = {"NLDO_RU_VDV_31_Crew"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Armored\2K22Tunguska\Body_up_co.paa", "NLDO_RU_VDV_31\Armored\2K22Tunguska\Body_down_co.paa", "NLDO_RU_VDV_31\Armored\2K22Tunguska\Turret_co.paa"};

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
		};
		class TransportWeapons {};
	};


	class NLDO_2S19MSTA_31 : O_MBT_02_arty_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		side = 0;
		displayName = "[NLDO] 2S19 MSTA (31th)";
		faction = "NLDO_RU_VDV_31";
		crew = "NLDO_RU_VDV_31_Crew";
		typicalCargo[] = {"NLDO_RU_VDV_31_Crew"};
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Armored\2S19MSTA\Body_co.paa", "NLDO_RU_VDV_31\Armored\2S19MSTA\Turret_co.paa","NLDO_RU_VDV_31\Armored\2S19MSTA\Turret_extra_co.paa", "NLDO_RU_VDV_31\Armored\2S19MSTA\Comgun_co.paa"};

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
// End Armored Vehicles

// Start Air stuff
	class O_Heli_Light_02_F;
	class O_Heli_Light_02_unarmed_F;
	class O_Heli_Attack_02_black_F;
	class O_Plane_CAS_02_F;

	class NLDO_KA60_31 : O_Heli_Light_02_unarmed_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_unarmed_F";
		displayName = "[NLDO] KA-60 (31th)";
		side = 0;
		crew = "NLDO_RU_VDV_31_HeliPilot";
		typicalCargo[] = {"NLDO_RU_VDV_31_HeliCrew","NLDO_RU_VDV_31_HeliPilot"};
		faction = "NLDO_RU_VDV_31";
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Air\KA-60\Body_co.paa"};

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


	class NLDO_KA60_Armed_31 : O_Heli_Light_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_F";
		displayName = "[NLDO] KA-60 armed (31th)";
		side = 0;
		crew = "NLDO_RU_VDV_31_HeliPilot";
		typicalCargo[] = {"NLDO_RU_VDV_31_HeliCrew","NLDO_RU_VDV_31_HeliPilot"};
		faction = "NLDO_RU_VDV_31";
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Air\KA-60\Body_co.paa"};

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


	class NLDO_MI48_31 : O_Heli_Attack_02_black_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Attack_02_black_F";
		displayName = "[NLDO] MI-48 (31th)";
		side = 0;
		crew = "NLDO_RU_VDV_31_HeliPilot";
		typicalCargo[] = {"NLDO_RU_VDV_31_HeliCrew","NLDO_RU_VDV_31_HeliPilot"};
		faction = "NLDO_RU_VDV_31";
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Air\MI-48\Body_co.paa", "NLDO_RU_VDV_31\Air\MI-48\Rotor_co.paa"};

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


	class NLDO_YAK131_31 : O_Plane_CAS_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Plane_CAS_02_F";
		displayName = "[NLDO] YAK-131 (31st)";
		side = 0;
		crew = "NLDO_RU_VDV_31_Pilot";
		faction = "NLDO_RU_VDV_31";
		textureList[] = {"",1};
		hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Air\Yak-131\Body_up_co.paa","NLDO_RU_VDV_31\Air\Yak-131\Body_down_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

		class TransportMagazines
		{
			
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportWeapons {};
	};

// End Air stuff

};


// Weapons -- kit
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemCore;
	class HeadgearItem;
	class V_PlateCarrier1_rgr;
	class VestItem;

    class NLDO_RU_VDV_31_Camo : Uniform_Base
    {
        scope = 2;
        displayName = "[NLDO] Russian Flora Camo";
        picture = "\NLDO_RU_VDV_31\Gear\uim\Uniform.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "NLDO_RU_VDV_31_marksman";
            containerClass = "Supply60";
            mass = 1;
        };

    };

    class NLDO_RU_VDV_31_Camo2 : Uniform_Base
    {
        scope = 2;
        displayName = "[NLDO] Russian Flora Camo2";
        picture = "\NLDO_RU_VDV_31\Gear\uim\T-shirt.paa";
        model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";

        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "NLDO_RU_VDV_31_rifleman";
            containerClass = "Supply60";
            mass = 1;
        };
    };

    class NLDO_RU_VDV_31_Pilot_Camo : Uniform_Base
    {
        scope = 2;
        displayName = "[NLDO] Russian 31st pilot Camo";
        picture = "\NLDO_Common\Gear\uim\Uniform.paa";
        model = "\A3\characters_F\Common\pilot_f.p3d";

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "NLDO_RU_VDV_31_Pilot";
            containerClass = "Supply60";
            mass = 1;
        };
    };

    class NLDO_RU_VDV_31_HeliPilot_Camo : Uniform_Base
    {
        scope = 1;
        displayName = "[NLDO] Russian Helipilot Camo";
        picture = "\NLDO_Common\Gear\uim\Uniform.paa";
        model = "\A3\characters_F\Common\pilot_f.p3d";

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "NLDO_RU_VDV_31_HeliPilot";
            containerClass = "Supply60";
            mass = 1;
        };
    };

    class NLDO_RU_VDV_31_Helmet: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[NLDO] Russian Flora Helmet";
        picture = "\NLDO_RU_VDV_31\Gear\uim\Helmet.paa";
        model = "\SP_Pack\Models\SSh68Helmet1";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Gear\Helmet.paa"};

        class ItemInfo: HeadgearItem
        {
            mass = 1;
            uniformmodel = "\SP_Pack\Models\SSh68Helmet1";
            modelSides[] = {3,1};
            armor = 6;
            passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Gear\Helmet.paa"};
			class HitpointsProtectionInfo
 			{
 				class Head
 				{
 					hitpointName="HitHead";
 					armor=6;
 					passThrough=0.5;
 				};
 			};
        };
    };

    class NLDO_RU_VDV_31_Helmet2: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[NLDO] Russian Flora Helmet2";
        picture = "\NLDO_RU_VDV_31\Gear\uim\Helmet2.paa";
        model = "\SP_Pack\Models\SSh68Helmet2";
        hiddenSelections[] = {"Camo","Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Gear\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};

        class ItemInfo: HeadgearItem
        {
            mass = 1;
            uniformmodel = "\SP_Pack\Models\SSh68Helmet2";
            modelSides[] = {3,1};
            armor = 6;
            passThrough = 0.5;
            hiddenSelections[] = {"Camo","Camo1","Camo2"};
            hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Gear\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
			class HitpointsProtectionInfo
 			{
 				class Head
 				{
 					hitpointName="HitHead";
 					armor=6;
 					passThrough=0.5;
 				};
 			};
        };
    };

    class NLDO_RU_VDV_31_Vest: V_PlateCarrier1_rgr
    {
        scope = 2;
        displayName = "[NLDO] Russian Flora Vest";
        picture = "\NLDO_RU_VDV_31\Gear\uim\Vest.paa";
        model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"NLDO_RU_VDV_31\Gear\Vest.paa"};



        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
            containerClass = "Supply120";
            hiddenSelections[] = {"camo"};
            mass = 50;
            armor = 60;
            passThrough = 0.30;
			class HitpointsProtectionInfo
 			{
 				class Chest
 				{
 					hitpointName="HitChest";
 					armor=16;
 					passThrough=0.30000001;
 				};
 				class Diaphragm
 				{
 					hitpointName="HitDiaphragm";
 					armor=16;
 					passThrough=0.30000001;
 				};
 				class Abdomen
 				{
 					hitpointName="HitAbdomen";
 					armor=16;
 					passThrough=0.30000001;
 				};
 				class Pelvis
 				{
 					hitpointName="HitPelvis";
 					armor=16;
 					passThrough=0.30000001;
 				};
 				class Body
 				{
 					hitpointName="HitBody";
 					passThrough=0.30000001;
 				};
 			};
        };
    };
	
	class CUP_arifle_AK74M ;
	class CUP_srifle_CZ750_SOS_bipod;
	class CUP_arifle_AK74M_GL;
	class CUP_arifle_RPK74M;
	class CUP_srifle_SVD;

	class NLDO_AK74M: CUP_arifle_AK74M 
	{
		author="Lowlands Tactical";
		displayName="[NLDO] AK74M";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Kobra";
			};
		};
	};
	
	class NLDO_AK74M_GL: CUP_arifle_AK74M_GL
	{
		author="Lowlands Tactical";
		displayName="[NLDO] AK74M GP25";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Kobra";
			};
		};
	};
	
	class NLDO_RPK74M: CUP_arifle_RPK74M 
	{
		author="Lowlands Tactical";
		displayName="[NLDO] RPK74M";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Kobra";
			};
		};
	};
	
	class NLDO_SVD: CUP_srifle_SVD
	{
		author="Lowlands Tactical";
		displayName="[NLDO] SVD Dragunov";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_PSO_3";
			};
		};
	};
	
	class NLDO_SV98: CUP_srifle_CZ750_SOS_bipod 
	{
		author="Lowlands Tactical";
		displayName="[NLDO] SV-98";
	};
};
// End of weapons

// Start of Groups
class CfgGroups
{
	class EAST
	{
		class NLDO_RU_VDV_31
		{
			name = "[NLDO] 31st Guards AA Troops";
			class Infantry
			{
				name = "Infantry";
				class NLDO_RU_VDV_31_Cmdr
				{
					name = "HQ group";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_sl";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_cls";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class NLDO_RU_VDV_31_LMGteam
				{
					name = "LMG team";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_ar";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_ar";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_aar";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_31_MMGteam
				{
					name = "MMG team";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mmg";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mmg";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_ammg";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_31_eodteam
				{
					name = "EOD team";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_expl";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_expl";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mmg";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_31_engineerteam
				{
					name = "Engineer team";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_eng";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_eng";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mmg";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_31_ATteam
				{
					name = "AT team";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mat";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mat";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_amat";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_31_AAteam
				{
					name = "AA team";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_aa";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_aa";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mmg";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_31_Sentry
				{
					name = "Sentry";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_gl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_marksman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class NLDO_RU_VDV_31_Team
				{
					name = "Team";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_marksman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mmg";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_at";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				
				class NLDO_RU_VDV_31_Sniper
				{
					name = "Sniper Team";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_spotter";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_sniper";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};

				class nldo_ru_vdv_31_grp_atteam
				{
					name = "Anti-Tank team";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_at";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_at";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_gl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ru_vdv_31_grp_squad
				{
					name = "Rifle Squad";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_sl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_tl";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_cls";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mmg";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_rifleman";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_gl";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_at";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_ammo";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

				};

				class nldo_ru_vdv_31_grp_weaponsquad
				{
					name = "Weapons Squad";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_sl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_tl";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_cls";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mmg";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mat";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_marksman";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_gl";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_ammo";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

				};
			};
			
			class Motorized
			{
				name = "Motorized";


				class nldo_ru_vdv_31_grp_motor_hmg
				{
					name = "Motorized HMG Team";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mmg";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_Punisher_31_HMG";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mmg";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

				};
				
				class nldo_ru_vdv_31_heavy_grp_motor_rifle
				{
					name = "Motorized Heavy Rifle Squad";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_sl";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_Otokar_31";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_tl";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_cls";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mmg";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_gl";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_at";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_marksman";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_ammo";
						rank = "PRIVATE";
						position[] = { 20,-20,0 };
					};

				};

				class nldo_ru_vdv_31_grp_motor_team
				{
					name = "Motorized Team";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_sl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_Punisher_31_HMG";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "NLDO_Punisher_31_HMG";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_cls";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mmg";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_at";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

				};

				class nldo_ru_vdv_31_grp_motor_aa
				{
					name = "Motorized Air-defence Team";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_aa";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_Punisher_31";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_aa";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

				};

				class nldo_ru_vdv_31_grp_motor_hq
				{
					name = "Motorized HQ Team";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_officer";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_Punisher_31";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_cls";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

				};

				class nldo_ru_vdv_31_grp_motor_recon
				{
					name = "Motorized Recon Team";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_Punisher_31";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

				};

				class nldo_ru_vdv_31_grp_motor_at
				{
					name = "Motorized Anti-Tank Team";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_amat";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_Punisher_31";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mat";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

				};

			};
			
			class Mechanized
			{
				name = "Mechanized";


				class nldo_ru_vdv_31_grp_mech_support
				{
					name = "Mechanized Support Squad";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_sl";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_BMP_T_31";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mmg";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mmg";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mat";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mat";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_marksman";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_marksman";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

				};

				class nldo_ru_vdv_31_grp_mech_rifle
				{
					name = "Mechanized Rifle Squad";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_sl";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_BMP_T_31";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_tl";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_cls";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mmg";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_gl";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_at";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_marksman";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_ammo";
						rank = "PRIVATE";
						position[] = { 20,-20,0 };
					};

				};

				class nldo_ru_vdv_31_grp_mech_aa
				{
					name = "Mechanized Air-defence Squad";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_sl";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_BMP_T_31";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_aa";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_aa";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_rifleman";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

				};

				class nldo_ru_vdv_31_grp_mech_at
				{
					name = "Mechanized Anti-armor Squad";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_sl";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_BMP_T_31";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mat";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_mat";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 0;
						vehicle = "nldo_ru_vdv_31_amat";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

				};

			};
			class Armor
			{
				name = "Armor";


				class nldo_ru_vdv_31_grp_art_platoon
				{
					name = "Artillery Platoon (2S19 MSTA)";
					side = "0";
					faction = "NLDO_RU_VDV_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_2S19MSTA_31";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_2S19MSTA_31";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "NLDO_2S19MSTA_31";
						rank = "SERGEANT";
						position[] = { 15,-15,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "NLDO_2S19MSTA_31";
						rank = "CORPORAL";
						position[] = { -30,-30,0 };
					};

				};

				class nldo_ru_vdv_31_grp_tank_platoon
				{
					name = "Tank Platoon (T-95)";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "SERGEANT";
						position[] = { 15,-15,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "CORPORAL";
						position[] = { -30,-30,0 };
					};

				};

				class nldo_ru_vdv_31_grp_tank_section
				{
					name = "Tank Section (T-95)";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

				};

				class nldo_ru_vdv_31_grp_art_section
				{
					name = "Artillery Section (2S19 MSTA)";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_2S19MSTA_31";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_2S19MSTA_31";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

				};
				
				class nldo_ru_vdv_31_grp_combined_platoon
				{
					name = "Combined Armor Platoon";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "NLDO_TUNGUSKA_31";
						rank = "SERGEANT";
						position[] = { 15,-15,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "NLDO_TUNGUSKA_31";
						rank = "CORPORAL";
						position[] = { -30,-30,0 };
					};

				};
				
				class nldo_ru_vdv_31_grp_combined_weapons_platoon
				{
					name = "Combined Weapons Platoon";
					side = "0";
					faction = "NLDO_RU_VDV_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

					class Unit2
					{
						side = 0;
						vehicle = "NLDO_T95_31";
						rank = "SERGEANT";
						position[] = { 15,-15,0 };
					};

					class Unit3
					{
						side = 0;
						vehicle = "NLDO_BMP_T_31";
						rank = "CORPORAL";
						position[] = { -30,-30,0 };
					};
					
					class Unit4
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_sl";
						rank = "CORPORAL";
						position[] = { -45,-45,0 };
					};
					
					class Unit5
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mmg";
						rank = "PRIVATE";
						position[] = { 30,-30,0 };
					};
					
					class Unit6
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_cls";
						rank = "PRIVATE";
						position[] = { -50,-50,0 };
					};
					
					class Unit7
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_mat";
						rank = "PRIVATE";
						position[] = { 35,-35,0 };
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_aa";
						rank = "PRIVATE";
						position[] = { -55,-55,0 };
					};
					
					class Unit9
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_gl";
						rank = "PRIVATE";
						position[] = { 40,-40,0 };
					};
					
					class Unit10
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_ammo";
						rank = "PRIVATE";
						position[] = { -60,-60,0 };
					};
					

				};

			};
			class Air
			{
				name = "Air";


				class nldo_ru_vdv_31_grp_Yak131_squadron
				{
					name = "YAK-131 Squadron";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_plane.paa";

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_YAK131_31";
						rank = "MAJOR";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_YAK131_31";
						rank = "CAPTAIN";
						position[] = { -50,-50,0 };
					};

				};
				
				class nldo_ru_vdv_31_grp_mi48_squadron
				{
					name = "MI-48 Hunting Pack";
					side = "0";
					faction = "nldo_ru_vdv_31";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\o_plane.paa";

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_MI48_31";
						rank = "MAJOR";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 0;
						vehicle = "NLDO_MI48_31";
						rank = "CAPTAIN";
						position[] = { -50,-50,0 };
					};

				};

			};
		};
	};
};

// End of Groups
