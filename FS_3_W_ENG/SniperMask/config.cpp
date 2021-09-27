////////////////////////////////////////////////////////////////////
//DeRap: FS_3_W\SniperMask\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:42 2020 : 'file' last modified on Tue Jun 02 01:09:48 2020
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
class DefaultAction;
class CfgVehicles
{
	class BandanaMask_RedPattern;
	class FS_FACE_Mask_ColorBase: BandanaMask_RedPattern
	{
		displayName = "Mask";
		descriptionShort = "A mask that will hide your facial features.";
		model = "\FS_3_W\SniperMask\snipe_mask_g.p3d";
		inventorySlot = "Mask";
		itemInfo[] = {"Clothing","Mask"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		rotationFlags = 16;
		weight = 420;
		itemSize[] = {1,1};
		absorbency = 0.001;
		heatIsolation = 1.04;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\headgear\data\BeanieHat.rvmat","DZ\characters\headgear\data\BeanieHat_damage.rvmat","DZ\characters\headgear\data\BeanieHat_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\FS_3_W\SniperMask\snipe_mask.p3d";
			female = "\FS_3_W\SniperMask\snipe_mask_f.p3d";
		};
		class Protection
		{
			biological = 1;
		};
	};
	class FS_FACE_Mask_black: FS_FACE_Mask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_3_W\SniperMask\data\snipe_mask.paa","FS_3_W\SniperMask\data\snipe_mask.paa","FS_3_W\SniperMask\data\snipe_mask.paa"};
	};
	class FS_FACE_Mask_blood: FS_FACE_Mask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_3_W\SniperMask\data\SNIPE_MASK_blood.paa","FS_3_W\SniperMask\data\SNIPE_MASK_blood.paa","FS_3_W\SniperMask\data\SNIPE_MASK_blood.paa"};
	};
	class FS_FACE_Mask_Green: FS_FACE_Mask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_3_W\SniperMask\data\SNIPE_MASK_green.paa","FS_3_W\SniperMask\data\SNIPE_MASK_green.paa","FS_3_W\SniperMask\data\SNIPE_MASK_green.paa"};
	};
	class FS_FACE_Mask_Jeans: FS_FACE_Mask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_3_W\SniperMask\data\SNIPE_MASK_jens.paa","FS_3_W\SniperMask\data\SNIPE_MASK_jens.paa","FS_3_W\SniperMask\data\SNIPE_MASK_jens.paa"};
	};
	class FS_FACE_Mask_tan: FS_FACE_Mask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_3_W\SniperMask\data\SNIPE_MASK_tan.paa","FS_3_W\SniperMask\data\SNIPE_MASK_tan.paa","FS_3_W\SniperMask\data\SNIPE_MASK_tan.paa"};
	};
	class FS_FACE_Mask_Uzor: FS_FACE_Mask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_3_W\SniperMask\data\SNIPE_MASK_uzor.paa","FS_3_W\SniperMask\data\SNIPE_MASK_uzor.paa","FS_3_W\SniperMask\data\SNIPE_MASK_uzor.paa"};
	};
	class FS_FACE_Mask_Orange: FS_FACE_Mask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"FS_3_W\SniperMask\data\SNIPE_MASK_Orange.paa","FS_3_W\SniperMask\data\SNIPE_MASK_Orange.paa","FS_3_W\SniperMask\data\SNIPE_MASK_Orange.paa"};
	};
};
