/*
	��sub1to��2016-2017��Դ
	GTA5 Kevin Menu www.cngta5.com ��������
	�һ�����Ϸ���º󣬲���ʱ�ĸ�����������ݣ��ٴο�Դ
*/

#pragma once
#ifndef HACK_H
#define HACK_H

#define INITPTR_INVALID_WORLD	1 << 0
#define INITPTR_INVALID_PLAYER	1 << 1
#define INITPTR_INVALID_VEHICLE	1 << 2
#define INITPTR_INVALID_WEAPON	1 << 3
#define INITPTR_INVALID_TUNABLE 1 << 4
#define INITPTR_INVALID_GLOBAL  1 << 5
#define INITPTR_INVALID_PLAYER_LIST 1 << 6
#define INITPTR_INVALID_REPLAY_INTERFACE 1 << 7
#define INITPTR_INVALID_UNK_MODEL 1 << 7
class trainer
{
	public:
		clock_t		m_keyTmr;

						trainer();
						~trainer();
		bool			checkKeyState(int key);
		virtual void	checkKeys();
};

class hack : public trainer
{
	public:
		v2		m_v2Waypoint;
		v3		m_v3Objective;
		player	m_player;
		vehicle m_vehicle;
		weapon	m_weapon;
		tunable m_tunable;
		replayInterface	m_replayInterface;
		unkModel m_unkModel;
		std::string m_mpId;
		std::deque<std::pair<unsigned int,int>> m_dStat;
		ImpactExplosionEnum m_explosion;

		HMODULE	m_hModule;

				hack();
				~hack();
		void	checkKeys();
		BYTE	initPointers();

		void	teleport(v3 v);
		bool	teleportWaypoint();
		bool	teleportObjective();
		void	restoreHealth();
		void	restoreVehicleHealth();
		void	restoreStamina();
		void	notWanted();
		void	killNpc();
		void	fillAmmo();
		void    consumeStatQueue();
		void	killAllNpc(float* arg);
		void	tpAllNpc(float* arg);
		void	tpHostilityNpc(float* arg);
		void	killHostilityNpc(float* arg);
		void	killHostilityNpcVeh(float* arg);
		void	renderPlayerList();
		void	setImpactExplosion(float* arg);
		//void	fillAllAmmo(float* arg);
		void	healVehicle(float* arg);
		void	healPlayer(float* arg);
		void	suicide(float* arg);
		void	fillAmmo(float* arg);
		void	fillSkillLevels(float* arg);
		void	fillAllSnacks(float* arg);
		void	casinoStat(float* arg);
		void	casinoStatBitSet1(float* arg);
		void	casinoStatBitSet2(float* arg);
		void	casinoHeistCut(feat* feature, int playerIndex);
		void	unlockHeistCars(float* arg);
		void	unlockLSC(float* arg);
		void	unlockWeaponCamos(float* arg);
		//void	unlockWeapon(float* arg);
		void	unlockAllAwards(float* arg);
		void	unlockClothes(float* arg);
		void	intoPV(float* arg);
		void	loadSession(float* arg);
		void	forwardTeleport(float* arg);
		void	spawnVehicle(float* arg);
		void	selfDropWeapon(float* arg);
		void	selfDropMoney(feat* feature);
		void	waterProof(feat* feature);
		void	undeadOffradar(feat* feature);
		void	superPunch(feat* feature);
		void	noSpread(feat* feature);
		void	noRecoil(feat* feature);
		void	quickReload(feat* feature);
		void	bulletDamage(feat* feature);
		void	weaponRange(feat* feature);
		void	weaponSpin(feat* feature);
		void	weaponForceOnPed(feat* feature);
		void	weaponForceOnVehicle(feat* feature);
		void	weaponForceOnHeli(feat* feature);
		void	weaponBulletEdit(feat* feature);
		void	runSpeed(feat* feature);
		void	swimSpeed(feat* feature);
		void	npcIgnore(feat* feature);
		void	godMode(feat* feature);
		void	frameFlags(feat* featSuperJump, feat* featExplosiveMelee, feat* featFireAmmo, feat* featExplosiveAmmo);
		void	vehicleGod(feat* feature);
		void	infAmmo(feat* feature);
		void	noReload(feat* feature);
		void	seatbelt(feat* feature);
		void	noRagdoll(feat* feature);
		void	vehicleAccel(feat* feature);
		void	vehicleBrake(feat* feature);
		void	neverWanted(feat* feature);
		void	vehicleTraction(feat* feature);
		void	vehicleGravity(feat* feature);
		void	vehicleBulletproofTires(feat* feature);
		void	wanted(feat* feature);
		void	bulletBatch(feat* feature);
		void	muzzleVelocity(feat* feature);
		void	vehicleDeformation(feat* feature);
		void	vehicleUpShift(feat* feature);
		void	vehicleSuspensionForce(feat* feature);
		void	vehicleDownShift(feat* feature);
		void	vehicleMass(feat* feature);
		void	vehicleBuoyancy(feat* feature);
		void	vehicleHandbrakeForce(feat* feature);
		void	boost(feat* feature);
		void	vehicleRocketRechargeSpeed(feat* feature);
		void	vehicleSuspensionHeigh(feat* feature);
		void	vehicleColisionDamageMult(feat* feature);
		void	vehicleWeaponDamageMult(feat* feature);
		void	vehicleEngineDamageMult(feat* feature);
		void	tunableRpMult(feat* feature);
		void	tunableApMult(feat* feature);
		void	tunableMissionPayout(feat* feature);
		void	tunableOrbitalCannonCooldown(feat* feature);
		void	tunableBunkerResearch(feat* feature);
		void	tunableAntiIdleKick(feat* feature);
		void	removeSuicideCooldown(feat* feature);
		void	removePassiveModeCooldown(feat* feature);
		void	allowSellOnNonPublic(feat* feature);
		void	instantBullShark(feat* feature);
		void	bullSharkDrop(float* arg);
		void	ammoDrop(float* arg);
		void	miniGunDrop(float* arg);
		void	boatTaxi(float* arg);
		void	heliTaxi(float* arg);
		void	backupHeli(float* arg);
		void	airstrike(float* arg);
		void	offRadar(feat* feature);
		void	disableThePhone(feat* feature);
		void	antiCEOKick(feat* feature);
		void	antiKickToSP(feat* feature);
		void	antiApartmentTp(feat* feature);
		void	antiRemoteBounty(feat* feature);
		void	antiWeatherControl(feat* feature);
		void	antiRemoteVehicleKick(feat* feature);
		void	antiRemoteForceMission(feat* feature);
		void	triggerBot(feat* feature);
		void	about(float* arg);

	private:
		DWORD_PTR	m_dwpWorldBase,
					m_dwpPlayerBase,
					m_dwpVehicleBase,
					m_dwpAttackerBase,
					m_dwpWeaponManager,
					m_dwpWeaponCur,
					m_dwpAmmoInfo,
					m_dwpWeaponBase,
					m_dwpTunableBase,
					m_dwpGlobalBase,
					m_dwpPlayerListBase,
					m_dwpReplayInterfaceBase,
					m_dwpUnkModelBase;
		bool		m_bInit,m_bSelfDropInit,m_bMouseDown;

		void	getWaypoint();
		void	getObjective();
		void	dStatPushBack(unsigned int hash, int value);
		void	callMerryweather(std::ptrdiff_t index);
		int		getPlayerId();
		int		getNetworkTime();
		void	setCasinoHeistCut(int playerIndex, int cut);
		int		getCasinoHeistCut(int playerIndex);
		void	createAmbientPickup(unsigned int pickupHash, float posX, float posY, float posZ, int value, unsigned int modelHash);
		void	blockScriptEvents(feat* feature, std::ptrdiff_t index);

		unsigned int string_to_hash(std::string input, std::string pre = "MP0_");
};

extern hack*		g_pHack;

#endif