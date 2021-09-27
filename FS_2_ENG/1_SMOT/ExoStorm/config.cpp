////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_SMOT\ExoStorm\config.bin
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
	class BallisticHelmet_Green;
	class NVGoggles;
	class FS_ExoStorm_Helm_ColorBase: BallisticHelmet_Green
	{
		displayName = "Gas Mask Helmet Exoskeleton";
		descriptionShort = "Exoskeleton helmet. Recommended for use with a complete set";
		model = "FS_2\1_SMOT\ExoStorm\ExoStormHelmet_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		weight = 1400;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.13;
		noMask = 1;
		headSelectionsToHide[] = {"Clipping_HelmetMich"};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 140;
					healthLevels[] = {{1,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.7,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.5,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0,{"DZ\characters\headgear\data\HelmetMich_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.3;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.21;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.21;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "\FS_2\1_SMOT\ExoStorm\ExoStormHelmet.p3d";
			female = "\FS_2\1_SMOT\ExoStorm\ExoStormHelmet.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ExoStorm_Helm_DOLG: FS_ExoStorm_Helm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_dolg.paa"};
	};
	class FS_ExoStorm_Helm_bandit: FS_ExoStorm_Helm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_bandit.paa"};
	};
	class FS_ExoStorm_Helm_Svoboda: FS_ExoStorm_Helm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_Free.paa"};
	};
	class FS_ExoStorm_Helm_Monolit: FS_ExoStorm_Helm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_Monolit.paa"};
	};
	class FS_ExoStorm_Helm_specnaz: FS_ExoStorm_Helm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_specnaz.paa"};
	};
	class FS_ExoStorm_Helm_tank: FS_ExoStorm_Helm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_tank.paa"};
	};
	class FS_ExoStorm_Helm_ClearSKY: FS_ExoStorm_Helm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_2\1_Char\clearNebo\data\exo_clearnebo.paa"};
	};
	class FS_ExoStorm_HelmNoGAS_ColorBase: BallisticHelmet_Green
	{
		displayName = "Exoskeleton Helmet";
		descriptionShort = "Exoskeleton helmet. Recommended for use with a complete set";
		model = "FS_2\1_SMOT\ExoStorm\ExoStormHelmetNoGas_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot = "Headgear";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		weight = 1200;
		itemSize[] = {4,3};
		absorbency = 0;
		heatIsolation = 0.13;
		noMask = 0;
		headSelectionsToHide[] = {"Clipping_HelmetMich"};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 140;
					healthLevels[] = {{1,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.7,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.5,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0,{"DZ\characters\headgear\data\HelmetMich_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.3;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.21;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.21;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "\FS_2\1_SMOT\ExoStorm\ExoStormHelmetNoGas.p3d";
			female = "\FS_2\1_SMOT\ExoStorm\ExoStormHelmetNoGas.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ExoStorm_HelmNG_DOLG: FS_ExoStorm_HelmNoGAS_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		color = "Green";
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_dolg.paa"};
	};
	class FS_ExoStorm_HelmNG_bandit: FS_ExoStorm_HelmNoGAS_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_bandit.paa"};
	};
	class FS_ExoStorm_HelmNG_Svoboda: FS_ExoStorm_HelmNoGAS_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_Free.paa"};
	};
	class FS_ExoStorm_HelmNG_Monolit: FS_ExoStorm_HelmNoGAS_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_Monolit.paa"};
	};
	class FS_ExoStorm_HelmNG_specnaz: FS_ExoStorm_HelmNoGAS_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_specnaz.paa"};
	};
	class FS_ExoStorm_HelmNG_tank: FS_ExoStorm_HelmNoGAS_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_tank.paa"};
	};
	class FS_ExoStorm_HelmNG_ClearSKY: FS_ExoStorm_HelmNoGAS_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_2\1_Char\clearNebo\data\exo_clearnebo.paa"};
	};
	class FS_ExoStorm_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Upper Exoskeleton Module";
		descriptionShort = "Increased body protection.";
		model = "\FS_2\1_smot\ExoStorm\ExoStormJacket_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 10000;
		itemSize[] = {7,7};
		itemsCargoSize[] = {8,7};
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
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0.1;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0.1;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "\FS_2\1_smot\ExoStorm\ExoStormJacket.p3d";
			female = "\FS_2\1_smot\ExoStorm\ExoStormJacket.p3d";
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
	class FS_ExoStorm_Jacket_DOLG: FS_ExoStorm_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_dolg.paa"};
	};
	class FS_ExoStorm_Jacket_bandit: FS_ExoStorm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_bandit.paa"};
	};
	class FS_ExoStorm_Jacket_Svoboda: FS_ExoStorm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_Free.paa"};
	};
	class FS_ExoStorm_Jacket_Monolit: FS_ExoStorm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_Monolit.paa"};
	};
	class FS_ExoStorm_Jacket_specnaz: FS_ExoStorm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_specnaz.paa"};
	};
	class FS_ExoStorm_Jacket_tank: FS_ExoStorm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_tank.paa"};
	};
	class FS_ExoStorm_Jacket_ClearSKY: FS_ExoStorm_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_2\1_Char\clearNebo\data\exo_clearnebo.paa"};
	};
	class FS_ExoStorm_Pants_ColorBase: CargoPants_Beige
	{
		displayName = "Lower module exoskeleton";
		descriptionShort = "Increased endurance and weight tolerance";
		model = "\FS_2\1_smot\ExoStorm\ExoStormPants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,5};
		weight = -40000;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.3;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "\FS_2\1_smot\ExoStorm\ExoStormPants.p3d";
			female = "\FS_2\1_smot\ExoStorm\ExoStormPants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},{0.7,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},{0.5,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},{0.3,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},{0,{"DZ\characters\pants\Data\CargoPants_destruct.rvmat","DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.3;
					};
					class Shock
					{
						damage = 0.3;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.3;
					};
					class Shock
					{
						damage = 0.3;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.3;
					};
					class Shock
					{
						damage = 0.3;
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
	class FS_ExoStorm_Pants_DOLG: FS_ExoStorm_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_dolg.paa"};
	};
	class FS_ExoStorm_Pants_bandit: FS_ExoStorm_Pants_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_bandit.paa"};
	};
	class FS_ExoStorm_Pants_Svoboda: FS_ExoStorm_Pants_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_Free.paa"};
	};
	class FS_ExoStorm_Pants_Monolit: FS_ExoStorm_Pants_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_Monolit.paa"};
	};
	class FS_ExoStorm_Pants_specnaz: FS_ExoStorm_Pants_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_specnaz.paa"};
	};
	class FS_ExoStorm_Pants_tank: FS_ExoStorm_Pants_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"fv_st_pack\EX\data\hd\exo_tank.paa"};
	};
	class FS_ExoStorm_Pants_ClearSKY: FS_ExoStorm_Pants_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_2\1_Char\clearNebo\data\exo_clearnebo.paa"};
	};
};
