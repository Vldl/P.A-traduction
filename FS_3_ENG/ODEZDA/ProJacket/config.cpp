////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\ProJacket\config.bin
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
	class FS_ProJacketST_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Special form";
		descriptionShort = "....";
		model = "FS_3\ODEZDA\ProJacket\pro_jacket_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 2600;
		attachments[] = {"VestPouch","Belt_Back","pistol","Belt_Left"};
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,7};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"FIDOJacket","FIDOvest"};
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
			male = "FS_3\ODEZDA\ProJacket\pro_jacket.p3d";
			female = "FS_3\ODEZDA\ProJacket\pro_jacket.p3d";
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
	class FS_ProJacketST: FS_ProJacketST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data\apper\apper_co.paa","FS_3_Data\proJacket\data\vest\vest_co.paa"};
	};
	class FS_ProJacketST_DOLG: FS_ProJacketST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data\apper\apper_black_co.paa","FS_3_Data\proJacket\data\vest\vest_dolg.paa"};
	};
	class FS_ProJacketST_SVOBODA: FS_ProJacketST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data\apper\apper_green_co.paa","FS_3_Data\proJacket\data\vest\vest_svoboda.paa"};
	};
	class FS_ProJacketST_Monolit: FS_ProJacketST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data\apper\apper_monolit_co.paa","FS_3_Data\proJacket\data\vest\vest_monolit.paa"};
	};
	class FS_ProJacketST_Black: FS_ProJacketST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data\apper\apper_black_co.paa","FS_3_Data\proJacket\data\vest\vest_black.paa"};
	};
	class FS_ProPantsST_ColorBase: CargoPants_Beige
	{
		displayName = "Pantalon de protection";
		descriptionShort = "Pantalon militaire mi-long";
		model = "FS_3\ODEZDA\ProJacket\pro_pants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,5};
		weight = 1100;
		quickBarBonus = 3;
		absorbency = 0;
		heatIsolation = 0.5;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "FS_3\ODEZDA\ProJacket\pro_pants.p3d";
			female = "FS_3\ODEZDA\ProJacket\pro_pants.p3d";
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
				class Melee
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
	class FS_ProPantsST: FS_ProPantsST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data_pants\pants\Pants_co.paa"};
	};
	class FS_ProPantsST_DOLG: FS_ProPantsST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data_pants\pants\pants_dolg_co.paa"};
	};
	class FS_ProPantsST_SVOBODA: FS_ProPantsST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data_pants\pants\pants_svoboda_co.paa"};
	};
	class FS_ProPantsST_BLACK: FS_ProPantsST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data_pants\pants\pants_black_co.paa"};
	};
	class FS_ProPantsST_MONOLIT: FS_ProPantsST_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\proJacket\data_pants\pants\pants_MONOLIT_co.paa"};
	};
};
