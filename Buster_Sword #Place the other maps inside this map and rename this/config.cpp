class CfgPatches
{
	class Fluffie_Customs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgMods
{
	class Fluffie_Customs
	{	
		
		dir = "Fluffie_Customs";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "FC_Sword Module";
		type = "mod";
	};
};
class CfgVehicles
{
	class CombatKnife;
	class FC_Buster_Sword_Base: CombatKnife
	{
		scope=0;
		model="Fluffie_Customs_Main\buster_sword\bs.p3d";
		SingleUseActions[]={533};
		ContinuousActions[]={168,193};
		build_action_type=10;
		dismantle_action_type=0;
		rotationFlags=17;
		weight=940;
		itemSize[]={2,6};
		fragility=0.0080000004;
		openItemSpillRange[]={20,50};
	};
	class FC_Buster_Sword: FC_Buster_Sword_Base
    {
        scope = 2;
		displayName="Buster Sword";
		descriptionShort="";
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		hiddenSelections[]=
        {
		  "buster"
        };
        hiddenSelectionsTextures[] =
        {
            "Fluffie_Customs_Main\buster_sword\data\base_ca.paa"
		};
	};
};