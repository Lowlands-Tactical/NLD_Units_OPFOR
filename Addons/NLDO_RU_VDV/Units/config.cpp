class CfgPatches {
	class NLDO_RU_VDV_Units {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Modules_F_Curator"};
	};
};
	
class CfgVehicles 
{
	class I_Soldier_base_F;
	class I_G_Soldier_base_F;
	class B_FieldPack_blk;
	
	class NLDO_RU_VDV_76_marksman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Marksman";
		faction = "NLDO_RU_VDV_76";
		backpack = "NLDO_FieldPack_EMP_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_76_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Uniform.paa", "\NLDO_RU_VDV\Badges\76th_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_rifleman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Rifleman";
		faction = "NLDO_RU_VDV_76";
		backpack = "NLDO_FieldPack_EMP_B";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_76_Camo2";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = { "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\t-shirt.paa", "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Uniform.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_aar: NLDO_RU_VDV_76_marksman
	{
		displayName = "Assistent Automatic Rifleman";
		backpack = "NLDO_FieldPack_EMP_AAR";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_ammg: NLDO_RU_VDV_76_marksman
	{
		displayName = "Assistent Medium Machinegunner";
		backpack = "NLDO_FieldPack_EMP_MMG";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_mmg: NLDO_RU_VDV_76_marksman
	{
		displayName = "Medium machiengunner";
		icon = "iconManMG";
		backpack = "NLDO_FieldPack_EMP_MMG";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_lmg_Pecheneg","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_lmg_Pecheneg","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_tl: NLDO_RU_VDV_76_marksman
	{
		displayName = "Team Leader";
		icon = "iconManLeader";
		backpack = "NLDO_FieldPack_EMP_TL";
        weapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_ar: NLDO_RU_VDV_76_marksman
	{
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		backpack = "NLDO_FieldPack_EMP_AR";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_RPK74M","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_RPK74M","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_ammo: NLDO_RU_VDV_76_rifleman
	{
		displayName = "Ammo Bearer";
		backpack = "NLDO_FieldPack_EMP_Ammo";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_officer: NLDO_RU_VDV_76_marksman
	{
		displayName = "Officer";
		icon = "iconManOfficer";
		backpack = "NLDO_FieldPack_EMP_TL";
        weapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_amat: NLDO_RU_VDV_76_marksman
	{
		displayName = "Assistent Medium Anti-Tank";
		backpack = "NLDO_FieldPack_EMP_MAT";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_cls: NLDO_RU_VDV_76_marksman
	{
		displayName = "Combat Life Saver";
		icon = "iconManMedic";
		backpack = "NLDO_FieldPack_EMP_Medic";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_mat: NLDO_RU_VDV_76_marksman
	{
		displayName = "Medium Anti-Tank";
		icon = "iconManAT";
		backpack = "NLDO_FieldPack_EMP_MAT";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","CUP_launch_Metis","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","CUP_launch_Metis","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_at: NLDO_RU_VDV_76_rifleman
	{
		displayName = "Anti-Tank";
		icon = "iconManAT";
		backpack = "NLDO_FieldPack_EMP_AT";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","CUP_launch_RPG18","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","CUP_launch_RPG18","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_gl: NLDO_RU_VDV_76_rifleman
	{
		displayName = "Grenadier";
		backpack = "NLDO_FieldPack_EMP_GL";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_76_sl: NLDO_RU_VDV_76_marksman
	{
		displayName = "Squad Leader";
		icon = "iconManLeader";
		backpack = "NLDO_FieldPack_EMP_TL";
        weapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};

/////////////// 31 //////////////////
	
	class NLDO_RU_VDV_31_marksman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "marksman";
		faction = "NLDO_RU_VDV_31";
		backpack = "NLDO_FieldPack_Flora_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Uniform.paa", "\NLDO_RU_VDV\Badges\31th_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_rifleman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Rifleman";
		faction = "NLDO_RU_VDV_31";
		backpack = "NLDO_FieldPack_Flora_B";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_Camo2";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = { "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\t-shirt.paa", "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Uniform.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_aar: NLDO_RU_VDV_31_marksman
	{
		displayName = "Assistent Automatic Rifleman";
		backpack = "NLDO_FieldPack_Flora_AAR";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_ammg: NLDO_RU_VDV_31_marksman
	{
		displayName = "Assistent Medium Machinegunner";
		backpack = "NLDO_FieldPack_Flora_MMG";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_mmg: NLDO_RU_VDV_31_marksman
	{
		displayName = "Medium machiengunner";
		icon = "iconManMG";
		backpack = "NLDO_FieldPack_Flora_MMG";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_lmg_Pecheneg","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_lmg_Pecheneg","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_tl: NLDO_RU_VDV_31_marksman
	{
		displayName = "Team Leader";
		icon = "iconManLeader";
		backpack = "NLDO_FieldPack_Flora_TL";
        weapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_ar: NLDO_RU_VDV_31_marksman
	{
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		backpack = "NLDO_FieldPack_Flora_AR";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_RPK74M","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_RPK74M","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_ammo: NLDO_RU_VDV_31_rifleman
	{
		displayName = "Ammo Bearer";
		backpack = "NLDO_FieldPack_Flora_Ammo";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_officer: NLDO_RU_VDV_31_marksman
	{
		displayName = "Officer";
		icon = "iconManOfficer";
		backpack = "NLDO_FieldPack_Flora_TL";
        weapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_amat: NLDO_RU_VDV_31_marksman
	{
		displayName = "Assistent Medium Anti-Tank";
		backpack = "NLDO_FieldPack_Flora_MAT";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_cls: NLDO_RU_VDV_31_marksman
	{
		displayName = "Combat Life Saver";
		icon = "iconManMedic";
		backpack = "NLDO_FieldPack_Flora_Medic";
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_mat: NLDO_RU_VDV_31_marksman
	{
		displayName = "Medium Anti-Tank";
		icon = "iconManAT";
		backpack = "NLDO_FieldPack_Flora_MAT";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","CUP_launch_Metis","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","CUP_launch_Metis","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_at: NLDO_RU_VDV_31_rifleman
	{
		displayName = "Anti-Tank";
		icon = "iconManAT";
		backpack = "NLDO_FieldPack_Flora_AT";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","CUP_launch_RPG18","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_kobra","CUP_hgun_Makarov","CUP_launch_RPG18","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_gl: NLDO_RU_VDV_31_rifleman
	{
		displayName = "Grenadier";
		backpack = "NLDO_FieldPack_Flora_GL";
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
		
	class NLDO_RU_VDV_31_sl: NLDO_RU_VDV_31_marksman
	{
		displayName = "Squad Leader";
		icon = "iconManLeader";
		backpack = "NLDO_FieldPack_Flora_TL";
        weapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107_GL_kobra","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
		};
	
	class NLDO_RU_VDV_Pilot_76: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Fighter Pilot";
		faction = "NLDO_RU_VDV_76";
		backpack = "B_Parachute";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_Pilot_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\Pilots\Data\PilotCoverall.paa", "\NLDO_RU_VDV\Badges\YAK_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_RU_VDV_PilotHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_RU_VDV_PilotHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
        weapons[] = {"hgun_PDW2000_F","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"hgun_PDW2000_F","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        };
		
	class NLDO_RU_VDV_HeliPilot_76: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Heli Pilot";
		faction = "NLDO_RU_VDV_76";
		backpack = "";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_HeliPilot_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\Pilots\Data\PilotCoverall.paa", "\NLDO_RU_VDV\Badges\Heli_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_RU_VDV_HeliHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_RU_VDV_HeliHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
        weapons[] = {"hgun_PDW2000_F","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"hgun_PDW2000_F","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        };
		
	class NLDO_RU_VDV_HeliCrew_76: NLDO_RU_VDV_HeliPilot_76
	{
		displayName = "Heli Crew";
		faction = "NLDO_RU_VDV_76";
		linkedItems[] = {"NLDO_RU_RU_VDV_HeliCrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_RU_VDV_HeliCrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		};
		
	class NLDO_RU_VDV_Pilot_31: NLDO_RU_VDV_Pilot_76
	{
		displayName = "Pilot";
		faction = "NLDO_RU_VDV_31";
		};
		
	class NLDO_RU_VDV_HeliPilot_31: NLDO_RU_VDV_HeliPilot_76
	{
		displayName = "Helipilot";
		faction = "NLDO_RU_VDV_31";
		};
		
	class NLDO_RU_VDV_HeliCrew_31: NLDO_RU_VDV_HeliCrew_76
	{
		displayName = "HeliCrew";
		faction = "NLDO_RU_VDV_31";
		};
		
	class NLDO_RU_VDV_Crew_76: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Crew";
		faction = "NLDO_RU_VDV_76";
		backpack = "";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_76_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Uniform.paa", "\NLDO_RU_VDV\Badges\76th_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_CrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_VDV_CrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
        weapons[] = {"hgun_PDW2000_F","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"hgun_PDW2000_F","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        };
		
	class NLDO_RU_VDV_Crew_31: NLDO_RU_VDV_Crew_76
	{
		faction = "NLDO_RU_VDV_31";
		backpack = "";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Uniform.paa"};
		linkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_CrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_31_Vest", "NLDO_RU_VDV_CrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
        };
};

class CfgGroups
{
	class EAST
	{
		class NLDO_RU_VDV_76
		{
			name = "[NLDO] 76th Guards AA Troops";
			class Infantry
			{
				name = "Infantry";
				class NLDO_RU_VDV_76_Cmdr
				{
					name = "Cmdr";
					side = 0;
					faction = "NLDO_RU_VDV_76";
                    rarityGroup = 0.5;

					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_sl";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_cls";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class NLDO_RU_VDV_76_LMGteam
				{
					name = "LMGteam";
					side = 0;
					faction = "NLDO_RU_VDV_76";
                    rarityGroup = 0.5;
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_ar";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_ar";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_aar";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_76_MMGteam
				{
					name = "MMGteam";
					side = 0;
					faction = "NLDO_RU_VDV_76";
                    rarityGroup = 0.5;
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_mmg";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_mmg";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_ammg";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_76_ATteam
				{
					name = "ATteam";
					side = 0;
					faction = "NLDO_RU_VDV_76";
                    rarityGroup = 0.5;
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_mat";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_mat";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_amat";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_76_Sentry
				{
					name = "Sentry";
					side = 0;
					faction = "NLDO_RU_VDV_76";
                    rarityGroup = 0.5;
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_gl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_marksman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class NLDO_RU_VDV_76_Team
				{
					name = "Team";
					side = 0;
					faction = "NLDO_RU_VDV_76";
                    rarityGroup = 0.5;
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_tl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_marksman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_ar";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_at";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class NLDO_RU_VDV_76_Squad
				{
					name = "Squad";
					side = 0;
					faction = "NLDO_RU_VDV_76";
                    rarityGroup = 0.5;
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_sl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_tl";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_cls";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_ar";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_ar";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_gl";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_at";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_76_ammo";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};

			};
		};
		class NLDO_RU_VDV_31
		{
			name = "[NLDO] 31st Guards AA Troops";
			class Infantry
			{
				name = "Infantry";
				class NLDO_RU_VDV_31_Cmdr
				{
					name = "Cmdr";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;

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
					name = "LMGteam";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
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
					name = "MMGteam";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
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
				class NLDO_RU_VDV_31_ATteam
				{
					name = "ATteam";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
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
				class NLDO_RU_VDV_31_Sentry
				{
					name = "Sentry";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
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
						vehicle = "NLDO_RU_VDV_31_ar";
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
				class NLDO_RU_VDV_31_Squad
				{
					name = "Squad";
					side = 0;
					faction = "NLDO_RU_VDV_31";
                    rarityGroup = 0.5;
					class Unit0
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_sl";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_tl";
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
					class Unit3
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_ar";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_ar";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_gl";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_at";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "NLDO_RU_VDV_31_ammo";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};

			};
		};
	};
};

class cfgWeapons 
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class ItemCore;
	class HeadgearItem;
	class InventoryItem_Base_F;
	class V_PlateCarrier1_rgr;
    class VestItem;
	
	class NLDO_RU_VDV_76_Camo : Uniform_Base 
	{
		scope = 2;
		displayName = "[NLD OPFOR] Russian EMP Camo";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_76_marksman";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};
	class NLDO_RU_VDV_76_Camo2 : Uniform_Base
	{
		scope = 2;
		displayName = "[NLD OPFOR] Russian EMP Camo2";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\T-shirt.paa";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_76_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};

    class NLDO_RU_VDV_76_Helmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian EMP Helmet";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\Helmet.paa";
		model = "\SP_Pack\Models\SSh68Helmet1";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Helmet.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\SSh68Helmet1";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Helmet.paa"};
		};
	};

    class NLDO_RU_VDV_76_Helmet2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian EMP Helmet2";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\Helmet2.paa";
		model = "\SP_Pack\Models\SSh68Helmet2";
        hiddenSelections[] = {"Camo","Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
                
   		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\SSh68Helmet2";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
		};
	};

    class NLDO_RU_VDV_76_Vest: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "[NLD OPFOR] Russian EMP Vest";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\Vest.paa";
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
                hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Vest.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 50;
			armor = 60;
			passThrough = 0.30;
		};
	};
	
	class NLDO_RU_VDV_31_Camo : Uniform_Base 
	{
		scope = 2;
		displayName = "[NLD OPFOR] Russian Flora Camo";
		picture = "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\uim\Uniform.paa";
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
		displayName = "[NLD OPFOR] Russian Flora Camo2";
		picture = "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\uim\T-shirt.paa";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_31_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};

    class NLDO_RU_VDV_31_Helmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian Flora Helmet";
		picture = "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\uim\Helmet.paa";
		model = "\SP_Pack\Models\SSh68Helmet1";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Helmet.paa"};         
		
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\SSh68Helmet1";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Helmet.paa"};
		};
	};

    class NLDO_RU_VDV_31_Helmet2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian Flora Helmet2";
		picture = "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\uim\Helmet2.paa";
		model = "\SP_Pack\Models\SSh68Helmet2";
        hiddenSelections[] = {"Camo","Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
                
   		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\SSh68Helmet2";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
		};
	};

    class NLDO_RU_VDV_31_Vest: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "[NLD OPFOR] Russian Flora Vest";
		picture = "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\uim\Vest.paa";
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Vest.paa"};
                
                  

		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 50;
			armor = 60;
			passThrough = 0.30;
		};
	};
	
	class NLDO_RU_VDV_Pilot_Camo : Uniform_Base 
	{
		scope = 2;
		displayName = "[NLD OPFOR] Russian pilot Camo";
		picture = "\NLDO_RU_VDV\Units\Pilots\Data\uim\Uniform.paa";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		
		class ItemInfo : UniformItem 
		{
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_Pilot_76";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};
	
	class NLDO_RU_VDV_HeliPilot_Camo : Uniform_Base 
	{
		scope = 1;
		displayName = "[NLD OPFOR] Russian Helipilot Camo";
		picture = "\NLDO_RU_VDV\Units\Pilots\Data\uim\Uniform.paa";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		
		class ItemInfo : UniformItem 
		{
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_HeliPilot_76";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};

    class NLDO_RU_RU_VDV_PilotHelmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian Pilot Helmet";
		picture = "\NLDO_RU_VDV\Units\Pilots\Data\uim\Helmet.paa";
		model = "\a3\characters_f\common\headgear_helmet_pilot";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\Pilots\Data\Helmet.paa"};         

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\a3\characters_f\common\headgear_helmet_pilot";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\Pilots\Data\Helmet.paa"};
		};
	};

    class NLDO_RU_RU_VDV_HeliHelmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian HeliPilot Helmet";
		picture = "\NLDO_RU_VDV\Units\Pilots\Data\uim\HeliHelmet.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\Pilots\Data\HeliHelmet.paa"};         

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\Pilots\Data\HeliHelmet.paa"};
		};
	};

    class NLDO_RU_RU_VDV_HeliCrewHelmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian HeliCrew Helmet";
		picture = "\NLDO_RU_VDV\Units\Pilots\Data\uim\HeliHelmet.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli_shield";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\Pilots\Data\HeliHelmet.paa"};         

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\Pilots\Data\HeliHelmet.paa"};
		};
	};

    class NLDO_RU_VDV_CrewHelmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian Crew Helmet";
		picture = "\NLDO_RU_VDV\Units\Crew\Data\ui\Black.jpg";
		model = "\SP_Pack\Models\TSH04Helmet";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\SP_Pack\Hats\TSH04Helmet\Black.paa"};
                
   		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\TSH04Helmet";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
			hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\SP_Pack\Hats\TSH04Helmet\Black.paa"};
		};
	};
};
