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
	class nldo_ua_uaf_bg_Car
	{
		displayName="Car";
	};
	class nldo_ua_uaf_bg_Support
	{
		displayName="Support";
	};
	class nldo_ua_uaf_bg_Motorized
	{
		displayName="Motorized Infantry";
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
		genericNames = "NLDO_UA";
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
		weapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShellGreen","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShell","SmokeShellGreen","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_ammo: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Ammo Bearer";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
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
		weapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_rifleman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Rifleman";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_rifleman";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_dm: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Designated Marksman";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_dm";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort222_DM","CUP_hgun_Makarov","put","throw","Rangefinder"};
		respawnweapons[] = { "NLDO_Fort222_DM","CUP_hgun_Makarov","put","throw","Rangefinder"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_tl: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Team leader";
		icon = "iconManLeader";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_cc";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_Fort222_GL","CUP_hgun_Makarov","put","throw","Binocular"};
		respawnweapons[] = { "NLDO_Fort222_GL","CUP_hgun_Makarov" ,"put","throw","Binocular"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_mmg: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Medium machinegunner";
		icon = "iconManMG";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
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
		weapons[] = { "NLDO_Fort401","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort401","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_gl: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Grenadier";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
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
		weapons[] = { "NLDO_Fort222_GL","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort222_GL","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_officer: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_cc";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS"  };
		weapons[] = { "NLDO_Fort222_GL","CUP_hgun_Makarov","put","throw","Binocular"};
		respawnweapons[] = { "NLDO_Fort222_GL","CUP_hgun_Makarov" ,"put","throw","Binocular"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_sl: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Squad leader";
		icon = "iconManLeader";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_bg_Infantry";
		backpack = "nldo_ua_uaf_bg_bp_cc";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_bg_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"nldo_ua_uaf_bg\Gear\Uniform.paa", "nldo_ua_uaf_bg\Badge\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS" };
		respawnLinkedItems[] = { "nldo_ua_uaf_bg_vest","nldo_ua_uaf_bg_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS"  };
		weapons[] = { "NLDO_Fort222_GL","CUP_hgun_Makarov","put","throw","Binocular"};
		respawnweapons[] = { "NLDO_Fort222_GL","CUP_hgun_Makarov" ,"put","throw","Binocular"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_at: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Rifleman (AT)";
		icon = "iconManAT";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
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
		weapons[] = { "NLDO_Fort221","CUP_launch_RPG7V","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort221","CUP_launch_RPG7V","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_amat: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Assistent Medium Anti-Tank";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
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
		weapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_mat: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Medium Anti-tank";
		icon = "iconManAT";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
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
		weapons[] = { "NLDO_Fort221","CUP_launch_Metis","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort221","CUP_launch_Metis","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_bg_ammg: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Assistent Medium Machinegunner";
		faction = "nldo_ua_uaf_bg";
		genericNames = "NLDO_UA";
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
		weapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_Fort221","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Green","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5" };
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

		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
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

	class nldo_ua_uaf_bg_bp_rifleman : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (rifleman)";
		scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
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

	class nldo_ua_uaf_bg_bp_dm : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (dm)";
		scope = 1;

		class TransportMagazines
		{
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
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

	class nldo_ua_uaf_bg_bp_at : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (at)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_PG7VR_M
			{
				magazine="CUP_PG7VR_M";
				count=2;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
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
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
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

	class nldo_ua_uaf_bg_bp_ammo : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (ammo)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
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

			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
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

	class nldo_ua_uaf_bg_bp_mat : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (mat)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_AT13_M
			{
				magazine="CUP_AT13_M";
				count=1;
			};

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
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
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

	class nldo_ua_uaf_bg_bp_mmg : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (mmg)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=2;
			};
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
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
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

	class nldo_ua_uaf_bg_bp_gl : nldo_ua_uaf_bg_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack BG (gl)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=15;
			};

			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=6;
			};

			class _xx_CUP_HandGrenade_RGD5
			{
				magazine="CUP_HandGrenade_RGD5";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
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

	// Give dem weels
  class B_MRAP_01_F;

  class nldo_ua_uaf_BG_kraz: B_MRAP_01_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kraz Cougar (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
    vehicleClass = "nldo_ua_uaf_bg_Car";
    crew = "nldo_ua_uaf_bg_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_bg_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Kraz Spartan\krazbody.paa", "\NLDO_UA_UAF_BG\Wheeled\Kraz Spartan\krazbody1.paa"};

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
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


  class C_Quadbike_01_F;

  class nldo_ua_uaf_bg_quad: C_Quadbike_01_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Bombardier Outlander (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
    vehicleClass = "nldo_ua_uaf_bg_Car";
    crew = "nldo_ua_uaf_bg_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_bg_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Bombardier Outlander\Body_co.paa", "\NLDO_UA_UAF_BG\Wheeled\Bombardier Outlander\Wheels_co.paa"};
	class EventHandlers { init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];"; };

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
      class _xx_SmokeShell
      {
        magazine="SmokeShell";
        count=5;
      };
      class _xx_SmokeShellGreen
      {
        magazine="SmokeShellGreen";
        count=5;
      };
    };
    class TransportWeapons {};
  };

  class B_MRAP_01_hmg_F;

  class nldo_ua_uaf_bg_kraz_hmg: B_MRAP_01_hmg_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kraz Cougar HMG (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
    vehicleClass = "nldo_ua_uaf_bg_Car";
    crew = "nldo_ua_uaf_bg_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_bg_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Kraz Spartan\krazbody.paa", "\NLDO_UA_UAF_BG\Wheeled\Kraz Spartan\krazbody1.paa","\NLDO_UA_UAF_BG\Wheeled\Kraz Spartan\rcwsuk.paa"};

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
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


  class B_MRAP_01_gmg_F;

  class nldo_ua_uaf_bg_kraz_gmg: B_MRAP_01_gmg_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kraz Cougar GMG (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
    vehicleClass = "nldo_ua_uaf_bg_Car";
    crew = "nldo_ua_uaf_bg_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_bg_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Kraz Spartan\krazbody.paa", "\NLDO_UA_UAF_BG\Wheeled\Kraz Spartan\krazbody1.paa","\NLDO_UA_UAF_BG\Wheeled\Kraz Spartan\rcwsuk.paa"};

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
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

  class O_Truck_02_transport_F;

  class nldo_ua_uaf_bg_kamaz_transport: O_Truck_02_transport_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Transport (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
    vehicleClass = "nldo_ua_uaf_bg_Car";
    crew = "nldo_ua_uaf_bg_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_bg_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\kamaz_covereduk.paa"};

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
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


  class O_Truck_02_covered_F;

  class nldo_ua_uaf_bg_kamaz_covered: O_Truck_02_covered_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Covered (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
    vehicleClass = "nldo_ua_uaf_bg_Car";
    crew = "nldo_ua_uaf_bg_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_bg_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\kamaz_covereduk.paa"};

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
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

    class O_Truck_02_medical_F;

  class nldo_ua_uaf_bg_kamaz_medical: O_Truck_02_medical_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Medical (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
	vehicleClass = "nldo_ua_uaf_bg_Support";
    crew = "nldo_ua_uaf_bg_cls";
    typicalCargo[] = {"nldo_ua_uaf_bg_cls"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\kamaz_covereduk.paa"};

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
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


  class O_Truck_02_fuel_F;

  class nldo_ua_uaf_bg_kamaz_fuel: O_Truck_02_fuel_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Fuel (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
	vehicleClass = "nldo_ua_uaf_bg_Support";
    crew = "nldo_ua_uaf_bg_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_bg_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\kamaz_fueluk.paa"};

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
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


  class O_Truck_02_box_F;

  class nldo_ua_uaf_bg_kamaz_repair: O_Truck_02_box_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Repair (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
	vehicleClass = "nldo_ua_uaf_bg_Support";
    crew = "nldo_ua_uaf_bg_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_bg_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\kamaz_repairuk.paa"};

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
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

  class O_Truck_02_ammo_F;

  class nldo_ua_uaf_bg_kamaz_ammo: O_Truck_02_ammo_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Ammo (Ukraine Border Guards)";
    faction = "nldo_ua_uaf_bg";
	vehicleClass = "nldo_ua_uaf_bg_Support";
    crew = "nldo_ua_uaf_bg_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_bg_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_BG\Wheeled\Kamaz trucks\kamaz_repairuk.paa"};

    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name = "FirstAidKit";
        count = 10;
      };
    };

    class TransportMagazines
    {
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

};

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
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";

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

	class NLDO_Fort221: arifle_TRG20_F
	{
		author="Lowlands Tactical";
		displayName="[NLDO] Fort 221";
		picture = "\nldo_ua_uaf_bg\Weapons\Fort221\uim\Fort221.paa";
		hiddenselections[]= {"camo"};
		hiddenselectionstextures[]={"\nldo_ua_uaf_bg\Weapons\Fort221\Fort221.paa"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};


	class NLDO_Fort222: arifle_TRG21_F
	{
		author="Lowlands Tactical";
		displayName="[NLDO] Fort-222";
		picture = "\nldo_ua_uaf_bg\Weapons\Fort222\uim\Fort222.paa";
		hiddenselections[]={"camo"};
		hiddenselectionstextures[]={"\nldo_ua_uaf_bg\Weapons\Fort222\Fort221.paa"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};


	class NLDO_Fort222_GL: arifle_TRG21_GL_F
	{
		author="Lowlands Tactical";
		displayName="[NLDO] Fort-222 EGLM";
		picture = "\nldo_ua_uaf_bg\Weapons\Fort222\uim\Fort222EGLM.paa";
		hiddenselections[]={"camo1"};
		hiddenselectionstextures[]={"\nldo_ua_uaf_bg\Weapons\Fort222\Fort221.paa"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};


	class NLDO_Fort222_DM: NLDO_Fort222
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};


	class NLDO_Fort401: LMG_Zafir_F
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

					class Unit8
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_dm";
						rank = "PRIVATE";
						position[] = { 20,-20,0 };
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
			class Motorized
			{
				name = "Motorized";


				class nldo_ua_uaf_bg_grp_motor_hmg
				{
					name = "Motorized HMG patrol";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_gl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_kraz_hmg";
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

				};

				class nldo_ua_uaf_bg_grp_motor_team_hmg
				{
					name = "Motorized Team HMG";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

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
						vehicle = "nldo_ua_uaf_bg_kraz_hmg";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_kraz_hmg";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_tl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_cls";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_mmg";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_gl";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

					class Unit7
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_at";
						rank = "PRIVATE";
						position[] = { 20,-20,0 };
					};

				};

				class nldo_ua_uaf_bg_grp_motor_gmg
				{
					name = "Motorized GMG patrol";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_gl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_kraz_gmg";
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

				};

				class nldo_ua_uaf_bg_grp_motor_team_gmg
				{
					name = "Motorized Team GMG";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

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
						vehicle = "nldo_ua_uaf_bg_kraz_gmg";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_kraz_gmg";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_tl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_cls";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_mmg";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_gl";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

					class Unit7
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_at";
						rank = "PRIVATE";
						position[] = { 20,-20,0 };
					};

				};

				class nldo_ua_uaf_bg_grp_motor
				{
					name = "Motorized patrol";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_gl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_kraz";
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

				};

				class nldo_ua_uaf_bg_grp_motor_team
				{
					name = "Motorized Team";
					side = "2";
					faction = "nldo_ua_uaf_bg";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

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
						vehicle = "nldo_ua_uaf_bg_kraz";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_kraz";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_tl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_cls";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_mmg";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_gl";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

					class Unit7
					{
						side = 2;
						vehicle = "nldo_ua_uaf_bg_at";
						rank = "PRIVATE";
						position[] = { 20,-20,0 };
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
        displayName = "[NLDO] Border Guards (Ukraine)";
        author = "Lowlands Tactical";
        texture = "nldo_ua_uaf_bg\Badge\Badge.paa";
        textureVehicle = "nldo_ua_uaf_bg\Badge\Badge.paa";
    };

};
