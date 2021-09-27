////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_SMOT\FX01\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:40 2021 : 'file' last modified on Mon Dec 21 05:19:18 2020
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
	class FirefightersPants_Beige;
	class FirefighterJacket_Beige;
	class FS_FX01_Base: FirefighterJacket_Beige
	{
		displayName = "Heavy armor x01";
		descriptionShort = "Special development of the military. It was released in a limited edition.";
		model = "\FS_3_Items\1_SMOT\FX01\fx01_jacket_g.p3d";
		inventorySlot[] = {"Body"};
		attachments[] = {"melee","VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 1;
		weight = 10400;
		itemSize[] = {6,6};
		itemsCargoSize[] = {8,8};
		quickBarBonus = 2;
		heatIsolation = 0.7;
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
					hitpoints = 300;
					healthLevels[] = {{1,{"DZ\characters\tops\Data\Firefighter_jacket.rvmat"}},{0.7,{"DZ\characters\tops\Data\Firefighter_jacket.rvmat"}},{0.5,{"DZ\characters\tops\Data\Firefighter_jacket_damage.rvmat"}},{0.3,{"DZ\characters\tops\Data\Firefighter_jacket_damage.rvmat"}},{0,{"DZ\characters\tops\Data\Firefighter_jacket_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.2;
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
			male = "\FS_3_Items\1_SMOT\FX01\fx01_jacket.p3d";
			female = "\FS_3_Items\1_SMOT\FX01\fx01_jacket.p3d";
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
	class FS_FX01_up_DOLG: FS_FX01_Base
	{
		scope = 2;
		displayName = "Heavy armor x01 DOLG";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_DOLG.paa"};
	};
	class FS_FX01_up_FIDOv: FS_FX01_Base
	{
		scope = 2;
		displayName = "Heavy armor x01 Destroyers";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_FIDOv.paa"};
	};
	class FS_FX01_up_ClearSky: FS_FX01_Base
	{
		scope = 2;
		displayName = "Heavy armor x01 Clear Sky";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_ClearSky.paa"};
	};
	class FS_FX01_up_FX01_Neitral: FS_FX01_Base
	{
		scope = 2;
		displayName = "Heavy armor x01 Neitral";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_Neitral.paa"};
	};
	class FS_FX01_up_FX01_Naim: FS_FX01_Base
	{
		scope = 2;
		displayName = "Heavy armor x01 Naemnik";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_Naim.paa"};
	};
	class FS_FX01_up_FX01_Svoboda: FS_FX01_Base
	{
		scope = 2;
		displayName = "Heavy armor x01Free";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_Svoboda.paa"};
	};
	class FS_FX01_up_FX01_Monolit: FS_FX01_Base
	{
		scope = 2;
		displayName = "Heavy armor x01Monolit";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_mono.paa"};
	};
	class FS_FX01_DownBase: FirefightersPants_Beige
	{
		displayName = "Heavy armor x01 pants";
		descriptionShort = "Heavy armor pants by FIDOv ";
		model = "\FS_3_Items\1_SMOT\FX01\fx01_pants_g.p3d";
		ContinuouActions[] = {"AT_WRING_CLOTHES"};
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,4};
		itemsCargoSize[] = {6,4};
		weight = 3500;
		ragQuantity = 3;
		absorbency = 0;
		heatIsolation = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		quickBarBonus = 1;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "\FS_3_Items\1_SMOT\FX01\fx01_pants.p3d";
			female = "\FS_3_Items\1_SMOT\FX01\fx01_pants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"DZ\characters\pants\Data\Firefighter_Pants.rvmat"}},{0.7,{"DZ\characters\pants\Data\Firefighter_Pants.rvmat"}},{0.5,{"DZ\characters\pants\Data\Firefighter_Pants_damage.rvmat"}},{0.3,{"DZ\characters\pants\Data\Firefighter_Pants_damage.rvmat"}},{0,{"DZ\characters\pants\Data\Firefighter_Pants_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
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
	class FS_FX01_Down_DOLG: FS_FX01_DownBase
	{
		scope = 2;
		displayName = "Heavy armor x01 pants DOLG";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_DOLG.paa"};
	};
	class FS_FX01_Down_FIDOv: FS_FX01_DownBase
	{
		scope = 2;
		displayName = "Heavy armor x01 pants Destr";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_FIDOv.paa"};
	};
	class FS_FX01_Down_ClearSky: FS_FX01_DownBase
	{
		scope = 2;
		displayName = "Heavy armor x01 pants ClearSky";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_ClearSky.paa"};
	};
	class FS_FX01_Down_FX01_Neitral: FS_FX01_DownBase
	{
		scope = 2;
		displayName = "Heavy armor x01 pants Neitral";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_Neitral.paa"};
	};
	class FS_FX01_Down_FX01_Naim: FS_FX01_DownBase
	{
		scope = 2;
		displayName = "Heavy armor x01 pants Naemnik";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_Naim.paa"};
	};
	class FS_FX01_Down_FX01_Svoboda: FS_FX01_DownBase
	{
		scope = 2;
		displayName = "Heavy armor x01 Free";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_Svoboda.paa"};
	};
	class FS_FX01_Down_FX01_Monolit: FS_FX01_DownBase
	{
		scope = 2;
		displayName = "Heavy armor x01 Monolit";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\FX01\data\FX01_mono.paa"};
	};
};
