////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_SMOT\bomberJacket\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:39 2021 : 'file' last modified on Mon Dec 21 05:19:18 2020
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
	class JungleBoots_ColorBase;
	class FS_BomberJack_ColorBase: HuntingJacket_Autumn
	{
		scope = 0;
		displayName = "Bomberjacket";
		descriptionShort = "Veste épaisse et chaude";
		model = "FS_3_Items\1_SMOT\bomberJacket\bomb_jacket_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 2600;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,7};
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
			male = "FS_3_Items\1_SMOT\bomberJacket\bomb_jacket_m.p3d";
			female = "FS_3_Items\1_SMOT\bomberJacket\bomb_jacket_f.p3d";
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
	class FS_BomberJack_Dolg: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket LONG";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Dolg\Bomb_jack_dolg_co.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Dolg\bomg_jack_dolg_mat.rvmat"};
	};
	class FS_BomberJack_Monolit: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Monolith";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\bomberJacket\data\monolit\bomb_jack_monolit_co.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Items\1_SMOT\bomberJacket\data\monolit\bomg_jack_monolit_mat.rvmat"};
	};
	class FS_BomberJack_Neitral: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Neitral";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Neitral\bomb_jack_neit_co.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Neitral\bomg_jack_neit_mat.rvmat"};
	};
	class FS_BomberJack_Bandos: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Bandos";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\bomberJacket\data\bandos\bomb_jack_bandos_co.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Items\1_SMOT\bomberJacket\data\bandos\bomg_jack_neit_mat.rvmat"};
	};
	class FS_BomberJack_svoboda: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket svoboda";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\bomberJacket\data\svoboda\bomb_jack_svoboda_co.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Items\1_SMOT\bomberJacket\data\svoboda\bomg_jack_svoboda_mat.rvmat"};
	};
	class FS_BomberJack_Brown: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Brown";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Clear\bomb_jack_clear_brown.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Clear\bomb_jack_mat_clear.rvmat"};
	};
	class FS_BomberJack_black: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Black";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Clear\bomb_jack_clear_black.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Clear\bomb_jack_mat_clear.rvmat"};
	};
	class FS_BomberJack_Green: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Green";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Clear\bomb_jack_clear_Green.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Clear\bomb_jack_mat_clear.rvmat"};
	};
	class FS_BomberJack_blue: FS_BomberJack_ColorBase
	{
		scope = 2;
		displayName = "Thick jacket Blue";
		hiddenSelectionsTextures[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Clear\bomb_jack_clear_blue.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Items\1_SMOT\bomberJacket\data\Clear\bomb_jack_mat_clear.rvmat"};
	};
};
