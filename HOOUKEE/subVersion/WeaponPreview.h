#pragma once
#include<vector>

struct WeaponPreview {
	std::wstring Name;
	char* Weapon;
	char* Pickup;
	char* Model;
};

static const std::vector<WeaponPreview> Pistol{
	{L"������ǹ","weapon_appistol","pickup_weapon_appistol","w_pi_appistol" },
	{L"ս����ǹ","weapon_combatpistol","pickup_weapon_combatpistol","w_pi_combatpistol" },
	{L"�ź�ǹ","weapon_flaregun","pickup_weapon_flaregun","w_pi_flaregun"},
	{L"������ǹ","weapon_heavypistol","pickup_weapon_heavypistol","w_pi_heavypistol" },
	{L"������ǹ","weapon_marksmanpistol","pickup_weapon_marksmanpistol","w_pi_marksmanpistol"},
	{L"��ǹ","weapon_pistol","pickup_weapon_pistol","w_pi_pistol" },
	{L"��ǹ MK2","weapon_pistol_mk2","pickup_weapon_pistol_mk2","w_pi_pistol_mk2"},
	{L".5�ھ���ǹ","weapon_pistol50","pickup_weapon_pistol50","w_pi_pistol50" },
	{L"�����ǹ","weapon_raypistol","pickup_weapon_raypistol","w_pi_raygun" },
	{L"����������ǹ","weapon_revolver","pickup_weapon_revolver","w_pi_revolver"},
	{L"����������ǹ MK2","weapon_revolver_mk2","pickup_weapon_revolver_mk2","w_pi_revolver_mk2"},
	{L"������ǹ","weapon_snspistol","pickup_weapon_snspistol","w_pi_sns_pistol "},
	{L"������ǹ MK2","weapon_snspistol_mk2","pickup_weapon_snspistol_mk2","w_pi_sns_pistol_mk2"},
	{L"���ǹ","weapon_stungun","pickup_weapon_stungun","w_pi_stungun" },
	{L"��ʽ��ǹ","weapon_vintagepistol","pickup_weapon_vintagepistol","w_pi_vintage_pistol" },
};
static const std::vector<WeaponPreview> Rifle{
	{L"�߼���ǹ", "weapon_advancedrifle", "pickup_weapon_advancedrifle", "w_ar_advancedrifle" },
	{L"ͻ����ǹAK47","weapon_assaultrifle","pickup_weapon_assaultrifle","w_ar_assaultrifle" },
	{L"ͻ����ǹAK47 MK2","weapon_assaultrifle_mk2","pickup_weapon_assaultrifle_mk2","w_ar_assaultrifle_mk2"},
	{L"����ʽ��ǹQBZ95","weapon_bullpuprifle","pickup_weapon_bullpuprifle","w_ar_bullpuprifle" },
	{L"����ʽ��ǹQBZ95 MK2","weapon_bullpuprifle_mk2","pickup_weapon_bullpuprifle_mk2","w_ar_bullpuprifle_mk2"},
	{L"������ǹM4","weapon_carbinerifle","pickup_weapon_carbinerifle","w_ar_carbinerifle" },
	{L"������ǹM4 MK2","weapon_carbinerifle_mk2","pickup_weapon_carbinerifle_mk2","w_ar_carbinerifle_mk2"},
	{L"�����Ͳ�ǹ","weapon_compactrifle","pickup_weapon_compactrifle","w_ar_compactrifle"},
	{L"��ʽ��ǹ","weapon_musket","pickup_weapon_musket","w_ar_musket"},
	{L"���ƿ�����ǹ","weapon_specialcarbine","pickup_weapon_specialcarbine","w_ar_specialcarbine"},
	{L"���ƿ�����ǹ MK2","weapon_specialcarbine_mk2","pickup_weapon_specialcarbine_mk2","w_ar_specialcarbine_mk2"},
};
static const std::vector<WeaponPreview> SMG{
	{L"ͻ�����ǹ","weapon_assaultsmg","pickup_weapon_assaultsmg","w_sb_assaultsmg" },
	{L"��ս�������ǹ","weapon_combatpdw","pickup_weapon_combatpdw","w_sb_pdw"},
	{L"UZI","weapon_microsmg","pickup_weapon_microsmg","w_sb_microsmg" },
	{L"��ķѷ���ǹ","weapon_gusenberg","pickup_weapon_gusenberg","w_sb_gusenberg" },
	{L"���ǹ","weapon_smg","pickup_weapon_smg","w_sb_smg" },
	{L"���ǹ MK2","weapon_smg_mk2","pickup_weapon_smg_mk2","w_sb_smg_mk2"},
	{L"΢�ͳ��ǹ","weapon_minismg","pickup_weapon_minismg","w_sb_minismg" },
};
static const std::vector<WeaponPreview> MG{
	{L"ս����ǹ","weapon_combatmg","pickup_weapon_combatmg","w_mg_combatmg" },
	{L"ս����ǹ MK2","weapon_combatmg_mk2","pickup_weapon_combatmg_mk2","w_mg_combatmgmk2"},
	{L"��ǹ","weapon_mg","pickup_weapon_mg","w_mg_mg" },
};
static const std::vector<WeaponPreview> Shotgun{
	{L"ͻ������ǹ","weapon_assaultshotgun","pickup_weapon_assaultshotgun","w_sg_assaultshotgun" },
	{L"�������ǹ","weapon_autoshotgun","pickup_weapon_autoshotgun","w_sg_autoshotgun"},
	{L"����ʽ����ǹ","weapon_bullpupshotgun","pickup_weapon_bullpupshotgun","w_sg_bullpupshotgun" },
	{L"˫������ǹ","weapon_dbshotgun","pickup_weapon_dbshotgun","w_sg_dbshotgun"},
	{L"��������ǹ","weapon_heavyshotgun","pickup_weapon_heavyshotgun","w_sg_heavyshotgun" },
	{L"�ö�ʽ����ǹ","weapon_pumpshotgun","pickup_weapon_pumpshotgun","w_sg_pumpshotgun" },
	{L"�ö�ʽ����ǹ MK2","weapon_pumpshotgun_mk2","pickup_weapon_pumpshotgun_mk2","w_sg_pumpshotgun_mk2"},
	{L"�̹�����ǹ","weapon_sawnoffshotgun","pickup_weapon_sawnoffshotgun","w_sg_sawnoff" },
};
static const std::vector<WeaponPreview> Sniper{
	{L"���;ѻ���ǹ","weapon_heavysniper","pickup_weapon_heavysniper","w_sr_heavysniper" },
	{L"���;ѻ���ǹ MK2","weapon_heavysniper_mk2","pickup_weapon_heavysniper_mk2","w_sr_heavysniper_mk2"},
	{L"���ֲ�ǹ","weapon_marksmanrifle","pickup_weapon_marksmanrifle","w_sr_marksmanrifle" },
	{L"���ֲ�ǹ MK2","weapon_marksmanrifle_mk2","pickup_weapon_marksmanrifle_mk2","w_sr_marksmanrifle_mk2"},
	{L"�ѻ���ǹ","weapon_sniperrifle","pickup_weapon_sniperrifle","w_sr_sniperrifle" },
};
static const std::vector<WeaponPreview> Heavy{
	{L"��Ų�ǹ","weapon_railgun","pickup_weapon_railgun","w_ar_railgun"},
	{L"������","weapon_minigun","pickup_weapon_minigun","w_mg_minigun" },
	{L"�������񵯷�����","weapon_compactlauncher","pickup_weapon_compactlauncher","w_lr_compactlauncher"},
	{L"�̻�������","weapon_firework","pickup_weapon_firework","w_lr_firework" },
	{L"�񵯷�����","weapon_grenadelauncher","pickup_weapon_grenadelauncher","w_lr_grenadelauncher" },
	{L"�Ƶ����������","weapon_hominglauncher","pickup_weapon_hominglauncher","w_lr_homing"},
	{L"RPG","weapon_rpg","pickup_weapon_rpg","w_lr_rpg" },
};

static const std::vector<std::pair<std::wstring, std::vector<WeaponPreview>>> weaponPreview{
	{L"��ǹ >>",Pistol},
	{L"��ǹ >>",Rifle},
	{L"���ǹ >>",SMG},
	{L"���ǹ >>",MG},
	{L"����ǹ >>",Shotgun},
	{L"�ѻ�ǹ >>",Sniper},
	{L"������ >>",Heavy},
};