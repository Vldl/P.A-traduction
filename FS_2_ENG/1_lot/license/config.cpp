////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_lot\license\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:03 2020 : 'file' last modified on Mon Jun 01 22:47:50 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Gear_Food
	{
		units[] = {"Food_CanBakedBeans","Food_CanFrankBeans","Food_CanPasta","Food_CanSardines","Food_BoxCerealCrunchin"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Pumpkin;
	class FS_License_Base: Inventory_Base
	{
		scope = 0;
		displayName = "FS MOD LITSUKH. ";
		descriptionShort = "Feeds mod not otherwise";
		model = "\FS_2\1_lot\License\License.p3d";
		weight = 100;
		itemSize[] = {1,1};
		absorbency = 0.9;
		rotationFlags = 63;
		hiddenSelections[] = {"vkcomfidovpubllc"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\rice.rvmat"}},{0.7,{}},{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},{0.3,{}},{0,{"DZ\gear\food\data\rice_destruct.rvmat"}}};
				};
			};
		};
	};
	class FS_License_L1: FS_License_Base
	{
		scope = 2;
		displayName = "Permis d'armes NIVEAU 1";
		descriptionShort = "Permis d'armes, stockage et utilisation autorisés. Catégorie - Pistolets";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"FS_2\1_lot\license\data\lvl1.paa"};
	};
	class FS_License_L2: FS_License_Base
	{
		scope = 2;
		displayName = "Permis d'armes NIVEAU 2";
		descriptionShort = "Permis d'armes, stockage et utilisation autorisés. Catégorie - Pistolets - Fusils de chasse";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"FS_2\1_lot\license\data\lvl2.paa"};
	};
	class FS_License_L3: FS_License_Base
	{
		scope = 2;
		displayName = "Permis d'armes NIVEAU 3";
		descriptionShort = "Permis d'armes, stockage et utilisation autorisés. Catégorie - Pistolets - Fusils de chasse - PP";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"FS_2\1_lot\license\data\lvl3.paa"};
	};
	class FS_License_L4: FS_License_Base
	{
		scope = 2;
		displayName = "Permis d'armes NIVEAU 4";
		descriptionShort = "Permis d'armes, stockage et utilisation autorisés. Catégorie - Pistolets - Fusils de chasse - PP - Fusils d'assaut";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"FS_2\1_lot\license\data\lvl4.paa"};
	};
	class FS_License_L5: FS_License_Base
	{
		scope = 2;
		displayName = "Permis d'armes NIVEAU 5";
		descriptionShort = "Permis d'armes, stockage et utilisation autorisés. Catégorie - Pistolets - Fusils de chasse - PP - Fusils d'assaut - Fusils de précision";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"FS_2\1_lot\license\data\lvl5.paa"};
	};
	class FS_License_L6: FS_License_Base
	{
		scope = 2;
		displayName = "Permis d'armes NIVEAU 6 - EXPERT";
		descriptionShort = "Permis d'armes, stockage et utilisation autorisés. Catégorie - Pistolets - Fusils de chasse - PP - Fusils d'assaut - Fusils de précision - Mitrailleuses lourdes";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"FS_2\1_lot\license\data\lvl6.paa"};
	};
};
