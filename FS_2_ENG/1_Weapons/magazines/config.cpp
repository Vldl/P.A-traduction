////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_Weapons\magazines\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:12 2020 : 'file' last modified on Mon Jun 01 22:47:53 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Magazines
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMagazines
{
	class Mag_Saiga_Drum20Rnd;
	class FS_Mag_AA12_Drum32Rnd: Mag_Saiga_Drum20Rnd
	{
		scope = 2;
		displayName = "Tambour AA12";
		descriptionShort = "Tambour AA12 12Ga 32 coups, FIDOv STALKER (FS)";
		model = "\FS_2\1_Weapons\AA12\mag\mag.p3d";
		rotationFlags = 12;
		weight = 360;
		itemSize[] = {3,3};
		count = 32;
		ammo = "Bullet_12GaugePellets";
		ammoItems[] = {"Ammo_12gaPellets","Ammo_12gaSlug"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\magazine\data\saiga_drum_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\magazine\data\saiga_drum.rvmat"}},{0.7,{"DZ\weapons\attachments\magazine\data\saiga_drum.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\saiga_drum_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\saiga_drum_damage.rvmat"}},{0,{"DZ\weapons\attachments\magazine\data\saiga_drum_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
