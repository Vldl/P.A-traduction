////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Predmet\probirka\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:17 2020 : 'file' last modified on Tue Jun 02 01:39:44 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Drinks
	{
		units[] = {"Drink_Canteen","Drink_SodaZlutaKlasik","Drink_SodaZlutaKolaloka","Drink_SodaZlutaMalinovka","Drink_WaterBottle"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class Vodka;
	class FS_Probirka_colorBase: Vodka
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_Vodka0";
		descriptionShort = "$STR_CfgVehicles_Vodka1";
		model = "FS_3\Predmet\probirka\probirka.p3d";
		weight = 51;
		itemSize[] = {1,2};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 5;
		hiddenSelections[] = {"sliz"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] = {{1,{"DZ\gear\drinks\data\VodkaBottles.rvmat"}},{0.7,{"DZ\gear\drinks\data\VodkaBottles.rvmat"}},{0.5,{"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"}},{0,{"DZ\gear\drinks\data\VodkaBottles_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet = "GlassBottle_in_B_SoundSet";
					id = 202;
				};
				class GlassBottle_in_C
				{
					soundSet = "GlassBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class GlassBottle_out_A
				{
					soundSet = "GlassBottle_out_A_SoundSet";
					id = 205;
				};
				class GlassBottle_out_B
				{
					soundSet = "GlassBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
	};
	class FS_Probirka_Blood: FS_Probirka_colorBase
	{
		scope = 2;
		displayName = "Tube à essai sanguin";
		descriptionShort = "Tube à essai en verre, échantillon de sang à l'intérieur";
		hiddenSelectionsTextures[] = {"FS_3_Data\probirka\data\GreenBlood.paa"};
	};
	class FS_Probirka_Sliz: FS_Probirka_colorBase
	{
		scope = 2;
		displayName = "Tube à essai en verre";
		descriptionShort = "Tube à essai en verre, étrange bave à l'intérieur";
		hiddenSelectionsTextures[] = {"FS_3_Data\probirka\data\Greensliz.paa"};
	};
	class FS_Probirka_SlizBlue: FS_Probirka_colorBase
	{
		scope = 2;
		displayName = "Tube à essai en verre";
		descriptionShort = "Tube à essai en verre, étrange bave à l'intérieur";
		hiddenSelectionsTextures[] = {"FS_3_Data\probirka\data\GreenSLIZ_blue.paa"};
	};
	class FS_Probirka_SlizOrange: FS_Probirka_colorBase
	{
		scope = 2;
		displayName = "Tube à essai en verre";
		descriptionShort = "Tube à essai en verre, étrange bave à l'intérieur";
		hiddenSelectionsTextures[] = {"FS_3_Data\probirka\data\GreenSLIZ_pink.paa"};
	};
	class FS_Probirka_Poltergest: FS_Probirka_colorBase
	{
		scope = 2;
		model = "FS_3\Predmet\probirka\probirkabig.p3d";
		displayName = "Poltergeist Tube d'échantillon";
		hiddenSelections[] = {"sliz"};
		descriptionShort = "Un mucus étrange qui est sécrété à l'intérieur du poltergeist. Il peut s'agir d'un échantillon coûteux ou non. Voyons combien les scientifiques peuvent donner pour cela";
		hiddenSelectionsTextures[] = {"FS_3_Data\probirka\data\GreenSLIZ_blue.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySodaCan_Used: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"tripWireAttachment"};
		model = "\dz\gear\drinks\SodaCan_Used.p3d";
	};
};
