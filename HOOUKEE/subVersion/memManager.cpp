/*
	��sub1to��2016-2017��Դ
	GTA5 Kevin Menu www.cngta5.com ��������
	�һ�����Ϸ���º󣬲���ʱ�ĸ�����������ݣ��ٴο�Դ
*/

#include "stdafx.h"

memManager::memManager() {}

memManager::memManager(LPCSTR name)
{
	m_szWindowName = name;
}

memManager::~memManager()
{
	CloseHandle(m_hProc);
}

bool	memManager::attach()
{
	if(m_hProc != nullptr)
		return 1;

	if(!this->findWindow())
		return 0;

	DWORD dwProcId;
	GetWindowThreadProcessId(m_hWndTarget, &dwProcId);
	if(!dwProcId)
		return 0;

	m_hProc = OpenProcess(PROCESS_VM_OPERATION | PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_QUERY_INFORMATION, 0, dwProcId);
	if(m_hProc == nullptr)
		return 0;
	initPtr();

	return 1;
}

HMODULE memManager::getModuleAddress(char* moduleName)
{
	HMODULE	hModBuf[0xff];
	DWORD	bN;
	UINT	i;
	
	if(EnumProcessModulesEx(m_hProc, hModBuf, sizeof(hModBuf), &bN, LIST_MODULES_64BIT))
	{
		for(i = 0; i < (bN / sizeof(HMODULE)); i++)
		{
			TCHAR szPath[MAX_PATH];
			if(GetModuleFileNameEx(m_hProc, hModBuf[i], szPath, sizeof(szPath) / sizeof(TCHAR)))
			{
				std::string szName = szPath;
				if(szName.find(moduleName) != std::string::npos)
					return hModBuf[i];
			}
		}
	}
	return 0;
}

bool	memManager::findWindow()
{
	m_hWndTarget = FindWindow(nullptr, m_szWindowName);
	if(!m_hWndTarget)
		return 0;
	return 1;
}

HWND	memManager::getWindow()
{
	return m_hWndTarget;
}

void	memManager::setWindowName(LPCSTR str)
{
	m_szWindowName	= str;
}

void memManager::initPtr()
{
	HMODULE hModule = memManager::getModuleAddress("steam_api64.dll");
	if (hModule != 0)
	{
		//Steam
		ADDRESS_WORLD = 0x24E9E50;
		ADDRESS_BLIP = 0x1F73420;
		ADDRESS_AMMO = 0x1030A3D;
		ADDRESS_MAGAZINE = 0x1030A0D;
		ADDRESS_TUNABLE = 0x2D765E8;
		ADDRESS_TRIGGER = 0x1F63020;
		ADDRESS_GLOBAL = 0x2DA0A60;
		ADDRESS_PLAYER_LIST = 0x1DB57F0;
		ADDRESS_REPLAY_INTERFACE = 0x1EE4CC0;
		ADDRESS_UNK_MODEL = 0x250D560;
	}
	else
	{
		//Epic
		ADDRESS_WORLD = 0x24E6D90;
		ADDRESS_BLIP = 0x1F6EF80;
		ADDRESS_AMMO = 0x102F8E9;
		ADDRESS_MAGAZINE = 0x102F8A4;
		ADDRESS_TUNABLE = 0x2D70DA8;
		ADDRESS_TRIGGER = 0x1F5EB30;
		ADDRESS_GLOBAL = 0x2D9C4A0;
		ADDRESS_PLAYER_LIST = 0x1DB2648;
		ADDRESS_REPLAY_INTERFACE = 0x1EE18A8;
		ADDRESS_UNK_MODEL = 0x250A280;
	}
}
