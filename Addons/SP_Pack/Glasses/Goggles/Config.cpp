class CfgPatches
{
	class SP_Goggles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgGlasses
{
	class None;



	class SP_Goggles_Black: None
	{
		scope = 2;
		displayname = "Goggles (Black)";
		model = "\SP_Pack\Models\GogglesBlack.p3d";
		picture = "\SP_Pack\Glasses\Goggles\ui\Black.jpg";
                identityTypes[] = {"NoGlasses",1000};
                
                

};

        class SP_Goggles_Green: None
	{
		scope = 2;
		displayname = "Goggles (Green)";
		model = "\SP_Pack\Models\GogglesGreen.p3d";
		picture = "\SP_Pack\Glasses\Goggles\ui\Green.jpg";
                identityTypes[] = {"NoGlasses",1000};
                

};

        class SP_Goggles_Tan: None
	{
		scope = 2;
		displayname = "Goggles (Tan)";
		model = "\SP_Pack\Models\GogglesTan.p3d";
		picture = "\SP_Pack\Glasses\Goggles\ui\Tan.jpg";
                identityTypes[] = {"NoGlasses",1000};
                

		
	
	};
};