////////////////////////////////////////////////////////////////////
//DeRap: FS_3_W\m14_veteran\config.bin
//Produced from mikero's Dos Tools Dll version 7.96
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 18 15:33:06 2021 : 'file' last modified on Fri Nov 27 23:18:08 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_SVD
	{
		units[] = {"SVD"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class SVD;
	class OpticsInfoRifle;
	class FS_M14Veteran_Base: SVD
	{
		scope = 0;
		weight = 2700;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		ironsightsExcludingOptics[] = {"GrozaOptic","KobraOptic"};
		WeaponLength = 0.78986;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"FS_Mag_m14_20Rnd"};
		magazineSwitchTime = 0.25;
		ejectType = 1;
		recoilModifier[] = {0.9,0.9,0.9};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\svd\svd_reload",1,1,30};
		reloadAction = "ReloadSVD";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\svd\svd_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\svd\svd_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\svd\svd_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.4;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_akm_011";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "Nabojnicestart";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint = "Nabojnicestart";
					positionOffset[] = {0.12,-0.02,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint = "Nabojnicestart";
					positionOffset[] = {0.21,-0.02,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eye";
			cameraDir = "eye";
			useModelOptics = 1;
			modelOptics = "\DZ\weapons\attachments\optics\opticview_longrange.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/12";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/12"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.43,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0.3;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
	};
	class FS_M14Veteran: FS_M14Veteran_Base
	{
		scope = 2;
		displayName = "M14-Veteran";
		descriptionShort = "Классика всегда в моде.";
		model = "\FS_3_W\m14_veteran\m14_veteran.p3d";
		attachments[] = {""};
		itemSize[] = {8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5250;
					healthLevels[] = {{1,{"DZ\weapons\firearms\svd\data\SVD.rvmat"}},{0.7,{"DZ\weapons\firearms\svd\data\SVD.rvmat"}},{0.5,{"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"}},{0,{"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"}}};
				};
			};
		};
	};
	class M14_clear_Base: SVD
	{
		scope = 0;
		weight = 3700;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		ironsightsExcludingOptics[] = {"GrozaOptic","KobraOptic"};
		WeaponLength = 1.18986;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"FS_Mag_m14_20Rnd"};
		magazineSwitchTime = 0.25;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.3,1.3,1.3};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\svd\svd_reload",1,1,30};
		reloadAction = "ReloadSVD";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\svd\svd_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\svd\svd_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\svd\svd_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.125;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
				};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_m4a1_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star1";
					overridePoint = "StarFlash";
					ignoreIfSuppressed = 1;
				};
				class GasPistonBurstR
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionVector[] = {180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					overrideDirectionVector[] = {180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "Nabojnicestart";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint = "Nabojnicestart";
					positionOffset[] = {0.12,-0.02,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint = "Nabojnicestart";
					positionOffset[] = {0.21,-0.02,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
	};
	class FS_M14_Ranger: M14_clear_Base
	{
		scope = 2;
		displayName = "M14 Ranger";
		descriptionShort = "Nato Optic, 308win ";
		model = "\FS_3_W\m14_veteran\m14_clear.p3d";
		attachments[] = {"weaponOptics"};
		itemSize[] = {7,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5250;
					healthLevels[] = {{1,{"DZ\weapons\firearms\svd\data\SVD.rvmat"}},{0.7,{"DZ\weapons\firearms\svd\data\SVD.rvmat"}},{0.5,{"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"}},{0,{"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"}}};
				};
			};
		};
	};
	class M14_sup_Base: SVD
	{
		scope = 0;
		weight = 3700;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		ironsightsExcludingOptics[] = {"GrozaOptic","KobraOptic"};
		WeaponLength = 1.18986;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"FS_Mag_m14_20Rnd"};
		magazineSwitchTime = 0.25;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.3,1.3,1.3};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\svd\svd_reload",1,1,30};
		reloadAction = "ReloadSVD";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\svd\svd_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\svd\svd_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\svd\svd_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.125;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
				};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_m4a1_011";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star1";
					overridePoint = "StarFlash";
					ignoreIfSuppressed = 1;
				};
				class GasPistonBurstR
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionVector[] = {180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					overrideDirectionVector[] = {180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "Nabojnicestart";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint = "Nabojnicestart";
					positionOffset[] = {0.12,-0.02,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint = "Nabojnicestart";
					positionOffset[] = {0.21,-0.02,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
		class NoiseShoot
		{
			strength = 5;
			type = "shot";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
	};
	class FS_M14_RangerSup: M14_sup_Base
	{
		scope = 2;
		displayName = "M14 Ranger";
		descriptionShort = "Nato Optic, 308win + sup";
		model = "\FS_3_W\m14_veteran\m14_sup.p3d";
		attachments[] = {"weaponOptics"};
		itemSize[] = {8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5250;
					healthLevels[] = {{1,{"DZ\weapons\firearms\svd\data\SVD.rvmat"}},{0.7,{"DZ\weapons\firearms\svd\data\SVD.rvmat"}},{0.5,{"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"}},{0,{"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"}}};
				};
			};
		};
	};
};
