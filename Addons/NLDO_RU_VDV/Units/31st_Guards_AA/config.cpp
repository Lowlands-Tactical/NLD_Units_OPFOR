class CfgPatches {
	class NLDO_RU_VDV_Main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgFactionClasses
{

	class NLDO_RU_VDV_31
	{
		displayName="31st Guards AA";
		icon="\NLDO_RU_VDV\Icon\Icon-russia.jpg";
		priority=1;
		side=1;
	};
};

class CfgVehicleClasses
{
	class NLDO_RU_VDV_31_Infantry
	{
		displayName="Men";
	};
};
	
class CfgVehicles 
{
	class I_Soldier_base_F;
	class I_G_Soldier_base_F;
	class B_FieldPack_blk;
	
	class NLDO_RU_VDV_31_rifleman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Rifleman";
		faction = "NLDO_RU_VDV_31";
		vehicleClass = "NLDO_RU_VDV_31_Infantry";
		backpack = "NLDO_RU_VDV_31_Fieldpack";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Uniform.paa", ""};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"V_TacVest_oli", "NLDO_RU_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "NLDO_RU_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_ACO_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class NLDO_RU_VDV_31_riflemanlight: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Rifleman (Light)";
		faction = "NLDO_RU_VDV_31";
		vehicleClass = "NLDO_RU_VDV_31_Infantry";
		backpack = "NLDO_RU_VDV_31_Fieldpack";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_31_Camo2";
		hiddenSelections[] = {"Camo1", "Camo2", "insignia"};
		hiddenSelectionsTextures[] = { "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\t-shirt.paa", "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Uniform.paa", ""};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"V_TacVest_oli", "NLDO_RU_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "NLDO_RU_RU_VDV_31_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_ACO_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};

	class NLDO_RU_VDV_31_Fieldpack : B_FieldPack_blk {
		displayName = "[NLD OPFOR] Russian Fieldpack Flora";
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Backpack.paa"};
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
	
	class NLDO_RU_VDV_31_Camo : Uniform_Base {
		scope = 2;
		displayName = "[NLD OPFOR] Russian Camo Flora";
		picture = "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_31_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};
	class NLDO_RU_VDV_31_Camo2 : Uniform_Base {
		scope = 2;
		displayName = "[NLD OPFOR] Russian Camo2 Flora";
		picture = "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\uim\Uniform.paa";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_31_riflemanlight";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};

        class NLDO_RU_RU_VDV_31_Helmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian Helmet Flora";
		picture = "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\uim\Helmet.paa";
		model = "\SP_Pack\Models\SSh68CoverHelmet1";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Helmet.paa"};         

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Helmet.paa"};
		};
	};

        class NLDO_RU_RU_VDV_31_Helmet2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian Helmet2 Flora";
		picture = "\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\uim\Helmet2.paa";
		model = "\SP_Pack\Models\SSh68CoverHelmet2";
        hiddenSelections[] = {"Camo","Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
                
   		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\31st_Guards_AA\Flora\Data\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
		};
	};
};
