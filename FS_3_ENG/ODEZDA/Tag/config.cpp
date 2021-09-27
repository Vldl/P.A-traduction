////////////////////////////////////////////////////////////////////
//DeRap: FS_3\ODEZDA\Tag\config.bin
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
	class Armband_Yellow;
	class Sweater_Gray;
	class LeatherBelt_Beige;
	class FS_TAG_ColorBase: LeatherBelt_Beige
	{
		scope = 0;
		displayName = "Chevron";
		descriptionShort = "Chevron qui se fixe sur l'épaule.";
		model = "FS_3\ODEZDA\Tag\tag_G.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemsCargoSize[] = {1,2};
		inventorySlot = "Armband";
		attachments[] = {""};
		itemInfo[] = {"Clothing","Hips"};
		itemSize[] = {1,1};
		weight = 20;
		lootCategory = "Crafted";
		lootTag[] = {"Civilian"};
		hiddenSelections[] = {"vkcomfidovpublicc"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\belts\data\belt_leather_beige.rvmat"}},{0.7,{}},{0.5,{"DZ\characters\belts\data\belt_leather_beige_damage.rvmat"}},{0.3,{}},{0,{"DZ\characters\belts\data\belt_leather_beige_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "FS_3\ODEZDA\Tag\tag.p3d";
			female = "FS_3\ODEZDA\Tag\tag_F.p3d";
		};
	};
	class FS_TAG_Bandit: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\band.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ClearSky: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\CLEARnebo.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_DOLG: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\DOLG.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_DOLG_KANON: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\DOLG_2.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_monolit: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\monolit.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_monolit_KANON: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\monolit_2.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_NAEM: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\NAEM.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_NAUKA: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\NAUKA.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_Odin: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\Odin.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_renegati: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\renegati.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_SVOBODA: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\SVOBODA.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\CLANS\voen.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_1: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\1.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_2: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\2.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_3: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\3.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_4: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\4.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_5_Starsina: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\5.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_6_Letexa: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\6.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_7_StarLetexa: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\7.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_8_Kapitan: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\8.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_9_maer: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\9.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_10_PodPolkov: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\10.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_11_Polkov: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\11.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_12_GeneralMaer: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\12.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_13_GeneralLetex: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\13.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_14_GeneralPolk: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\14.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_ARMY_MEDIC: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\army\medic.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_BlackAngel: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\Nabor\blackAngel.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_FIDOv: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\Nabor\FIDOv.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_CherepGroup: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\Nabor\SkullPaty.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_SpecFID: FS_TAG_ColorBase
	{
		scope = 2;
		displayName = "SpecFID chevrons ";
		descriptionShort = "Apparu dans la zone, on ne sait pas quand. On ne sait presque rien du groupe. On sait que ce sont des personnes spécialement formées qui poursuivent leurs propres objectifs. Si vous trouvez ce chevron, je vous conseille de le jeter. Ils vous trouveront, et ils ne vous laisseront tout simplement pas partir.";
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\Nabor\SpecFID.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_Temnie: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\Nabor\temnie.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_GREX: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\Nabor\FIDOv.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
	class FS_TAG_Netrals: FS_TAG_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"FS_3_Data\Tag\data\clans\Netrals.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\Tag\data\TAG_Material.rvmat"};
	};
};
