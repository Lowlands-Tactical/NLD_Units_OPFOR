class CfgPatches {
	class NLDO_UA_UAF_Main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgFactionClasses
{

	class NLDO_UA_UAF_BG
	{
		displayName="State Border Guard Service of Ukraine";
		icon="\NLDO_UA_UAF\Icon\Icon-Ukraine.jpg";
		priority=1;
		side=1;
	};
};

class CfgVehicleClasses
{
	class NLDO_UA_UAF_BG_Infantry
	{
		displayName="Men";
	};
};
	
class CfgVehicles 
{
	class I_Soldier_base_F;
	class I_G_Soldier_base_F;
	class B_FieldPack_blk;
	
	class NLDO_UA_UAF_BG_rifleman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Rifleman";
		faction = "NLDO_UA_UAF_BG";
		vehicleClass = "NLDO_UA_UAF_BG_Infantry";
		backpack = "NLDO_UA_UAF_BG_Fieldpack";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLDO_UA_UAF_BG_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\Uniform.paa", ""};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_UA_UAF_BG_Vest", "NLDO_RU_UA_UAF_BG_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_UA_UAF_BG_Vest", "NLDO_RU_UA_UAF_BG_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell"};
        };
		
	class NLDO_UA_UAF_BG_riflemanlight: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Rifleman (Light)";
		faction = "NLDO_UA_UAF_BG";
		vehicleClass = "NLDO_UA_UAF_BG_Infantry";
		backpack = "NLDO_UA_UAF_BG_Fieldpack";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_UA_UAF_BG_Camo2";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = { "\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\t-shirt.paa", "\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\Uniform.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_UA_UAF_BG_Vest", "NLDO_RU_UA_UAF_BG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_UA_UAF_BG_Vest", "NLDO_RU_UA_UAF_BG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell"};
        };

	class NLDO_UA_UAF_BG_Fieldpack : B_FieldPack_blk {
		displayName = "[NLD OPFOR] Ukrainian Fieldpack BG";
		picture = "\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\Backpack.paa"};
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
	class V_PlateCarrier3_rgr;
    class VestItem;
	
	class NLDO_UA_UAF_BG_Camo : Uniform_Base {
		scope = 2;
		displayName = "[NLD OPFOR] Ukrainian Camo BG";
		picture = "\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_UA_UAF_BG_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};
	class NLDO_UA_UAF_BG_Camo2 : Uniform_Base {
		scope = 2;
		displayName = "[NLD OPFOR] Ukrainian Camo BG 2";
		picture = "\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\uim\T-shirt.paa";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_UA_UAF_BG_riflemanlight";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};

        class NLDO_RU_UA_UAF_BG_Helmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Ukrainian Helmet BG";
		picture = "\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\uim\Helmet.paa";
		model = "\SP_Pack\Models\PASGTHelmet1";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\Helmet.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\Helmet.paa"};
		};
	};

        class NLDO_RU_UA_UAF_BG_Helmet2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Ukrainian Helmet BG 2";
		picture = "\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\uim\Helmet2.paa";
		model = "\SP_Pack\Models\PASGTHelmet2";
        hiddenSelections[] = {"Camo","Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
                
   		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\PASGTHelmet2";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
            hiddenSelectionsTextures[] = {"\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
		};
	};

        class NLDO_UA_UAF_BG_Vest: V_PlateCarrier3_rgr
	{
		scope = 2;
		displayName = "[NLD OPFOR] Ukrainian Vest BG";
		picture = "\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\uim\Vest.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
                hiddenSelectionsTextures[] = {"\NLDO_UA_UAF\Units\Border_Guard_Ukraine\Pixel-WLD\Data\Vest.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: VestItem
		{
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 50;
			armor = 60;
			passThrough = 0.30;
		};
	};
};
