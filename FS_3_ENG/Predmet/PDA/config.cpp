////////////////////////////////////////////////////////////////////
//DeRap: FS_3\Predmet\PDA\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:17 2020 : 'file' last modified on Tue Jun 02 01:39:44 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Radio
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class PersonalRadio;
	class FS_KPK_FV: PersonalRadio
	{
		scope = 2;
		displayName = "PDA";
		descriptionShort = "Ordinateur personnel de poche. Dans les conditions de la Zone, il est utilisé comme appareil de navigation, ordinateur portable, appareil de communication et enregistreur vocal. Chaque PDA a un code unique, sachant lequel, vous pouvez suivre l'appareil.";
		lootTag[] = {"Police","Hunting","Camping","Military_east"};
		model = "\FS_3\Predmet\PDA\PDA_FIDOv.p3d";
		weight = 1400;
		absorbency = 0.5;
		itemSize[] = {1,1};
		inventorySlot[] = {"WalkieTalkie"};
		rotationFlags = 1;
		oldpower = 0;
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
		simulation = "itemTransmitter";
		inputRange[] = {2,5,10};
		range = 50000;
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.001;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\gear\radio\data\WalkieTalkie.rvmat"}},{0.7,{"DZ\gear\radio\data\WalkieTalkie.rvmat"}},{0.5,{"DZ\gear\radio\data\WalkieTalkie_damage.rvmat"}},{0.3,{"DZ\gear\radio\data\WalkieTalkie_damage.rvmat"}},{0,{"DZ\gear\radio\data\WalkieTalkie_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class turnOnRadio
				{
					soundSet = "turnOnRadio_SoundSet";
					id = 1006;
				};
				class turnOffRadio
				{
					soundSet = "turnOffRadioNoise_SoundSet";
					id = 1007;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyWalkieTalkie: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"WalkieTalkie"};
		model = "\dz\gear\radio\WalkieTalkie.p3d";
	};
};
