////////////////////////////////////////////////////////////////////
//DeRap: FS_2\1_Char\StalkerNPS\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Wed Aug 12 00:04:03 2020 : 'file' last modified on Mon Jun 01 22:47:50 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Characters_Zombies
	{
		units[] = {"Hermit_NewAI"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class ZombieMaleBase;
	class FS_Saharov;
	class FS_NPC_OxranaVSS_Stalker: FS_Saharov
	{
		scope = 2;
		model = "FS_2\1_Char\StalkerNPS\NPS_VSS.p3d";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\FV_ST_PACK\Vostok\data\stalker\stalker.paa"};
	};
	class FS_NPC_OxranaVSS_Voshod: FS_NPC_OxranaVSS_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\voshod.paa"};
	};
	class FS_NPC_OxranaVSS_Dolg: FS_NPC_OxranaVSS_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\dolg\dolg.paa"};
	};
	class FS_NPC_OxranaVSS_Monolit: FS_NPC_OxranaVSS_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\monolit\monolit.paa"};
	};
	class FS_NPC_OxranaVSS_Free: FS_NPC_OxranaVSS_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\svoboda\svoboda.paa"};
	};
	class FS_NPC_KosterRuki_Stalker: FS_Saharov
	{
		scope = 2;
		model = "FS_2\1_Char\StalkerNPS\NPC_KosterGretsa.p3d";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\FV_ST_PACK\Vostok\data\stalker\stalker.paa"};
	};
	class FS_NPC_KosterRuki_Voshod: FS_NPC_KosterRuki_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\voshod.paa"};
	};
	class FS_NPC_KosterRuki_Dolg: FS_NPC_KosterRuki_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\dolg\dolg.paa"};
	};
	class FS_NPC_KosterRuki_Monolit: FS_NPC_KosterRuki_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\monolit\monolit.paa"};
	};
	class FS_NPC_KosterRuki_Free: FS_NPC_KosterRuki_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\svoboda\svoboda.paa"};
	};
	class FS_NPC_KosterProsto_Stalker: FS_Saharov
	{
		scope = 2;
		model = "FS_2\1_Char\StalkerNPS\NPC_KosterProsto.p3d";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\FV_ST_PACK\Vostok\data\stalker\stalker.paa"};
	};
	class FS_NPC_KosterProsto_Voshod: FS_NPC_KosterProsto_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\voshod.paa"};
	};
	class FS_NPC_KosterProsto_Dolg: FS_NPC_KosterProsto_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\dolg\dolg.paa"};
	};
	class FS_NPC_KosterProsto_Monolit: FS_NPC_KosterProsto_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\monolit\monolit.paa"};
	};
	class FS_NPC_KosterProsto_Free: FS_NPC_KosterProsto_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\svoboda\svoboda.paa"};
	};
	class FS_NPC_NetralStoyka_Stalker: FS_Saharov
	{
		scope = 2;
		model = "FS_2\1_Char\StalkerNPS\NPC_RUKAZAD.p3d";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\FV_ST_PACK\Vostok\data\stalker\stalker.paa"};
	};
	class FS_NPC_NetralStoyka_Voshod: FS_NPC_NetralStoyka_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\voshod.paa"};
	};
	class FS_NPC_NetralStoyka_Dolg: FS_NPC_NetralStoyka_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\dolg\dolg.paa"};
	};
	class FS_NPC_NetralStoyka_Monolit: FS_NPC_NetralStoyka_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\monolit\monolit.paa"};
	};
	class FS_NPC_NetralStoyka_Free: FS_NPC_NetralStoyka_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\svoboda\svoboda.paa"};
	};
	class FS_NPC_RukiKorman_Stalker: FS_Saharov
	{
		scope = 2;
		model = "FS_2\1_Char\StalkerNPS\NPC_RukiKarman.p3d";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\FV_ST_PACK\Vostok\data\stalker\stalker.paa"};
	};
	class FS_NPC_RukiKorman_Voshod: FS_NPC_RukiKorman_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\voshod.paa"};
	};
	class FS_NPC_RukiKorman_Dolg: FS_NPC_RukiKorman_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\dolg\dolg.paa"};
	};
	class FS_NPC_RukiKorman_Monolit: FS_NPC_RukiKorman_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\monolit\monolit.paa"};
	};
	class FS_NPC_RukiKorman_Free: FS_NPC_RukiKorman_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\svoboda\svoboda.paa"};
	};
	class FS_NPC_SidaPDA_Stalker: FS_Saharov
	{
		scope = 2;
		model = "FS_2\1_Char\StalkerNPS\NPC_SIDA_KPK.p3d";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\FV_ST_PACK\Vostok\data\stalker\stalker.paa"};
	};
	class FS_NPC_SidaPDA_Voshod: FS_NPC_SidaPDA_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\voshod.paa"};
	};
	class FS_NPC_SidaPDA_Dolg: FS_NPC_SidaPDA_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\dolg\dolg.paa"};
	};
	class FS_NPC_SidaPDA_Monolit: FS_NPC_SidaPDA_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\monolit\monolit.paa"};
	};
	class FS_NPC_SidaPDA_Free: FS_NPC_SidaPDA_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\svoboda\svoboda.paa"};
	};
	class FS_NPC_OxranaSPAS_Stalker: FS_Saharov
	{
		scope = 2;
		model = "FS_2\1_Char\StalkerNPS\NPC_SPAS.p3d";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\FV_ST_PACK\Vostok\data\stalker\stalker.paa"};
	};
	class FS_NPC_OxranaSPAS_Voshod: FS_NPC_OxranaSPAS_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\voshod.paa"};
	};
	class FS_NPC_OxranaSPAS_Dolg: FS_NPC_OxranaSPAS_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\dolg\dolg.paa"};
	};
	class FS_NPC_OxranaSPAS_Monolit: FS_NPC_OxranaSPAS_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\monolit\monolit.paa"};
	};
	class FS_NPC_OxranaSPAS_Free: FS_NPC_OxranaSPAS_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\svoboda\svoboda.paa"};
	};
	class FS_NPC_Monolitva_Stalker: FS_Saharov
	{
		scope = 2;
		model = "FS_2\1_Char\StalkerNPS\NPC_MonolitMolitva.p3d";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\FV_ST_PACK\Vostok\data\stalker\stalker.paa"};
	};
	class FS_NPC_Monolitva_Voshod: FS_NPC_Monolitva_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\voshod.paa"};
	};
	class FS_NPC_Monolitva_Dolg: FS_NPC_Monolitva_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\dolg\dolg.paa"};
	};
	class FS_NPC_Monolitva_Monolit: FS_NPC_Monolitva_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\monolit\monolit.paa"};
	};
	class FS_NPC_Monolitva_Free: FS_NPC_Monolitva_Stalker
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\fv_st_pack\vostok\data\svoboda\svoboda.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyHands;
	class ProxyAK_47_v58_Proxy: ProxyHands
	{
		model = "\dz\Characters\Proxies\ak_47_v58_proxy.p3d";
	};
	class ProxyBack;
	class ProxyBackpack_DZ: ProxyBack
	{
		model = "\dz\Characters\Proxies\Backpack_DZ.p3d";
	};
	class ProxyEyewear;
	class ProxyEyewear_DZ: ProxyEyewear
	{
		model = "\dz\Characters\Proxies\Eyewear_DZ.p3d";
	};
	class ProxyHeadgear;
	class ProxyHeadgear_DZ: ProxyHeadgear
	{
		model = "\dz\Characters\Proxies\Headgear_DZ.p3d";
	};
	class ProxyMask;
	class ProxyMask_DZ: ProxyMask
	{
		model = "\dz\Characters\Proxies\Mask_DZ.p3d";
	};
	class ProxyVest;
	class ProxyVest_DZ: ProxyVest
	{
		model = "\dz\Characters\Proxies\Vest_DZ.p3d";
	};
	class ProxyMelee;
	class ProxyMelee_DZ: ProxyMelee
	{
		model = "\dz\Characters\Proxies\Melee_DZ.p3d";
	};
};
