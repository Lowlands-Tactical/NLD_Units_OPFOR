class CfgPatches {
	class NLDO_Units_Common {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};


// Insignias
class CfgUnitInsignia
{
    class NLDO_Heli_Russia
    {
        displayName = "[NLDO] Heli Pilot (Russia)";
        author = "Lowlands Tactical";
        texture = "\NLDO_Common\Badges\Heli_Rondel.paa";
        textureVehicle = "\NLDO_Common\Badges\Heli_Rondel.paa";
    };
    class NLDO_YAK_Russia
    {
        displayName = "[NLDO] YAK Pilot (Russia)";
        author = "Lowlands Tactical";
        texture = "\NLDO_Common\Badges\YAK_Rondel.paa";
        textureVehicle = "\NLDO_Common\Badges\YAK_Rondel.paa";
    };
};


// Weapons
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

    class NLDO_RU_RU_VDV_HeliHelmet: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[NLDO] Russian HeliPilot Helmet";
        picture = "NLDO_Common\Gear\uim\HeliHelmet.paa";
        model = "A3\Characters_F\Common\headgear_helmet_heli";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"NLDO_Common\Gear\HeliHelmet.paa"};         

        class ItemInfo: HeadgearItem
        {
            mass = 1;
            uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli";
            modelSides[] = {3,1};
            armor = 6;
            passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"NLDO_Common\Gear\HeliHelmet.paa"};
        };
    };

    class NLDO_RU_VDV_Pilot_Camo : Uniform_Base 
    {
        scope = 2;
        displayName = "[NLDO] Russian pilot Camo";
        picture = "NLDO_Common\Gear\uim\Uniform.paa";
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
        displayName = "[NLDO] Russian Helipilot Camo";
        picture = "NLDO_Common\Gear\uim\Uniform.paa";
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
        displayName = "[NLDO] Russian Pilot Helmet";
        picture = "NLDO_Common\Gear\uim\Helmet.paa";
        model = "\a3\characters_f\common\headgear_helmet_pilot";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"NLDO_Common\Gear\Helmet.paa"};         

        class ItemInfo: HeadgearItem
        {
            mass = 1;
            uniformmodel = "\a3\characters_f\common\headgear_helmet_pilot";
            modelSides[] = {3,1};
            armor = 6;
            passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"NLDO_Common\Gear\Helmet.paa"};
        };
    };

    class NLDO_RU_RU_VDV_HeliCrewHelmet: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[NLDO] Russian HeliCrew Helmet";
        picture = "NLDO_Common\Gear\uim\HeliHelmet.paa";
        model = "A3\Characters_F\Common\headgear_helmet_heli_shield";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"NLDO_Common\Gear\HeliHelmet.paa"};         

        class ItemInfo: HeadgearItem
        {
            mass = 1;
            uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
            modelSides[] = {3,1};
            armor = 6;
            passThrough = 0.5;
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"NLDO_Common\gear\helihelmet.paa"};
        };
    };

    class NLDO_RU_VDV_CrewHelmet: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[NLDO] Russian Crew Helmet";
        picture = "\NLDO_Common\Gear\uim\Black.jpg";
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