////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\PlashOLD\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:16 2020 : 'file' last modified on Tue Jun 02 01:39:43 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Tops
	{
		units[] = {"Shirt_CheckRed","Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red","MaleTorso","FemaleTorso"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class CargoPants_Beige;
	class HuntingJacket_Autumn;
	class TortillaBag;
	class BallisticHelmet_Green;
	class FS_Poncho_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Poncho en toile de jute";
		descriptionShort = "Il te protegera de la pluie";
		model = "FS_3\ODEZDA\PlashOLD\poncho_G.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot = "Hips";
		itemInfo[] = {"Clothing","Hips"};
		rotationFlags = 34;
		weight = 800;
		itemSize[] = {4,4};
		itemsCargoSize[] = {};
		quickBarBonus = 0;
		heatIsolation = 0.8;
		absorbency = 0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublic"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.7,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.5,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0.3,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0,{"DZ\characters\tops\Data\Hunting_jacket_destruct.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "FS_3\ODEZDA\PlashOLD\poncho.p3d";
			female = "FS_3\ODEZDA\PlashOLD\poncho.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_Poncho_green: FS_Poncho_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Poncho\data\poncho.paa"};
	};
	class FS_Poncho_black: FS_Poncho_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Poncho\data\poncho_black.paa"};
	};
};
