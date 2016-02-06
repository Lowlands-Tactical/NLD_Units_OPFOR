class CfgPatches {
	class NLDO_RU_VDV_76 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_BaseData","CUP_BaseConfigs","NLDO_Units_Common"};
	};
};

// The faction class
class CfgFactionClasses
{
	class NLDO_RU_VDV_76
	{
		displayName="[NLDO] 76th Guards AA";
		icon="NLDO_Common\Icon\russian_flag.jpg";
		priority=1;
		side=0;
	};
};

// Start insignias
class CfgUnitInsignia
{
    class NLDO_76AMB_Russia
    {
        displayName = "[NLDO] 76AMB (Russia)";
        author = "Lowlands Tactical";
        texture = "NLDO_RU_VDV_76\Badges\76th_Rondel.paa";
        textureVehicle = "NLDO_RU_VDV_76\Badges\76th_Rondel.paa";
    };
};
// End insignias

// Vehicles classes
class cfgVehicles
{

	// Inheritence classes
	class B_FieldPack_blk;
	class B_UAV_01_backpack_F;

	// Start backpack
	class NLDO_FieldPack_EMP_Empty: B_FieldPack_blk {
		displayName = "[NLDO] EMP FieldPack";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Backpack.paa"};
        maximumLoad = 360;
	};

	
	class NLDO_FieldPack_EMP_B : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
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
				count=4;
			};
		};
	};


	class NLDO_FieldPack_EMP_GL : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack GL";
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


	class NLDO_FieldPack_EMP_TL : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack TL";
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


	class NLDO_FieldPack_EMP_Medic : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack Medic";
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


	class NLDO_FieldPack_EMP_AT : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack AT";
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


	class NLDO_FieldPack_EMP_AR : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack AR";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
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


	class NLDO_FieldPack_EMP_Eng : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack Eng";
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


	class NLDO_FieldPack_EMP_Ammo : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack Ammo";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_1Rnd_HE_GP25_M
			{
				magazine="CUP_1Rnd_HE_GP25_M";
				count=5;
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
				count=5;
			};
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=10;
			};
			class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
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


	class NLDO_FieldPack_EMP_Expl : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack Expl";
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


	class NLDO_FieldPack_EMP_JTAC : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack JTAC";
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


	class NLDO_FieldPack_EMP_AAR : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack AAR";
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

	class NLDO_FieldPack_EMP_MMG : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack MMG";
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


	class NLDO_FieldPack_EMP_MAT : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack MAT";
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
	

	class NLDO_FieldPack_EMP_AA : NLDO_FieldPack_EMP_Empty {
		displayName = "[NLDO] EMP FieldPack AA";
        scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_Igla_M
			{
				magazine="CUP_Igla_M";
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
	// End backpack

};