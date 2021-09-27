////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_SMOT\GasMask_FV5\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:40 2021 : 'file' last modified on Mon Dec 21 05:19:18 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Masks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class GP5GasMask;
	class FS_GasMask_FV: GP5GasMask
	{
		scope = 2;
		displayName = "FV gas mask";
		descriptionShort = "Gas mask";
		model = "\FS_3_Items\1_SMOT\GasMask_FV5\gasmaskfv5_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 730;
		itemSize[] = {1,2};
		heatIsolation = 0.5;
		visibilityModifier = 0.9;
		noHelmet = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {"\dz\characters\masks\data\GasMask_co.paa","\dz\characters\masks\data\GasMask_co.paa","\dz\characters\masks\data\GasMask_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\masks\data\GasMask.rvmat"}},{0.7,{"DZ\characters\masks\data\GasMask.rvmat"}},{0.5,{"DZ\characters\masks\data\GasMask_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\GasMask_damage.rvmat"}},{0,{"DZ\characters\masks\data\GasMask_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\FS_3_Items\1_SMOT\GasMask_FV5\gasmaskfv5.p3d";
			female = "\FS_3_Items\1_SMOT\GasMask_FV5\gasmaskfv5.p3d";
		};
		class Protection
		{
			biological = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
		soundVoiceType = "gasmask";
		soundVoicePriority = 3;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymask_filter: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"GasMaskFilter"};
		model = "DZ\characters\masks\proxy\mask_filter.p3d";
	};
};
