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

	class NLDO_RU_VDV_76
	{
		displayName="76th Guards AA";
		icon="\NLDO_RU_VDV\Icon\Icon-russia.jpg";
		priority=1;
		side=1;
	};
};

class CfgVehicleClasses
{
	class NLDO_RU_VDV_76_Infantry
	{
		displayName="Men";
	};
};
	
class CfgVehicles 
{
	class I_Soldier_base_F;
	class I_G_Soldier_base_F;
	class B_FieldPack_blk;
	
	class NLDO_RU_VDV_76_rifleman: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Rifleman";
		faction = "NLDO_RU_VDV_76";
		vehicleClass = "NLDO_RU_VDV_76_Infantry";
		backpack = "NLDO_RU_VDV_76_Fieldpack";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_76_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Uniform.paa", "\NLDO_RU_VDV\Badges\76th_Airborne_Division_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_RU_VDV_76_Helmet2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell"};
        };
		
	class NLDO_RU_VDV_76_riflemanlight: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Rifleman (Light)";
		faction = "NLDO_RU_VDV_76";
		vehicleClass = "NLDO_RU_VDV_76_Infantry";
		backpack = "NLDO_RU_VDV_76_Fieldpack";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_76_Camo2";
		hiddenSelections[] = {"Camo1", "Camo2", "insignia"};
		hiddenSelectionsTextures[] = { "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\t-shirt.paa", "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Uniform.paa", "\NLDO_RU_VDV\Badges\76th_Airborne_Division_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_RU_VDV_76_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLDO_RU_VDV_76_Vest", "NLDO_RU_RU_VDV_76_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"CUP_arifle_AK107","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"CUP_arifle_AK107","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","SmokeShell","SmokeShell"};
        };

	class NLDO_RU_VDV_76_Fieldpack : B_FieldPack_blk {
		displayName = "[NLD OPFOR] Russian Fieldpack EMP";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Backpack.paa"};
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
	
	class NLDO_RU_VDV_76_Camo : Uniform_Base {
		scope = 2;
		displayName = "[NLD OPFOR] Russian Camo EMP";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_76_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};
	class NLDO_RU_VDV_76_Camo2 : Uniform_Base {
		scope = 2;
		displayName = "[NLD OPFOR] Russian Camo EMP 2";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\T-shirt.paa";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_76_riflemanlight";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};

        class NLDO_RU_RU_VDV_76_Helmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian Helmet EMP";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\Helmet.paa";
		model = "\SP_Pack\Models\SSh68CoverHelmet1";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Helmet.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Helmet.paa"};
		};
	};

        class NLDO_RU_RU_VDV_76_Helmet2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD OPFOR] Russian Helmet EMP 2";
		picture = "\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\uim\Helmet2.paa";
		model = "\SP_Pack\Models\SSh68CoverHelmet2";
        hiddenSelections[] = {"Camo","Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\76th_Guards_AA\EMP\Data\Helmet.paa","\SP_Pack\Hats\SSh68CoverHelmet\Black.paa","\SP_Pack\Hats\PASGTHelmet\Black.paa"};
                
   		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\SP_Pack\Models\SSh68CoverHelmet2";
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
		displayName = "[NLD OPFOR] Russian Vest EMP";
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
};
