////////////////////////////////////////////////////////////////////
//DeRap: FS_4\1_ai\Gen\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:35:46 2021 : 'file' last modified on Tue Oct 06 21:01:33 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Headgear
	{
		units[] = {"BaseballCap_Blue","BaseballCap_Beige","BaseballCap_Black","BaseballCap_Olive","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Camo","BaseballCap_CMMG_Black","BaseballCap_CMMG_Pink","MotoHelmet_Black","MotoHelmet_Blue","MotoHelmet_Green","MotoHelmet_Red","MotoHelmet_White","Headtorch_Grey","CowboyHat_Brown","CowboyHat_black","CowboyHat_darkBrown","CowboyHat_green","BoonieHat_black","BoonieHat_Blue","BoonieHat_DPM","BoonieHat_dubok","BoonieHat_flecktran","BoonieHat_NavyBlue","BoonieHat_olive","BoonieHat_orange","BoonieHat_red","BoonieHat_Tan","FlatCap_Black","FlatCap_Grey","FlatCap_Brown","FlatCap_Blue","FlatCap_Red","FlatCap_Check_Black","FlatCap_Check_Brown","FlatCap_Check_Grey","GhillieHoodWoodland"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class RadarCap_Black;
	class FS_Genefer: RadarCap_Black
	{
		scope = 2;
		displayName = "Bandeau";
		descriptionShort = "Bandeau";
		model = "\FS_4\1_ai\Gen\genefer_g.p3d";
		inventorySlot = "Armband";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","mask"};
		rotationFlags = 16;
		weight = 160;
		itemSize[] = {3,2};
		absorbency = 0.6;
		heatIsolation = 0.95;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_RadarCap"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\headgear\data\RadarCap.rvmat"}},{0.7,{"DZ\characters\headgear\data\RadarCap.rvmat"}},{0.5,{"DZ\characters\headgear\data\RadarCap_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\RadarCap_damage.rvmat"}},{0,{"DZ\characters\headgear\data\RadarCap_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\FS_4\1_ai\Gen\genefer.p3d";
			female = "\FS_4\1_ai\Gen\genefer.p3d";
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
	class FS_Genefer_NoHair: RadarCap_Black
	{
		scope = 2;
		displayName = "headband without fouls";
		descriptionShort = "Bandeau";
		model = "\FS_4\1_ai\Gen\genefer_g.p3d";
		inventorySlot = "Armband";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","mask"};
		rotationFlags = 16;
		weight = 160;
		itemSize[] = {3,2};
		absorbency = 0.6;
		heatIsolation = 0.95;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_RadarCap"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\headgear\data\RadarCap.rvmat"}},{0.7,{"DZ\characters\headgear\data\RadarCap.rvmat"}},{0.5,{"DZ\characters\headgear\data\RadarCap_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\RadarCap_damage.rvmat"}},{0,{"DZ\characters\headgear\data\RadarCap_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\FS_4\1_ai\Gen\geneferNH.p3d";
			female = "\FS_4\1_ai\Gen\geneferNH.p3d";
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
};
