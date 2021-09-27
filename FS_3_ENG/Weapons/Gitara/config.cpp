////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Weapons\Gitara\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:19 2020 : 'file' last modified on Tue Jun 02 01:39:45 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Firearms_IZH18
	{
		units[] = {"ShotgunIzh43","ShotgunIzh43_Sawedoff"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Izh18;
	class FS_GitarSound_Base: Izh18
	{
		scope = 0;
		weight = 1500;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,10,170,4,10};
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		DisplayMagazine = 0;
		WeaponLength = 0.981055;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaPellets_tracer","Ammo_12gaNeedles"};
		magazines[] = {};
		ejectType = 3;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\izh18\izh18_reload",0.8,1,20};
		reloadSound[] = {"",0.0562341,1,20};
		reloadAction = "ReloadIZH18";
		shotAction = "";
		hiddenSelections[] = {"vkcomfidovpublic"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_1",1,1,800};
			soundBegin[] = {"begin1",0.56,"begin2",0.5};
			reloadTime = 1;
			recoil = "recoil_izh18";
			recoilProne = "recoil_izh18_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overridePoint = "Usti hlavne";
				};
				class ChamberFlash
				{
					overridePoint = "dust_point";
					overrideParticle = "weapon_dust_izh18_01";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 200;
			distanceZoomMax = 200;
		};
	};
	class FS_GitarSound_Stalker: FS_GitarSound_Base
	{
		scope = 2;
		displayName = "Old Stalker Guitar";
		descriptionShort = "Play the strings until your fingers are dry .--------- Charge and Shoot --------------- I don't recommend playing in one spot very often. The sound will be dubbed.";
		model = "\FS_3\Weapons\Gitara\gitara.p3d";
		attachments[] = {};
		itemSize[] = {6,3};
		hiddenSelectionsTextures[] = {"FS_3_Data\girara\Gitar_stalker_co.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\girara\gitar_mat.rvmat"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"FS_GitarStalker_Soundset"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1.77828,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1.77828,1,1000};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1.77828,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 1;
			dispersion = 0.08;
			recoil = "recoil_izh18sawedoff";
			recoilProne = "recoil_izh18sawedoff";
		};
	};
	class FS_GitarSound_DOLG: FS_GitarSound_Base
	{
		scope = 2;
		displayName = "Dolgovets Old Guitar";
		descriptionShort = "Play the strings until your fingers are dry .--------- Charge and Shoot --------------- I don't recommend playing in one spot very often. The sound will be dubbed.";
		model = "\FS_3\Weapons\Gitara\gitara.p3d";
		attachments[] = {};
		itemSize[] = {6,3};
		hiddenSelectionsTextures[] = {"FS_3_Data\girara\Gitar_Dolg_co.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\girara\gitar_mat.rvmat"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"FS_GitarDolg_Soundset"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1.77828,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1.77828,1,1000};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1.77828,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 1;
			dispersion = 0.08;
			recoil = "recoil_izh18sawedoff";
			recoilProne = "recoil_izh18sawedoff";
		};
	};
	class FS_GitarSound_Bandit: FS_GitarSound_Base
	{
		scope = 2;
		displayName = "Old Bandit Guitar";
		descriptionShort = "Play on the strings until your fingers are dry. The sound will be dubbed. ";
		model = "\FS_3\Weapons\Gitara\gitara.p3d";
		attachments[] = {};
		itemSize[] = {6,3};
		hiddenSelectionsTextures[] = {"FS_3_Data\girara\Gitar_Bandit_co.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\girara\gitar_mat.rvmat"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"FS_GitarBandit_Soundset"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1.77828,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1.77828,1,1000};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1.77828,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 1;
			dispersion = 0.08;
			recoil = "recoil_izh18sawedoff";
			recoilProne = "recoil_izh18sawedoff";
		};
	};
	class FS_TestSo: FS_GitarSound_Base
	{
		scope = 2;
		displayName = "Test";
		descriptionShort = "Play the strings until your fingers are dry .--------- Charge and Shoot --------------- I don't recommend playing in one spot very often. The sound will be dubbed.";
		model = "\FS_3\Weapons\Gitara\gitara.p3d";
		attachments[] = {};
		itemSize[] = {6,3};
		hiddenSelectionsTextures[] = {"FS_3_Data\girara\Gitar_Dolg_co.paa"};
		hiddenSelectionsMaterials[] = {"FS_3_Data\girara\gitar_mat.rvmat"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"FS_SpecialFidov_Soundset"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1.77828,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1.77828,1,1000};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1.77828,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 1;
			dispersion = 0.08;
			recoil = "recoil_izh18sawedoff";
			recoilProne = "recoil_izh18sawedoff";
		};
	};
};
