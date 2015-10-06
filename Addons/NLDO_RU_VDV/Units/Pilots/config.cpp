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

	class NLDO_RU_VDV_Air
	{
		displayName="VDV Pilots";
		icon="\NLDO_RU_VDV\Icon\Icon-russia.jpg";
		priority=1;
		side=1;
	};
};

class CfgVehicleClasses
{
	class NLDO_RU_VDV_Pilot
	{
		displayName="Men";
	};
};
	
class CfgVehicles 
{
	class I_Soldier_base_F;
	
	class NLDO_RU_VDV_Pilot: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Fighter Pilot";
		faction = "NLDO_RU_VDV_Air";
		vehicleClass = "NLDO_RU_VDV_Pilot";
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
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        };
		
	class NLDO_RU_VDV_HeliPilot: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Heli Pilot";
		faction = "NLDO_RU_VDV_Air";
		vehicleClass = "NLDO_RU_VDV_Pilot";
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
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        };
		
	class NLDO_RU_VDV_HeliCrew: I_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 0;
		scope = 2; 
		displayName = "Heli Crew";
		faction = "NLDO_RU_VDV_Air";
		vehicleClass = "NLDO_RU_VDV_Pilot";
		backpack = "";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLDO_RU_VDV_HeliPilot_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLDO_RU_VDV\Units\Pilots\Data\PilotCoverall.paa", "\NLDO_RU_VDV\Badges\Heli_Rondel.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLDO_RU_RU_VDV_HeliCrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLDO_RU_RU_VDV_HeliCrewHelmet","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS"};
        weapons[] = {"hgun_PDW2000_F","CUP_hgun_Makarov","put","throw"};
        respawnweapons[] = {"hgun_PDW2000_F","CUP_hgun_Makarov","put","throw"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
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
	
	class NLDO_RU_VDV_Pilot_Camo : Uniform_Base {
		scope = 2;
		displayName = "[NLD OPFOR] Russian pilot Camo";
		picture = "\NLDO_RU_VDV\Units\Pilots\Data\uim\Uniform.paa";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_Pilot";
			containerClass = "Supply60";
			mass = 1;
		};
	
	};
	
	class NLDO_RU_VDV_HeliPilot_Camo : Uniform_Base {
		scope = 1;
		displayName = "[NLD OPFOR] Russian Helipilot Camo";
		picture = "\NLDO_RU_VDV\Units\Pilots\Data\uim\Uniform.paa";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLDO_RU_VDV_HeliPilot";
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
};
