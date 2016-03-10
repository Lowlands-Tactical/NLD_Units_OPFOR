class CfgPatches {
	class nldo_ua_uaf_95_main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class CfgFactionClasses
{
	class nldo_ua_uaf_95
	{
		displayName="[NLDO] 95th Airmobile Brigade (Ukraine)";
		icon="\nldo_ua_uaf_95\Icon\Icon.jpg";
		priority=1;
		side=2;
	};
};

class CfgVehicleClasses
{
	class nldo_ua_uaf_95_Infantry
	{
		displayName="Men";
	};
	class nldo_ua_uaf_95_Mechanized
	{
		displayName="Mechanized Infantry";
	};
	class nldo_ua_uaf_95_Motorized
	{
		displayName="Motorized Infantry";
	};
	class nldo_ua_uaf_95_Armor
	{
		displayName="Armor";
	};
	class nldo_ua_uaf_95_Air
	{
		displayName="Air";
	};
};
class cfgVehicles
{

	class I_Soldier_base_F;

	class nldo_ua_uaf_95_aar: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Assistent Automatic Rifleman";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_ar";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_95_sl: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Squad leader";
		icon = "iconManLeader";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_cc";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS"  };
		weapons[] = { "NLDO_AKS74_GL","CUP_hgun_Makarov","put","throw","Rangefinder"};
		respawnweapons[] = { "NLDO_AKS74_GL","CUP_hgun_Makarov" ,"put","throw","Rangefinder"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","Chemlight_green","Chemlight_green","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","Chemlight_green","Chemlight_green","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell" };
	};

	class nldo_ua_uaf_95_mat: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Medium Anti-tank";
		icon = "iconManAT";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_mat";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","CUP_launch_Metis","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","CUP_launch_Metis" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_95_mmg: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Medium Machinegunner";
		icon = "iconManMG";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_mmg";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "CUP_lmg_PKM","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "CUP_lmg_PKM","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_95_explosive: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Explosive Specialist";
		canDeactivateMines = true; 
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_explosive";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5" };
	};

	class nldo_ua_uaf_95_dm: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Designated Marksman";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_dm";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_SVD","CUP_hgun_Makarov","put","throw","laserdesignator" };
		respawnweapons[] = { "NLDO_SVD","CUP_hgun_Makarov" ,"put","throw","laserdesignator" };
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","Laserbatteries","Laserbatteries","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","Laserbatteries","Laserbatteries","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_aa: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Rifleman (Igla)";
		icon = "iconManAT";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_aa";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","CUP_launch_Igla","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","CUP_launch_Igla" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_ammo: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Ammo Bearer";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_ammo";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_ammg: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Assistent Medium Machinegunner";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_mmg";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_officer: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_cc";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS"  };
		weapons[] = { "NLDO_AKS74_GL","CUP_hgun_Makarov","put","throw","Rangefinder"};
		respawnweapons[] = { "NLDO_AKS74_GL","CUP_hgun_Makarov" ,"put","throw","Rangefinder"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","Chemlight_green","Chemlight_green","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell" };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","Chemlight_green","Chemlight_green","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell" };
	};

	class nldo_ua_uaf_95_rifleman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Rifleman";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_Fieldpack";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_cls: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_cls";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","FirstAidKit","FirstAidKit","SmokeShell","SmokeShell","SmokeShell","SmokeShell" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio","FirstAidKit","FirstAidKit","SmokeShell","SmokeShell","SmokeShell","SmokeShell"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_engineer: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Engineer";
		engineer = true;
		canDeactivateMines = true; 
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_engineer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_amat: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Assistent Medium Anti-Tank";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_mat";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_fac: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Forward Air Controller";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_Fieldpack";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","put","throw","laserdesignator"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov" ,"put","throw","laserdesignator"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","Laserbatteries","Laserbatteries","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","Laserbatteries","Laserbatteries","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_crew: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Crew";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_CrewHelmet","NVGoggles_OPFOR","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_CrewHelmet","NVGoggles_OPFOR","ItemCompass","ItemMap","ItemWatch","ItemRadio","ItemGPS"  };
		weapons[] = { "CUP_arifle_AKS74U","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "CUP_arifle_AKS74U","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_at: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Rifleman (AT)";
		icon = "iconManAT";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_at";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","CUP_launch_RPG18","put","throw"};
		respawnweapons[] = { "NLDO_AKS74","CUP_hgun_Makarov","CUP_launch_RPG18" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_RPG18_M","CUP_RPG18_M","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_RPG18_M","CUP_RPG18_M","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_ar: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_ar";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_RPK74","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "NLDO_RPK74","CUP_hgun_Makarov" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_gl: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Grenadier";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_gl";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "CUP_hgun_Makarov","NLDO_AKS74_GL","put","throw"};
		respawnweapons[] = { "CUP_hgun_Makarov","NLDO_AKS74_GL" ,"put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen" };
	};

	class nldo_ua_uaf_95_tl: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Team leader";
		icon = "iconManLeader";
		faction = "nldo_ua_uaf_95";
		genericNames = "NLDO_UA";
		vehicleClass = "nldo_ua_uaf_95_Infantry";
		backpack = "nldo_ua_uaf_95_bp_cc";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_95_Camo";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Uniform.paa", "\nldo_ua_uaf_95\Badges\Badge.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio" };
		respawnLinkedItems[] = { "nldo_ua_uaf_95_vest","nldo_ua_uaf_95_helmet","ItemCompass","ItemMap","ItemWatch","ItemRadio"  };
		weapons[] = { "NLDO_AKS74_GL","CUP_hgun_Makarov","put","throw","Rangefinder"};
		respawnweapons[] = { "NLDO_AKS74_GL","CUP_hgun_Makarov" ,"put","throw","Rangefinder"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","Chemlight_green","Chemlight_green","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","Chemlight_green","Chemlight_green","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen" };
	};
	
	class nldo_ua_uaf_95_pilot: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 2;
		scope = 2;
		displayName = "Pilot";
		faction = "nldo_ua_uaf_95";
		backpack = "B_Parachute";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		uniformAccessories[] = {};
		uniformClass = "nldo_ua_uaf_pilot_camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"NLDO_Common\Gear\PilotCoveralluk.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"nldo_ua_uaf_PilotHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"nldo_ua_uaf_PilotHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		weapons[] = { "CUP_arifle_AKS74U","CUP_hgun_Makarov","put","throw"};
		respawnweapons[] = { "CUP_arifle_AKS74U","CUP_hgun_Makarov","put","throw"};
		magazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen"  };
		respawnmagazines[] = { "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen" };
	};


	class B_FieldPack_blk;

	class nldo_ua_uaf_95_bp_empty : B_FieldPack_blk {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLDO] Ukrainian Fieldpack 95 (empty)";
		picture = "\nldo_ua_uaf_95\Gear\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Backpack.paa"};
		maximumLoad = 360;
	};
	class nldo_ua_uaf_95_bp_cc : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (cc)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_1Rnd_HE_GP25_M
			{
				magazine="CUP_1Rnd_HE_GP25_M";
				count=4;
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

			class _xx_CUP_1Rnd_SmokeGreen_GP25_M
			{
				magazine="CUP_1Rnd_SmokeGreen_GP25_M";
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
				count=2;
			};
		};
	};

	class nldo_ua_uaf_95_bp_dm: nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (Marksman)";
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine="CUP_10Rnd_762x54_SVD_M";
				count=10;
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

	class nldo_ua_uaf_95_bp_engineer : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (engineer)";
		scope = 1;




		class TransportMagazines
		{

			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=2;
			};

		};
		
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_ToolKit {
				name = "ToolKit";
				count = 1;
			};

			class _xx_MineDetector {
				name = "MineDetector";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
	};

	class nldo_ua_uaf_95_bp_cls : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (cls)";
		scope = 1;




		class TransportMagazines
		{

			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};

		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_medikit {
				name = "medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
		};
	};

	class nldo_ua_uaf_95_bp_mmg : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (mmg)";
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
				count=2;
			};
		};

	};

	class nldo_ua_uaf_95_bp_mat : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (mat)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_AT13_M
			{
				magazine="CUP_AT13_M";
				count=1;
			};
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
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

	class nldo_ua_uaf_95_bp_fieldpack : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (fieldpack)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
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

	class nldo_ua_uaf_95_bp_explosive : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (explosive)";
		scope = 1;

		class TransportMagazines
		{

			class _xx_SatchelCharge_Remote_Mag {
				name = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag {
				name = "DemoCharge_Remote_Mag";
				count = 4;
			};
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=2;
			};

		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_ToolKit {
				name = "ToolKit";
				count = 1;
			};

			class _xx_MineDetector {
				name = "MineDetector";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};

	};

	class nldo_ua_uaf_95_bp_ammo : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (ammo)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count=4;
			};
			
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count=2;
			};

			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine="CUP_30Rnd_545x39_AK_M";
				count=8;
			};

			class _xx_smokeShell
			{
				magazine="smokeShell";
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
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
	};

	class nldo_ua_uaf_95_bp_ar : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (ar)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine="CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count=4;
			};
			class _xx_smokeShell
			{
				magazine="smokeShell";
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

	class nldo_ua_uaf_95_bp_gl : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (gl)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_1Rnd_HE_GP25_M
			{
				magazine="CUP_1Rnd_HE_GP25_M";
				count=10;
			};

			class _xx_CUP_1Rnd_SMOKE_GP25_M
			{
				magazine="CUP_1Rnd_SMOKE_GP25_M";
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
				count=2;
			};
		};
	};

	class nldo_ua_uaf_95_bp_aa : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (aa)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_Igla_M
			{
				magazine="CUP_Igla_M";
				count=1;
			};
			class _xx_smokeShell
			{
				magazine="smokeShell";
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

	class nldo_ua_uaf_95_bp_at : nldo_ua_uaf_95_bp_empty
	{
		displayName = "[NLDO] Ukrainian Fieldpack 95 (at)";
		scope = 1;


		class TransportMagazines
		{

			class _xx_CUP_RPG18_M
			{
				magazine="CUP_RPG18_M";
				count=2;
			};
			class _xx_smokeShell
			{
				magazine="smokeShell";
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


	class nldo_ua_uaf_95_flag_uaf95 : FlagPole_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		accuracy = 10000;
		displayName = "[NLDO] Flag (95th Airmobile Brigade (Ukraine))";
		nameSound = "flag";
		class EventHandlers { init = "(_this select 0) setFlagTexture ""\nldo_ua_uaf_95\Flags\Flag.paa"""; };
	};



  // Start Armored Vehicles
  class O_MBT_02_cannon_F;
  class O_APC_Tracked_02_cannon_F;
  class O_MBT_02_arty_F;
  class O_APC_Tracked_02_AA_F;

  class nldo_ua_uaf_95_t84 : O_MBT_02_cannon_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] T-84U Oplot-M (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Armor";
    crew = "nldo_ua_uaf_95_crew";
    typicalCargo[] = {"nldo_ua_uaf_95_crew"};
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Armored\T95 Black Eagle\T95bodyukwdl.paa", "\NLDO_UA_UAF_95\Armored\T95 Black Eagle\T95turretukwdl.paa", "\NLDO_UA_UAF_95\Armored\T95 Black Eagle\T95turret1ukwdl.paa"};

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


  class nldo_ua_uaf_95_bmp1u : O_APC_Tracked_02_cannon_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] BMP-1U ShKval (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Armor";
    crew = "nldo_ua_uaf_95_crew";
    typicalCargo[] = {"nldo_ua_uaf_95_crew"};
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Armored\BMP1U Shkval\bmpbody.paa", "\NLDO_UA_UAF_95\Armored\BMP1U Shkval\bmpbody1.paa", "\NLDO_UA_UAF_95\Armored\BMP1U Shkval\rcws30_co.paa"};

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
  

  class nldo_ua_uaf_95_tunguska : O_APC_Tracked_02_AA_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] 2K22 Tunguska (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Armor";
    crew = "nldo_ua_uaf_95_crew";
    typicalCargo[] = {"nldo_ua_uaf_95_crew"};
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Armored\2K22 Tunguska\tunguskabody.paa", "\NLDO_UA_UAF_95\Armored\2K22 Tunguska\bmpbody1.paa", "\NLDO_UA_UAF_95\Armored\2K22 Tunguska\TunguskAA.paa"};

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


  class nldo_ua_uaf_95_2S19MSTA : O_MBT_02_arty_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] 2S19 MSTA (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Armor";
    crew = "nldo_ua_uaf_95_crew";
    typicalCargo[] = {"nldo_ua_uaf_95_crew"};
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Armored\2S19 MSTA\MSTAbodyuk.paa", "\NLDO_UA_UAF_95\Armored\2S19 MSTA\MSTAbodyuk1.paa", "\NLDO_UA_UAF_95\Armored\2S19 MSTA\MSTAturretuk.paa", "\NLDO_UA_UAF_95\Armored\2S19 MSTA\MSTAcomgunuk.paa"};

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
  // End Armored Vehicles


  // Start air vehicle
  class  I_Plane_Fighter_03_CAS_F;

  class nldo_ua_uaf_95_l39: I_Plane_Fighter_03_CAS_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] L-39 CAS (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Air";
    crew = "nldo_ua_uaf_95_pilot";
    typicalCargo[] = {"nldo_ua_uaf_95_pilot"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Air\L39\L39body.paa", "\NLDO_UA_UAF_95\Air\L39\L39body1.paa"};

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
  // End air vehicle

  // Start wheelies
  class B_MRAP_01_F;

  class nldo_ua_uaf_95_kraz: B_MRAP_01_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kraz Spartan (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Car";
    crew = "nldo_ua_uaf_95_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_95_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Wheeled\Kraz Spartan\krazbody.paa", "\NLDO_UA_UAF_95\Wheeled\Kraz Spartan\krazbody1.paa"};

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


  class B_MRAP_01_hmg_F;

  class nldo_ua_uaf_95_kraz_hmg: B_MRAP_01_hmg_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kraz Spartan HMG (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Car";
    crew = "nldo_ua_uaf_95_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_95_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Wheeled\Kraz Spartan\krazbody.paa", "\NLDO_UA_UAF_95\Wheeled\Kraz Spartan\krazbody1.paa","\NLDO_UA_UAF_95\Wheeled\Kraz Spartan\rcwsuk.paa"};

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

  class nldo_ua_uaf_95_kraz_gmg: B_MRAP_01_gmg_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kraz Spartan GMG (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Car";
    crew = "nldo_ua_uaf_95_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_95_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Wheeled\Kraz Spartan\krazbody.paa", "\NLDO_UA_UAF_95\Wheeled\Kraz Spartan\krazbody1.paa","\NLDO_UA_UAF_95\Wheeled\Kraz Spartan\rcwsuk.paa"};

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
  
  // End wheelies

  // Start Kamazjes
  class O_Truck_02_transport_F;

  class nldo_ua_uaf_95_kamaz_transport: O_Truck_02_transport_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Transport (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Car";
    crew = "nldo_ua_uaf_95_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_95_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\kamaz_covereduk.paa"};

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

  class nldo_ua_uaf_95_kamaz_covered: O_Truck_02_covered_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Covered (95th AMB)";
    faction = "nldo_ua_uaf_95";
    vehicleClass = "nldo_ua_uaf_95_Car";
    crew = "nldo_ua_uaf_95_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_95_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\kamaz_covereduk.paa"};

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

  class nldo_ua_uaf_95_kamaz_medical: O_Truck_02_medical_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Medical (95th AMB)";
    faction = "nldo_ua_uaf_95";
    crew = "nldo_ua_uaf_95_cls";
    typicalCargo[] = {"nldo_ua_uaf_95_cls"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\kamaz_covereduk.paa"};

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

  class nldo_ua_uaf_95_kamaz_fuel: O_Truck_02_fuel_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Fuel (95th AMB)";
    faction = "nldo_ua_uaf_95";
    crew = "nldo_ua_uaf_95_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_95_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\kamaz_fueluk.paa"};

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

  class nldo_ua_uaf_95_kamaz_repair: O_Truck_02_box_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Repair (95th AMB)";
    faction = "nldo_ua_uaf_95";
    crew = "nldo_ua_uaf_95_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_95_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\kamaz_repairuk.paa"};

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

  class nldo_ua_uaf_95_kamaz_ammo: O_Truck_02_ammo_F
  {
    author = "Lowlands Tactical";
    scope = 2;
    side = 2;
    displayName = "[NLDO] Kamaz Ammo (95th AMB)";
    faction = "nldo_ua_uaf_95";
    crew = "nldo_ua_uaf_95_rifleman";
    typicalCargo[] = {"nldo_ua_uaf_95_rifleman"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\zamak_frontuk.paa", "\NLDO_UA_UAF_95\Wheeled\Kamaz trucks\kamaz_repairuk.paa"};

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
  // End Kamaz

};

class cfgWeapons
{

	class Uniform_Base;
	class UniformItem;

	class nldo_ua_uaf_95_Camo : Uniform_Base
	{
		scope = 2;
		author="Lowlands Tactical";
		displayName = "[NLDO] Fractal Woodland";
		picture = "\nldo_ua_uaf_95\Gear\uim\Uniform.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "nldo_ua_uaf_95_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class ItemInfo;
	class ItemCore;
	class HeadgearItem;

	class nldo_ua_uaf_95_Helmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLDO] Ukrainian Helmet 95th AMB";
		author="Lowlands Tactical";
		picture = "\nldo_ua_uaf_95\Gear\uim\Helmet.paa";
		model = "\SP_Pack\Models\PASGTHelmet1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Helmet.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Helmet.paa"};
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
	class V_PlateCarrier3_rgr;
	class VestItem;

	class nldo_ua_uaf_95_Vest: V_PlateCarrier3_rgr
	{
		scope = 2;
		displayName = "[NLDO] Ukrainian Vest 95th AMB";
		author="Lowlands Tactical";
		picture = "\nldo_ua_uaf_95\Gear\uim\Vest.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelectionsTextures[] = {"\nldo_ua_uaf_95\Gear\Vest.paa"};
		hiddenSelections[] = {"Camo"};



		class ItemInfo: VestItem
		{
			_generalMacro = "VestItem";
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			uniformType = "default";
			type = 701;
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 100;
			armor = 100;
			passThrough = 0.5;
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
//				class Pelvis
// 				{
//					hitpointName="HitPelvis";
//					armor=10;
//					passThrough=0.5;
//				};
				class Body
				{
					hitpointName="HitBody";
//					armor=10;
					passThrough=0.2;
				};
			};
		};
	};
	
	class CUP_arifle_AKS74;
	class CUP_arifle_RPK74_45;
	class CUP_srifle_SVD;
	class CUP_arifle_AK74_GL;

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
	
	class NLDO_RPK74: CUP_arifle_RPK74_45
	{
		author="Lowlands Tactical";
		displayName="[NLDO] RPK74";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Kobra";
			};
		};
	};
	
	class NLDO_AKS74: CUP_arifle_AKS74
	{
		author="Lowlands Tactical";
		displayName="[NLDO] AKS74";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Kobra";
			};
		};
	};
	
	class NLDO_AKS74_GL: CUP_arifle_AK74_GL
	{
		author="Lowlands Tactical";
		displayName="[NLDO] AKS74 GP25";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Kobra";
			};
		};
	};

};

// cfgGroups
class CfgGroups
{
	class Indep
	{
		class nldo_ua_uaf_95
		{
			name = "[NLDO] 95th Airmobile Brigade (Ukraine)";
			class Infantry
			{
				name = "Infantry";


				class nldo_ua_uaf_95_grp_mmgteam
				{
					name = "Medium machinegun team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_ammg";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_95_grp_atteam
				{
					name = "Anti-Tank team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_at";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_at";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_amat";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_95_grp_engineers
				{
					name = "Enginering team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_engineer";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_engineer";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_engineer";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_95_grp_squad
				{
					name = "Rifle Squad";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_sl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_cls";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_rifleman";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_gl";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_at";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_ammo";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

				};

				class nldo_ua_uaf_95_grp_matteam
				{
					name = "Medium Anti-Tank team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mat";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mat";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_amat";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_95_grp_cmdr
				{
					name = "HQ team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_officer";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_sl";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_cls";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_fac";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_95_grp_aateam
				{
					name = "Anti-Air team (Igla)";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_aa_igla";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_aa_igla";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_rifleman";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_95_grp_weaponsquad
				{
					name = "Weapons Squad";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_sl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_cls";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_at";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_dm";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_gl";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_ammg";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

				};

				class nldo_ua_uaf_95_grp_team
				{
					name = "Fireteam";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_rifleman";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_at";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_95_grp_explosive
				{
					name = "Explosives team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_explosive";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_explosive";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_explosive";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

				};

				class nldo_ua_uaf_95_grp_sentry
				{
					name = "Sentry";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_gl";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_rifleman";
						rank = "PRIVATE";
						position[] = { -5,-5,0 };
					};

				};

			};
			class Motorized
			{
				name = "Motorized";


				class nldo_ua_uaf_95_grp_motor_hmg
				{
					name = "Motorized HMG Team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_kraz_hmg";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

				};

				class nldo_ua_uaf_95_grp_motor_team
				{
					name = "Motorized Team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_sl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_kraz_hmg";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_kraz_hmg";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_cls";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_gl";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

					class Unit7
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_at";
						rank = "PRIVATE";
						position[] = { 20,-20,0 };
					};

				};

				class nldo_ua_uaf_95_grp_motor_aa
				{
					name = "Motorized Air-defence Team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_aa";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_kraz";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_aa";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

				};

				class nldo_ua_uaf_95_grp_motor_hq
				{
					name = "Motorized HQ Team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_officer";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_kraz";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_cls";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

				};

				class nldo_ua_uaf_95_grp_motor_recon
				{
					name = "Motorized Recon Team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_kraz";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

				};

				class nldo_ua_uaf_95_grp_motor_at
				{
					name = "Motorized Anti-Tank Team";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_amat";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_kraz";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mat";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

				};

			};
			
			class Mechanized
			{
				name = "Mechanized";


				class nldo_ua_uaf_95_grp_mech_support
				{
					name = "Mechanized Support Squad";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_sl";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_bmp1u";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mat";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mat";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_dm";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_dm";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

				};

				class nldo_ua_uaf_95_grp_mech_rifle
				{
					name = "Mechanized Rifle Squad";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_sl";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_bmp1u";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_bmp1u";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_cls";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mmg";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_gl";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_at";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

				};

				class nldo_ua_uaf_95_grp_mech_aa
				{
					name = "Mechanized Air-defence Squad";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_sl";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_bmp1u";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_aa";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_aa";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_rifleman";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

				};

				class nldo_ua_uaf_95_grp_mech_at
				{
					name = "Mechanized Anti-armor Squad";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_sl";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_bmp1u";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mat";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_mat";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_amat";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

				};

			};
			class Armor
			{
				name = "Armor";


				class nldo_ua_uaf_95_grp_art_platoon
				{
					name = "Artillery Platoon (2S19 MSTA)";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_2s19MSTA";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_2s19MSTA";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_2s19MSTA";
						rank = "SERGEANT";
						position[] = { 15,-15,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_2s19MSTA";
						rank = "CORPORAL";
						position[] = { -30,-30,0 };
					};

				};

				class nldo_ua_uaf_95_grp_tank_platoon
				{
					name = "Tank Platoon (T-84U)";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_t84";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_t84";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_t84";
						rank = "SERGEANT";
						position[] = { 15,-15,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_t84";
						rank = "CORPORAL";
						position[] = { -30,-30,0 };
					};

				};

				class nldo_ua_uaf_95_grp_tank_section
				{
					name = "Tank Section (T-84U)";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_t84";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_t84";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

				};

				class nldo_ua_uaf_95_grp_art_section
				{
					name = "Artillery Section (2S19 MSTA)";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_2s19MSTA";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_2s19MSTA";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

				};
				
				class nldo_ua_uaf_95_grp_combined_platoon
				{
					name = "Combined Armor Platoon";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_t84";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_t84";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

					class Unit2
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tunguska";
						rank = "SERGEANT";
						position[] = { 15,-15,0 };
					};

					class Unit3
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_tunguska";
						rank = "CORPORAL";
						position[] = { -30,-30,0 };
					};

				};

			};
			class Air
			{
				name = "Air";


				class nldo_ua_uaf_95_grp_L39_squadron
				{
					name = "L-39 Squadron";
					side = "2";
					faction = "nldo_ua_uaf_95";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_plane.paa";

					class Unit0
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_l39";
						rank = "MAJOR";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 2;
						vehicle = "nldo_ua_uaf_95_l39";
						rank = "CAPTAIN";
						position[] = { -50,-50,0 };
					};

				};

			};
		};
	};
};

class CfgUnitInsignia
{

    class nldo_ua_uaf_95_bg
    {
        displayName = "[NLDO] 95th Airmobile Brigade (Ukraine)";
        author = "Lowlands Tactical";
        texture = "\nldo_ua_uaf_95\Badges\Badge.paa";
        textureVehicle = "\nldo_ua_uaf_95\Badges\Badge.paa";
    };

};
