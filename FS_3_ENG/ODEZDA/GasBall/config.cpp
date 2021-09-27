////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\GasBall\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:15 2020 : 'file' last modified on Tue Jun 02 01:39:42 2020
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
	class GasMask;
	class FS_GasBallon_colorBase: GasMask
	{
		scope = 0;
		displayName = "Système de respiration fermée";
		descriptionShort = "Le système à air fermé habituel, surtout pas durable, mais populaire parmi stalkers.";
		model = "\FS_3\ODEZDA\GasBall\gasball_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 1830;
		itemSize[] = {3,5};
		heatIsolation = 0.5;
		visibilityModifier = 0.9;
		noHelmet = 0;
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {"vkcomfidovpublic"};
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
			male = "\FS_3\ODEZDA\GasBall\gasball.p3d";
			female = "\FS_3\ODEZDA\GasBall\gasball.p3d";
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
		soundVoicePriority = 5;
	};
	class FS_GasBallon_Odinocki: FS_GasBallon_colorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Posednevka\data\stalker\Pos_stalker.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Posednevka\data\stalker\Pos_Stalker_mat.rvmat"};
	};
	class FS_GasBallon_DOLG: FS_GasBallon_colorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Posednevka\data\dolg\Pos_dolg.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Posednevka\data\dolg\Pos_dolg_mat.rvmat"};
	};
};
