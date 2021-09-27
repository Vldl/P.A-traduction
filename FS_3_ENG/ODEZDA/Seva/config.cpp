////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\Seva\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:17 2020 : 'file' last modified on Tue Jun 02 01:39:43 2020
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
	class FS_SevaModule_ColorBase: HuntingJacket_Autumn
	{
		displayName = "Overalls SEVA";
		descriptionShort = "spécialement pour vous - Overalls SEVA. Comme vous l'avez demandé : un système respiratoire fermé, plus une résistance thermique, un contour de protection électrique et des matériaux anti-corrosion pour le revêtement externe. En outre - des conteneurs intégrés pour les artefacts. Une chose indispensable pour un Stalker !";
		model = "FS_3\ODEZDA\Seva\Seva_jacket_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 3600;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,7};
		quickBarBonus = 5;
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
			male = "FS_3\ODEZDA\Seva\Seva_jacket.p3d";
			female = "FS_3\ODEZDA\Seva\Seva_jacket_F.p3d";
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
	class FS_SevaModule_Odinochka: FS_SevaModule_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_2\1_SMOT\Strelok\data\st_form.paa"};
	};
	class FS_SevaModule_Monolit: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - Monolith";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_2\1_SMOT\Strelok\data\Monolit\st_combez_monolit.paa"};
		hiddenSelectionsMaterials[] = {"FS_2\1_SMOT\Strelok\data\Monolit\st_form_monolit.rvmat"};
	};
	class FS_SevaModule_Naemniki: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - Mercenaries";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FV_ST_PACK\monolit\data\sets\killer_nau.paa","FV_ST_PACK\monolit\data\sets\killer_nau.paa","FV_ST_PACK\monolit\data\sets\killer_nau.paa"};
	};
	class FS_SevaModule_DOLG: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - LONG";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FV_ST_PACK\monolit\data\sets\dolg_nau.paa","FV_ST_PACK\monolit\data\sets\dolg_nau.paa","FV_ST_PACK\monolit\data\sets\dolg_nau.paa"};
	};
	class FS_SevaModule_Svoboda: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - FREEDOM";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FV_ST_PACK\monolit\data\sets\free_nau.paa","FV_ST_PACK\monolit\data\sets\free_nau.paa","FV_ST_PACK\monolit\data\sets\free_nau.paa"};
	};
	class FS_SevaModule_SpecFID: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - Destroyer";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_2\1_SMOT\Strelok\data\st_form_SpecFID.paa"};
	};
	class FS_SevaModule_MEDIC: FS_SevaModule_ColorBase
	{
		scope = 2;
		displayName = "Overalls SEVA - Medic";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_2\1_SMOT\Strelok\data\st_form_medic.paa"};
	};
};
