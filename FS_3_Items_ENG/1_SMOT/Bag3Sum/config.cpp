////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_SMOT\Bag3Sum\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:26:39 2021 : 'file' last modified on Mon Dec 21 05:19:18 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Backpacks
	{
		units[] = {"BagTaloon_Blue","BagTaloon_Green","BagTaloon_Orange","BagTaloon_Violet","BagCourierImprovised","BagCourierImprovisedFur","BagImprovised","BagImprovisedFur","BagHunting","BagMountain_Blue","BagMountain_Green","BagMountain_Orange","BagMountain_Red","BagChilds_Blue","BagChilds_Green","BagChilds_Red","GhillieBushragWoodland","GhillieTopWoodland","GhillieSuitWoodland","GhillieBushragTan","GhillieTopTan","GhillieSuitTan","GhillieBushragMossy","GhillieTopMossy","GhillieSuitMossy"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class HuntingBag;
	class FS_3SumBag: HuntingBag
	{
		scope = 2;
		displayName = "Sac à dos  Attack 5";
		descriptionShort = "Made in Russia";
		model = "\FS_3_Items\1_SMOT\Bag3Sum\3sum_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie","alp_geiger_counter"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemSize[] = {6,8};
		itemsCargoSize[] = {10,9};
		weight = 1700;
		absorbency = 0.4;
		heatIsolation = 0.1;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Military";
		randomQuantity = 4;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\hunting_co.paa","\dz\characters\backpacks\data\hunting_co.paa","\dz\characters\backpacks\data\hunting_co.paa"};
		class ClothingTypes
		{
			male = "\FS_3_Items\1_SMOT\Bag3Sum\3sum_m.p3d";
			female = "\FS_3_Items\1_SMOT\Bag3Sum\3sum_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"DZ\Characters\backpacks\data\hunting.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\hunting.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\hunting_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\hunting_damage.rvmat"}},{0,{"DZ\Characters\backpacks\data\hunting_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Metal_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Metal_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
