////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\ExoType\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:06 2020 : 'file' last modified on Mon Jun 01 22:47:52 2020
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
	class FS_ExoTypeJacket_ColorBase: HuntingJacket_Autumn
	{
		displayName = "EcoType";
		descriptionShort = "Strange experiments of scientists";
		model = "\FS_2\1_smot\ExoType\ExoType_Jacket_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 2200;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,8};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0.1;
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
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0.4;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "\FS_2\1_smot\ExoType\ExoType_Jacket.p3d";
			female = "\FS_2\1_smot\ExoType\ExoType_Jacket.p3d";
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
	class FS_ExoTypeJacket_Standart: FS_ExoTypeJacket_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
	};
	class FS_ExoTypePants_ColorBase: CargoPants_Beige
	{
		displayName = "ExoType Pants";
		descriptionShort = "MOD FIDOv _FS_";
		model = "FS_2\1_smot\ExoType\ExoType_Pants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,6};
		weight = 1700;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.3;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "FS_2\1_smot\ExoType\ExoType_Pants.p3d";
			female = "FS_2\1_smot\ExoType\ExoType_Pants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},{0.7,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},{0.5,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},{0.3,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},{0,{"DZ\characters\pants\Data\CargoPants_destruct.rvmat","DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
			};
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
	class FS_ExoTypePants_Standart: FS_ExoTypePants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
	};
};
