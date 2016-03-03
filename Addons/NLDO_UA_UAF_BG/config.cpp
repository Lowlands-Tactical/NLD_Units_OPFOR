class CfgPatches {
	class nldo_ua_uaf_bg_main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class CfgFactionClasses
{
	class nldo_ua_uaf_bg
	{
		displayName="[NLDO] Ukrainian Border Guards";
		icon="\nldo_ua_uaf_bg\Icon\Icon.jpg";
		priority=1;
		side=2;
	};
};

class CfgVehicleClasses
{
	class nldo_ua_uaf_bg_Infantry
	{
		displayName="Men";
	};
};

class cfgVehicles
{

  class I_Soldier_base_F;

	class nldo_ua_uaf_bg_cls: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_cls";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","medikit","FirstAidKit","FirstAidKit","SmokeShell","SmokeShell","SmokeShell","SmokeShell" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","medikit","FirstAidKit","FirstAidKit","SmokeShell","SmokeShell","SmokeShell","SmokeShell"  };
		weapons[] = { "NLDO_Fort221_black","put","throw"};
		respawnweapons[] = { "NLDO_Fort221_black" ,"put","throw"};
		magazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell"  };
		respawnmagazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell" };
	};

	class nldo_ua_uaf_bg_ammo: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Ammo Bearer";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_ammo";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort221_black","put","throw"};
		respawnweapons[] = { "NLDO_Fort221_black" ,"put","throw"};
		magazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell"  };
		respawnmagazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell" };
	};

	class nldo_ua_uaf_bg_rifleman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Rifleman";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort221_black","put","throw"};
		respawnweapons[] = { "NLDO_Fort221_black" ,"put","throw"};
		magazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell"  };
		respawnmagazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell" };
	};

	class nldo_ua_uaf_bg_tl: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Team leader";
		icon = "iconManLeader";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_cc";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","Binocular" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","Binocular"  };
		weapons[] = { "NLDO_Fort222_GL_Black","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort222_GL_Black","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag" };
	};

	class nldo_ua_uaf_bg_mmg: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Medium machiengunner";
		icon = "iconManMG";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_mmg";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort401_Black","put","throw"};
		respawnweapons[] = { "NLDO_Fort401_Black" ,"put","throw"};
		magazines[] = { "150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","SmokeShell","SmokeShell"  };
		respawnmagazines[] = { "150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","SmokeShell","SmokeShell" };
	};

	class nldo_ua_uaf_bg_gl: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Grenadier";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_gl";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort222_GL_Black","put","throw"};
		respawnweapons[] = { "NLDO_Fort222_GL_Black" ,"put","throw"};
		magazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow"  };
		respawnmagazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow" };
	};

	class nldo_ua_uaf_bg_officer: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_cc";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","Binocular","ItemGPS" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","Binocular","ItemGPS"  };
		weapons[] = { "NLDO_Fort222_GL_Black","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort222_GL_Black","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag" };
	};

	class nldo_ua_uaf_bg_sl: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Squad leader";
		icon = "iconManLeader";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_cc";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","Binocular","ItemGPS" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","Binocular","ItemGPS"  };
		weapons[] = { "NLDO_Fort222_GL_Black","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort222_GL_Black","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag" };
	};

	class nldo_ua_uaf_bg_at: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Rifleman (AT)";
		icon = "iconManAT";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_at";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort221_black","CUP_launch_RPG7V","put","throw"};
		respawnweapons[] = { "NLDO_Fort221_black","CUP_launch_RPG7V" ,"put","throw"};
		magazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell","CUP_PG7VR_M","CUP_PG7VR_M","CUP_OG7_M"  };
		respawnmagazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell","CUP_PG7VR_M","CUP_PG7VR_M","CUP_OG7_M" };
	};

	class nldo_ua_uaf_bg_amat: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Assistent Medium Anti-Tank";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_mat";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort221_black","put","throw"};
		respawnweapons[] = { "NLDO_Fort221_black" ,"put","throw"};
		magazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell"  };
		respawnmagazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell" };
	};

	class nldo_ua_uaf_bg_mat: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Medium Anti-tank";
		icon = "iconManAT";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_mat";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort221_black","launch_RPG32_F","put","throw"};
		respawnweapons[] = { "NLDO_Fort221_black","launch_RPG32_F" ,"put","throw"};
		magazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell"  };
		respawnmagazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell" };
	};

	class nldo_ua_uaf_bg_ammg: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Assistent Medium Machinegunner";
		faction = "nldo_ua_uaf_bg";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_mmg";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","Binocular" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","Binocular"  };
		weapons[] = { "NLDO_Fort221_black","put","throw"};
		respawnweapons[] = { "NLDO_Fort221_black" ,"put","throw"};
		magazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell"  };
		respawnmagazines[] = { "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShell" };
	};

	class B_FieldPack_blk;

	class nldo_ua_uaf_bg_bp_empty : B_FieldPack_blk {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLDO] Ukrainian Fieldpack BG (empty)";
		picture = "nldo_ua_uaf_bg\Gear\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Backpack.paa"};
		maximumLoad = 360;
	};

	class nldo_ua_uaf_bg_bp_cls : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (cls)";
		scope = 1;

		class TransportItems
		{

			class _xx_medikit {
				name = "medikit";
				count = 1;
			};

			class _xx_firstAidKit {
				name = "firstAidKit";
				count = 4;
			};

		};


	};

	class nldo_ua_uaf_bg_bp_at : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (at)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_PG7VR_M
			{
				magazine="CUP_PG7VR_M";
				count=3;
			};

		};




	};

	class nldo_ua_uaf_bg_bp_cc : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (cc)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=4;
			};

			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};

			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};

			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};

		};




	};

	class nldo_ua_uaf_bg_bp_ammo : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (ammo)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_150Rnd_762x54_Box_Tracer
			{
				magazine="150Rnd_762x54_Box_Tracer";
				count=2;
			};

			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=8;
			};

			class _xx_smokeShell
			{
				magazine="smokeShell";
				count=4;
			};

		};




	};

	class nldo_ua_uaf_bg_bp_mat : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (mat)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
			};

		};




	};

	class nldo_ua_uaf_bg_bp_mmg : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (mmg)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_150Rnd_762x54_Box_Tracer
			{
				magazine="150Rnd_762x54_Box_Tracer";
				count=4;
			};

		};




	};

	class nldo_ua_uaf_bg_bp_gl : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (gl)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};

			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};

		};




	};


	class FlagPole_F;


	class nldo_ua_uaf_bg_flag_uafbg : FlagPole_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		accuracy = 10000;
		displayName = "[NLDO] Flag (Border Guards of the Ukraine)";
		nameSound = "flag";
		class EventHandlers { init = "(_this select 0) setFlagTexture ""nldo_ua_uaf_bg\Flags\BorderGuards.paa"""; };
	};

};
//	};
//};

class cfgWeapons
{

	class Uniform_Base;
	class UniformItem;

	class nldo_ua_uaf_bg_Camo : Uniform_Base
	{
		scope = 2;
		author="Lowlands Tactical";
		displayName = "[NLDO] Pixelated Woodland";
		picture = "\nldo_ua_uaf_bg\Gear\uim\Uniform.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "nldo_ua_uaf_bg_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class ItemInfo;
	class ItemCore;
	class HeadgearItem;

	class nldo_ua_uaf_bg_Helmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLDO] Ukrainian Helmet BG";
		author="Lowlands Tactical";
		picture = "\nldo_ua_uaf_bg\Gear\uim\Helmet.paa";
		model = "\SP_Pack\Models\PASGTHelmet1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_bg\Gear\Helmet.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\nldo_ua_uaf_bg\Gear\Helmet.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};

	class InventoryItem_Base_F;
	class VestItem;
	class V_PlateCarrier3_rgr;

	class nldo_ua_uaf_bg_Vest: V_PlateCarrier3_rgr
	{
		scope = 2;
		displayName = "[NLDO] Ukrainian Vest BG";
		author="Lowlands Tactical";
		picture = "\nldo_ua_uaf_bg\Gear\uim\Vest.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_bg\Gear\Vest.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: VestItem
		{
			_generalMacro = "VestItem";
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			uniformType = "default";
			type = 701;
			containerClass = "Supply140";
			mass = 100;
			armor = 0.5;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};


	class arifle_TRG20_F;
	class arifle_TRG21_F;
	class arifle_TRG21_GL_F;
	class LMG_Zafir_F;

	class NLDO_Fort221_black: arifle_TRG20_F
	{
		author="Lowlands Tactical";
		displayName="[NLDO] Fort 221";
		picture = "\nldo_ua_uaf_bg\Weapons\Fort221\uim\Fort221.paa";
		hiddenselections[]= {"camo"};
		hiddenselectionstextures[]={"\nldo_ua_uaf_bg\Weapons\Fort221\Fort221.paa"};
	};

	class NLDO_Fort222_black: arifle_TRG21_F
	{
		author="Lowlands Tactical";
		displayName="[NLDO] Fort-222";
		picture = "\nldo_ua_uaf_bg\Weapons\Fort222\uim\Fort222.paa";
		hiddenselections[]={"camo"};
		hiddenselectionstextures[]={"\nldo_ua_uaf_bg\Weapons\Fort222\Fort221.paa"};
	};

	class NLDO_Fort222_GL_Black: arifle_TRG21_GL_F
	{
		author="Lowlands Tactical";
		displayName="[NLDO] Fort-222 EGLM";
		picture = "\nldo_ua_uaf_bg\Weapons\Fort222\uim\Fort222EGLM.paa";
		hiddenselections[]={"camo1"};
		hiddenselectionstextures[]={"\nldo_ua_uaf_bg\Weapons\Fort222\Fort221.paa"};
	};


	class NLDO_Fort401_Black: LMG_Zafir_F
	{
		author="Lowlands Tactical";
		displayName="[NLDO] Fort-401";
		picture = "\nldo_ua_uaf_bg\Weapons\Fort401\uim\Fort401.paa";
		hiddenselections[]={"camo1", "camo2"};
		hiddenselectionstextures[]={"\nldo_ua_uaf_bg\Weapons\Fort401\Fort4011.paa", "\nldo_ua_uaf_bg\Weapons\Fort401\Fort4012.paa"};
	};

};

// cfgGroups
class CfgGroups
{
	class Indep
	{
		class nldo_ua_uaf_bg
		{
			name = "[NLDO] Ukrainian Border Guards";
			class Infantry
			{
				name = "Infantry";

				class nldo_ua_uaf_bg_team
				{
					name = "Fireteam";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_rifleman";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_mmg";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_at";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_bg_squad
				{
					name = "Rifle Squad";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_sl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_tl";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_cls";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_mmg";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_rifleman";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_gl";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_at";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_ammo";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

				};

				class nldo_ua_uaf_bg_mmgteam
				{
					name = "Medium machinegun team";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_mmg";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_mmg";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_ammg";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_bg_atteam
				{
					name = "Medium Anti-Tank team";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_mat";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_mat";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_amat";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_bg_sentry
				{
					name = "Sentry";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_gl";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_rifleman";
						rank = "PRIVATE";
						position[] = { -5,-5,0 };
					};

				};

				class nldo_ua_uaf_bg_cmdr
				{
					name = "HQ team";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_officer";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_sl";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_cls";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

				};

			};
		};
	};
};

class CfgUnitInsignia
{

    class nldo_ua_uaf_bg_bg
    {
        displayName = "[NLDO] Ukraine Border Guards";
        author = "Lowlands Tactical";
        texture = "nldo_ua_uaf_bg\Badges\bg.paa";
        textureVehicle = "nldo_ua_uaf_bg\Badges\bg.paa";
    };

};
