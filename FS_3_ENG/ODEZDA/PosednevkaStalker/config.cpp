////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\PosednevkaStalker\config.bin
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
	class FS_Posednev_Combez_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Ordinaire Équipement";
		descriptionShort = "Équipement d'un Stalker habituelle. Pratique, chaud, mais protection moyenne";
		model = "FS_3\ODEZDA\PosednevkaStalker\st_form_posednevka_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 2600;
		itemSize[] = {4,4};
		itemsCargoSize[] = {6,6};
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
		class ClothingTypes
		{
			male = "FS_3\ODEZDA\PosednevkaStalker\st_form_posednevka.p3d";
			female = "FS_3\ODEZDA\PosednevkaStalker\st_form_posednevka_f.p3d";
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
	class FS_Posednev_Combez_Odinocka: FS_Posednev_Combez_ColorBase
	{
		scope = 2;
		displayName = "Ordinary Single Snail";
		hiddenSelectionsTextures[] = {"FS_3_Data\Posednevka\data\stalker\Pos_stalker.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Posednevka\data\stalker\Pos_Stalker_mat.rvmat"};
	};
	class FS_Posednev_Combez_DOLG: FS_Posednev_Combez_ColorBase
	{
		scope = 2;
		displayName = "Ordinary Snaryaga Dolga";
		hiddenSelectionsTextures[] = {"FS_3_Data\Posednevka\data\dolg\Pos_dolg.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Posednevka\data\dolg\Pos_dolg_mat.rvmat"};
	};
	class FS_Posednev_Combez_Monolit: FS_Posednev_Combez_ColorBase
	{
		scope = 2;
		displayName = "The usual Monolith shell";
		hiddenSelectionsTextures[] = {"FS_3_Data\Posednevka\data\monolit\Pos_monolit.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Posednevka\data\monolit\Pos_monolit_mat.rvmat"};
	};
	class FS_Posednev_Combez_SVOBODA: FS_Posednev_Combez_ColorBase
	{
		scope = 2;
		displayName = "Ordinary Snary of Freedom";
		hiddenSelectionsTextures[] = {"FS_3_Data\Posednevka\data\SVOBODA\Pos_SVOBODA.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Posednevka\data\SVOBODA\Pos_SVOBODA_mat.rvmat"};
	};
	class FS_Posednev_Combez_WarEcolog: FS_Posednev_Combez_ColorBase
	{
		scope = 2;
		displayName = "Ordinary Scarecrow Combat Ecologists";
		hiddenSelectionsTextures[] = {"FS_3_Data\Posednevka\data\VOSHOD\Pos_VOSHOD.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Posednevka\data\VOSHOD\Pos_VOSHOD_mat.rvmat"};
	};
};
