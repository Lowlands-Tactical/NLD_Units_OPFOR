#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define true	1
#define false	0

#define VSoft		0
#define VArmor		1
#define VAir		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2 





class CfgPatches
{
	class SP_Craig_TSH04Helmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class SP_TSH04Helmet
	{
		displayName = "TSH04 Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;



	class SP_TSH04Helmet_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "TSH04 Helmet (Black)";
		picture = "\SP_Pack\Hats\TSH04Helmet\ui\Black.jpg";
		model = "\SP_Pack\Models\TSH04Helmet";
                hiddenSelectionsTextures[] = {"\SP_Pack\Hats\TSH04Helmet\Black.paa"};
                hiddenSelections[] = {"Camo"};
                author = "SP Craig";
                
                  

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\SP_Pack\Models\TSH04Helmet";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
                        hiddenSelectionsTextures[] = {"\SP_Pack\Hats\TSH04Helmet\Black.paa"};
                        hiddenSelections[] = {"Camo"};



        
		};
	};
};
//};
