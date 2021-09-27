////////////////////////////////////////////////////////////////////
//DeRap: FS_3_W\1_Att\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:40 2020 : 'file' last modified on Tue Jun 02 01:09:47 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Weapons_Supports
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class AK_WoodBttstck;
	class AK_WoodHndgrd;
	class M4_OEBttstck_Green;
	class FS_HK_416_bttstck: M4_OEBttstck_Green
	{
		scope = 2;
		displayName = "HK416 Buttstock";
		descriptionShort = "FP4-FS MOD";
		model = "\FS_3_W\HK416\but\but.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockM4"};
		weight = 354;
		itemSize[] = {2,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camoGovnoNax"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\m4_stock.rvmat"}},{0.7,{"DZ\weapons\attachments\data\m4_stock.rvmat"}},{0.5,{"DZ\weapons\attachments\data\m4_stock_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\m4_stock_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\m4_stock_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
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
	class FS_AN94_WoodBttstck: AK_WoodBttstck
	{
		scope = 2;
		displayName = "AN 94 Butt";
		descriptionShort = "AN 94 Butt";
		model = "\FS_3_W\AN94\but\but.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockAK"};
		weight = 530;
		itemSize[] = {3,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\akm_wood.rvmat"}},{0.7,{"DZ\weapons\attachments\data\akm_wood.rvmat"}},{0.5,{"DZ\weapons\attachments\data\akm_wood_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\akm_wood_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\akm_wood_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
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
};
