////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\PlashType2\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:07 2020 : 'file' last modified on Mon Jun 01 22:47:52 2020
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
	class BallisticHelmet_Green;
	class NVGoggles;
	class FS_PlashType2_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Short leather cloak";
		descriptionShort = "A short leather cloak will protect well from rain, strong winds, and perhaps also from the bites of a blind dog. ------------------ FIDOv STALKER PACK MOD";
		model = "\FS_2\1_SMOT\PlashType2\plashType2_jacket_G.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 900;
		itemSize[] = {7,7};
		itemsCargoSize[] = {6,6};
		quickBarBonus = 4;
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
					hitpoints = 500;
					healthLevels[] = {{1,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.7,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.5,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0.3,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0,{"DZ\characters\tops\Data\Hunting_jacket_destruct.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.5;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.5;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "\FS_2\1_SMOT\PlashType2\plashType2_jacket.p3d";
			female = "\FS_2\1_SMOT\PlashType2\PlashType2_jacket_F.p3d";
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
	class FS_PlashType2_black: FS_PlashType2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"FS_2\1_SMOT\PlashType2\data\PlashType2_black.paa"};
	};
	class FS_PlashType2_Brown: FS_PlashType2_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"FS_2\1_SMOT\PlashType2\data\PlashType2_brown.paa"};
	};
};
