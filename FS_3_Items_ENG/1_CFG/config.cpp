////////////////////////////////////////////////////////////////////
//DeRap: FS_3_Items\1_CFG\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:36 2020 : 'file' last modified on Tue Jun 02 01:37:44 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Medical
	{
		units[] = {"Medical_DisinfectantSpray","Medical_Antibiotics","Medical_Bandage","Medical_Bloodbag","Medical_Defibrillator","Medical_Epinephrine","Medical_Morphine","Medical_Painkiller"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class VitaminBottle;
	class BakedBeansCan_Opened;
	class Edible_Base;
	class PainkillerTablets;
	class FirstAidKit;
	class BandageDressing;
	class Rice;
	class WaterBottle;
	class SodaCan_Pipsi;
	class Vodka;
	class TetracyclineAntibiotics;
	class PowderedMilk;
	class AmmoBox_792x57_25Rnd;
	class FS_ITEM_Antibiotics: PainkillerTablets
	{
		scope = 2;
		displayName = "Antibiotics";
		descriptionShort = "Antibiotics";
		model = "FS_3_Items\antibiotics\antibiotics.p3d";
		rotationFlags = 17;
		itemSize[] = {1,2};
		varQuantityInit = 12;
		varQuantityMin = 0;
		varQuantityMax = 12;
		varQuantityDestroyOnMin = 1;
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		absorbency = 0.7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1,{"DZ\gear\medical\data\painkiller2.rvmat"}},{0.7,{"DZ\gear\medical\data\painkiller2.rvmat"}},{0.5,{"DZ\gear\medical\data\painkiller2_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\painkiller2_damage.rvmat"}},{0,{"DZ\gear\medical\data\painkiller2_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet = "Tablets_open_SoundSet";
					id = 201;
				};
				class Tablets_catch
				{
					soundSet = "Tablets_catch_SoundSet";
					id = 202;
				};
				class Tablets_close
				{
					soundSet = "Tablets_close_SoundSet";
					id = 203;
				};
				class pickup
				{
					soundSet = "purificationtablets_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "purificationtablets_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ITEM_ANTIDOT: VitaminBottle
	{
		scope = 2;
		displayName = "Antidote Acizol";
		descriptionShort = "Rem??de pour empoisonnement aux substances chimiques dangereuses (AHOV). Favorise l'acc??l??ration de l'??limination des poisons du corps, r??duit la gravit?? de l'intoxication en cas d'empoisonnement.";
		model = "\FS_3_Items\antidot\antidot.p3d";
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\gear\medical\data\vitamin_bottle.rvmat"}},{0.7,{"DZ\gear\medical\data\vitamin_bottle.rvmat"}},{0.5,{"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"}},{0,{"DZ\gear\medical\data\vitamin_bottle_destruct.rvmat"}}};
				};
			};
		};
		class Medicine
		{
			prevention = 0.75;
			treatment = 0.5;
			diseaseExit = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet = "VitaminBottle_open_SoundSet";
					id = 201;
				};
				class VitaminBottle_shake
				{
					soundSet = "VitaminBottle_shake_SoundSet";
					id = 202;
				};
				class VitaminBottle_close
				{
					soundSet = "VitaminBottle_close_SoundSet";
					id = 203;
				};
				class pickUpItem
				{
					soundSet = "vitaminbottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_Aptecka_BIG: FirstAidKit
	{
		scope = 2;
		displayName = "Grande trousse de premiers soins";
		descriptionShort = "Beaucoup de poches diff??rentes pour transporter plus d'articles";
		model = "\FS_3_Items\aptecka_hight\Aptecka_hight.p3d";
		inventorySlot = "Belt_Back";
		rotationFlags = 17;
		weight = 140;
		itemSize[] = {3,3};
		itemsCargoSize[] = {3,6};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.7,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.5,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0,{"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_Aptecka_LOW: FirstAidKit
	{
		scope = 2;
		displayName = "Trousse de premiers soins moyenne";
		descriptionShort = "Trousse de premiers secours compacte et pratique.";
		model = "\FS_3_Items\dev_aptechka_low\Aptecka_low.p3d";
		rotationFlags = 17;
		weight = 140;
		itemSize[] = {3,3};
		itemsCargoSize[] = {3,5};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.7,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.5,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0,{"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_Aptecka_SMALL: FirstAidKit
	{
		scope = 2;
		displayName = "Petite trousse de premiers secours";
		descriptionShort = "Petite trousse de premiers secours.";
		model = "\FS_3_Items\dev_aptechka_mid\aptechka_mid.p3d";
		rotationFlags = 17;
		weight = 140;
		itemSize[] = {3,3};
		itemsCargoSize[] = {3,4};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.7,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.5,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0,{"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_BANDAGE: BandageDressing
	{
		scope = 2;
		displayName = "Sterile bandage";
		descriptionShort = "Bandage aseptique pour arr??ter le saignement et emp??cher l'infection de p??n??trer dans la plaie. Pour un saignement normal, permet de panser la plaie. Inefficace pour les saignements art??riels";
		model = "\FS_3_Items\bandage\bandage.p3d";
		inventorySlot[] = {"MedicalBandage"};
		isMeleeWeapon = 1;
		varQuantityInit = 4;
		varQuantityMin = 0;
		varQuantityMax = 4;
		quantityBar = 1;
		varQuantityDestroyOnMin = 1;
		rotationFlags = 17;
		weight = 115;
		absorbency = 0.8;
		itemSize[] = {1,2};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\gear\medical\data\bandage.rvmat"}},{0.7,{"DZ\gear\medical\data\bandage.rvmat"}},{0.5,{"DZ\gear\medical\data\bandage_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\bandage_damage.rvmat"}},{0,{"DZ\gear\medical\data\bandage_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class FS_ITEM_FCP: BandageDressing
	{
		scope = 2;
		displayName = "Israeli bandage";
		descriptionShort = "Une fois en 1993, un conscrit de l'arm??e isra??lienne, Bernard Ber-Naton, voyant le supplice des soldats essayant d'arr??ter de saigner avec des moyens d??pass??s et des tentatives ridicules de faire pression sur la blessure avec des pierres, des crosses de pistolet et des chargeurs de fusil, a d??cid?? de mettre un en finir avec ??a";
		model = "\FS_3_Items\fcp\fcp.p3d";
		inventorySlot[] = {"MedicalBandage"};
		isMeleeWeapon = 1;
		itemSize[] = {2,2};
		varQuantityInit = 9;
		varQuantityMin = 0;
		varQuantityMax = 9;
		quantityBar = 1;
		varQuantityDestroyOnMin = 1;
		rotationFlags = 17;
		weight = 115;
		absorbency = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\gear\medical\data\bandage.rvmat"}},{0.7,{"DZ\gear\medical\data\bandage.rvmat"}},{0.5,{"DZ\gear\medical\data\bandage_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\bandage_damage.rvmat"}},{0,{"DZ\gear\medical\data\bandage_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class FS_ITEM_IRP_B: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "IRP-B";
		itemSize[] = {2,4};
		descriptionShort = "La ration alimentaire individuelle IRP-B est destin??e ?? l'organisation de repas en situation de combat pour les militaires individuels et le personnel des petites unit??s lorsque, selon les conditions de leurs t??ches, il est impossible ou peu pratique d'organiser des repas ?? partir de cuisines militaires stationnaires ou de campagne, civiles ??tablissements de restauration ou ?? titre on??reux aupr??s de particuliers.";
		model = "\FS_3_Items\irp_b\irp_b.p3d";
		weight = 540;
		varQuantityInit = 715;
		varQuantityMin = 0;
		varQuantityMax = 715;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\deez_beans_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 223;
			water = 77;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_ITEM_MRE: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "MRE";
		descriptionShort = "Repas pr??t-??-manger ??? un r??gime individuel, adopt?? pour la premi??re fois par les forces arm??es am??ricaines en 1975. C'est actuellement la ration individuelle la plus utilis??e par les forces arm??es am??ricaines. Le MRE est destin?? ?? ??tre utilis?? dans les 21 jours suivant le d??ploiement dans des conditions de combat. Les rations sont conditionn??es dans un sac plastique ??pais et sableux. La ration est con??ue pour un repas.";
		model = "\FS_3_Items\MRE\MRE.p3d";
		weight = 940;
		itemSize[] = {4,4};
		varQuantityInit = 1315;
		varQuantityMin = 0;
		varQuantityMax = 1315;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\deez_beans_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 223;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_ITEM_IRP_UKR_OLD: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "ZNSP";
		descriptionShort = "R??gime individuel ukrainien ?? l'ancienne. Il signifie Zagalnoviy Nabir des produits secs";
		model = "\FS_3_Items\irp_ukr_old\irp_ukr_old.p3d";
		weight = 940;
		itemSize[] = {4,4};
		varQuantityInit = 815;
		varQuantityMin = 0;
		varQuantityMax = 815;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\deez_beans_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 223;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_ITEM_IRP_UKR: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "DPNP-P-B";
		descriptionShort = "Doboviy Poloviy Nabir Produktiv - Posilieniy est la derni??re version du r??gime individuel ukrainien, d??velopp?? par des volontaires avec des produits pour pr??s de deux kilogrammes et demi. Les inconv??nients des anciennes rations s??ches ont ??t?? ??limin??s, un appareil de chauffage sans flamme a ??t?? ajout??. Arm?? pour le moment.";
		model = "\FS_3_Items\irp_ukr\irp_uk.p3d";
		weight = 940;
		itemSize[] = {4,4};
		varQuantityInit = 815;
		varQuantityMin = 0;
		varQuantityMax = 815;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\deez_beans_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 223;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_ITEM_AV3: BandageDressing
	{
		scope = 2;
		displayName = "IPP-AV-3";
		descriptionShort = "IPP-AV-3";
		model = "\FS_3_Items\ipp_av3\ipp11.p3d";
		inventorySlot[] = {"MedicalBandage"};
		isMeleeWeapon = 1;
		varQuantityInit = 9;
		varQuantityMin = 0;
		varQuantityMax = 9;
		itemSize[] = {3,3};
		quantityBar = 1;
		varQuantityDestroyOnMin = 1;
		rotationFlags = 17;
		weight = 115;
		absorbency = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\gear\medical\data\bandage.rvmat"}},{0.7,{"DZ\gear\medical\data\bandage.rvmat"}},{0.5,{"DZ\gear\medical\data\bandage_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\bandage_damage.rvmat"}},{0,{"DZ\gear\medical\data\bandage_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class FS_ITEM_CHEESE: Rice
	{
		scope = 2;
		displayName = "DU FROMAGE";
		descriptionShort = "Fromage ?? p??te dure. Pas un mauvais substitut de saucisse, con??u pour colorer l??g??rement le r??gime du Stalker. Habituellement, il est tra??n?? par les nouveaux arrivants du continent.";
		model = "\FS_3_Items\cheese\cheese.p3d";
		weight = 2;
		itemSize[] = {1,2};
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
		absorbency = 0.9;
		rotationFlags = 63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\rice.rvmat"}},{0.7,{"DZ\gear\food\data\rice.rvmat"}},{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},{0.3,{"DZ\gear\food\data\rice_damage.rvmat"}},{0,{"DZ\gear\food\data\rice_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2.5;
			energy = 265;
			water = 81.5;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_ITEM_VODKA: Vodka
	{
		scope = 2;
		displayName = "Hanka";
		descriptionShort = "Vodka forte et sauvage. Lorsqu'il p??n??tre dans l'organisme, les capillaires du cerveau sont obstru??s par des ??rythrocytes d??form??s ?? cause de l'??thanol, provoquant une privation d'oxyg??ne des tissus, ainsi qu'une d??shydratation, ce qui provoque une sensation d'euphorie et une diminution du stress.";
		model = "\FS_3_Items\dev_vodka\vodka.p3d";
		weight = 450;
		itemSize[] = {1,3};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
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
	class FS_ITEM_Kolbas: Rice
	{
		scope = 2;
		displayName = "Saucisse";
		descriptionShort = "Souvent, faute de mieux, cette saucisse - un m??lange de poulet et de substitut de soja - devient le petit-d??jeuner, le d??jeuner et le d??ner du Stalker. En raison de la grande quantit?? de conservateurs, il ne se d??t??riore pas longtemps.";
		model = "\FS_3_Items\dev_kolbasa\kolbasa.p3d";
		weight = 233;
		itemSize[] = {2,2};
		varQuantityInit = 800;
		varQuantityMin = 0;
		varQuantityMax = 800;
		absorbency = 0.9;
		rotationFlags = 63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\rice.rvmat"}},{0.7,{"DZ\gear\food\data\rice.rvmat"}},{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},{0.3,{"DZ\gear\food\data\rice_damage.rvmat"}},{0,{"DZ\gear\food\data\rice_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2.5;
			energy = 565;
			water = 81.5;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_ITEM_COLA: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "Cola";
		descriptionShort = "Soda qui ajoute de l'??nergie pendant une courte p??riode. Il est tr??s demand?? par les d??butants aux cheveux jaunes, que certains commer??ants utilisent habilement.";
		model = "FS_3_Items\cola\cola.p3d";
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 530;
		varQuantityMin = 0;
		varQuantityMax = 530;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.7,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.5,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 63.5;
			water = 119;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class FS_ITEM_NonStop: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "Energy drink NonStop";
		descriptionShort = "Il est souvent utilis?? par les Stalkers lors de randonn??es de plusieurs jours lorsqu'il n'y a aucun moyen de s'arr??ter et de se reposer. Contient des glucides facilement digestibles, ainsi que des m??dicaments qui provoquent la lib??ration d'adr??naline dans le sang.";
		model = "FS_3_Items\dev_drink_stalker\nonstop.p3d";
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 530;
		varQuantityMin = 0;
		varQuantityMax = 530;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.7,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.5,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 33.5;
			water = 119;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class FS_ITEM_PsyBlocade: TetracyclineAntibiotics
	{
		scope = 2;
		displayName = "Psi blockade";
		descriptionShort = "Un stup??fiant qui bloque les impulsions nerveuses de type avalanche. A ??t?? ??lev?? par des scientifiques de l'Institut de recherche de Kiev de ChEZ.";
		model = "\FS_3_Items\drug_psy_blockade\psy_blocade.p3d";
		rotationFlags = 17;
		varQuantityInit = 12;
		varQuantityMin = 0;
		varQuantityMax = 12;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		absorbency = 0.7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1,{"DZ\gear\medical\data\tetracycline.rvmat"}},{0.7,{"DZ\gear\medical\data\tetracycline.rvmat"}},{0.5,{"DZ\gear\medical\data\tetracycline_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\tetracycline_damage.rvmat"}},{0,{"DZ\gear\medical\data\tetracycline_destruct.rvmat"}}};
				};
			};
		};
		class Medicine
		{
			prevention = 0;
			treatment = 0.9;
			diseaseExit = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet = "Tablets_open_SoundSet";
					id = 201;
				};
				class Tablets_catch
				{
					soundSet = "Tablets_catch_SoundSet";
					id = 202;
				};
				class Tablets_close
				{
					soundSet = "Tablets_close_SoundSet";
					id = 203;
				};
				class pickup
				{
					soundSet = "purificationtablets_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "purificationtablets_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ITEM_Booster: WaterBottle
	{
		scope = 2;
		displayName = "Hercules";
		descriptionShort = "Le composant principal est un st??ro??de cr???? artificiellement, chimiquement similaire ?? la testost??rone. Il est utilis?? par les stalkers lors de longues transitions pour augmenter le seuil de fatigue musculaire.";
		model = "\FS_3_Items\drug_booster\buster.p3d";
		weight = 25;
		itemSize[] = {1,3};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"}},{0.7,{"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"}},{0.5,{"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"}},{0,{"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
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
				class pickup
				{
					soundSet = "WaterBottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_MolokoSgus: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "Lait condens??";
		descriptionShort = "Lait entier condens??, tr??s savoureux et sucr?? ";
		model = "FS_3_Items\condensed_milk\sgus_moloko.p3d";
		itemSize[] = {2,2};
		weight = 40;
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\deez_beans_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 223;
			water = -1;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_ITEM_HotCan: BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "Nourriture militaire en conserve";
		descriptionShort = "Nourriture militaire en conserve de l'alimentation";
		model = "FS_3_Items\dev_conserv\dev_conserv.p3d";
		itemSize[] = {2,2};
		weight = 40;
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\deez_beans_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 223;
			water = 77;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class FS_ITEM_Antirad: VitaminBottle
	{
		scope = 2;
		displayName = "Antirad MEXAMINE";
		descriptionShort = "M??dicament radioprotecteur Mexamin. Dans des conditions exp??rimentales, il r??duit la mortalit?? des animaux expos??s aux rayons X ou gamma, ainsi qu'aux protons de haute ??nergie. Lorsqu'il est appliqu??, il provoque un r??tr??cissement des vaisseaux sanguins p??riph??riques et une hypoxie (manque d'oxyg??ne), en particulier dans la moelle osseuse et la rate, ce qui dans ce cas est un moyen de pr??venir et de traiter le mal des rayons. R??pandu dans toute la Zone.";
		model = "FS_3_Items\dev_antirad\dev_antirad.p3d";
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\gear\medical\data\vitamin_bottle.rvmat"}},{0.7,{"DZ\gear\medical\data\vitamin_bottle.rvmat"}},{0.5,{"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"}},{0,{"DZ\gear\medical\data\vitamin_bottle_destruct.rvmat"}}};
				};
			};
		};
		class Medicine
		{
			prevention = 0.75;
			treatment = 0.5;
			diseaseExit = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet = "VitaminBottle_open_SoundSet";
					id = 201;
				};
				class VitaminBottle_shake
				{
					soundSet = "VitaminBottle_shake_SoundSet";
					id = 202;
				};
				class VitaminBottle_close
				{
					soundSet = "VitaminBottle_close_SoundSet";
					id = 203;
				};
				class pickUpItem
				{
					soundSet = "vitaminbottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_EnergyShokolat: PowderedMilk
	{
		scope = 2;
		displayName = "Energy bar";
		descriptionShort = "Energy bar";
		model = "\FS_3_Items\hooah\shokolad.p3d";
		rotationFlags = 17;
		weight = 0;
		itemSize[] = {1,2};
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		absorbency = 0.9;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\powdered_milk.rvmat"}},{0.7,{"DZ\gear\food\data\powdered_milk.rvmat"}},{0.5,{"DZ\gear\food\data\powdered_milk_damage.rvmat"}},{0.3,{"DZ\gear\food\data\powdered_milk_damage.rvmat"}},{0,{"DZ\gear\food\data\powdered_milk_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 4.5;
			energy = 796;
			water = 5.5;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class FS_ITEM_WATERbootle: WaterBottle
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WaterBottle0";
		descriptionShort = "$STR_CfgVehicles_WaterBottle1";
		model = "FS_3_Items\water\water.p3d";
		weight = 25;
		itemSize[] = {1,3};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"}},{0.7,{"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"}},{0.5,{"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"}},{0,{"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
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
				class pickup
				{
					soundSet = "WaterBottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class FS_ITEM_SNICKERS: PowderedMilk
	{
		scope = 2;
		displayName = "Snickers";
		descriptionShort = "Le bar Snickers a ??t?? cr???? en 1923 aux ??tats-Unis par le chef p??tissier Frank Mars. La production de masse n'a commenc?? qu'en 1930. En novembre 1929, une usine de chocolat a ??t?? construite ?? Chicago, qui a ??t?? la premi??re ?? fabriquer des barres de chocolat Snickers.";
		model = "FS_3_Items\snickers\snikers.p3d";
		rotationFlags = 17;
		weight = 0;
		itemSize[] = {1,2};
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		absorbency = 0.9;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\powdered_milk.rvmat"}},{0.7,{"DZ\gear\food\data\powdered_milk.rvmat"}},{0.5,{"DZ\gear\food\data\powdered_milk_damage.rvmat"}},{0.3,{"DZ\gear\food\data\powdered_milk_damage.rvmat"}},{0,{"DZ\gear\food\data\powdered_milk_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 4.5;
			energy = 296;
			water = 5.5;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
