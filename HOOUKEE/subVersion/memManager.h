/*
	由sub1to在2016-2017开源
	GTA5 Kevin Menu www.cngta5.com 后期整理
	我会在游戏更新后，不定时的更新里面的内容，再次开源
*/

#pragma once
#ifndef MEMMANAGER_H
#define MEMMANAGER_H
class memManager
{
	public:
				memManager();
				memManager(LPCSTR name);
				~memManager();
		bool	attach();
		HMODULE	getModuleAddress(char* moduleName);
		bool	findWindow();
		HWND	getWindow();
		void	setWindowName(LPCSTR str);
		void	initPtr();

		template <typename rT>
		inline void	readMem(DWORD_PTR address, rT* output, DWORD size = NULL, DWORD prot = NULL)
		{
			size	= (size == NULL) ? sizeof(rT) : size;
			ReadProcessMemory(m_hProc, (LPVOID) address, output, size, NULL);
			return;
		}

		template <typename wT>
		inline void	writeMem(DWORD_PTR address, wT* value , DWORD size = NULL, DWORD prot = NULL)
		{
			size	= (size == NULL) ? sizeof(wT) : size;
			WriteProcessMemory(m_hProc, (LPVOID) address, value, size, NULL);
			return;
		}

		template <typename wT>
		inline void	writeMem(DWORD_PTR address, wT value, DWORD size = NULL, DWORD prot = NULL)
		{
			size = (size == NULL) ? sizeof(wT) : size;
			WriteProcessMemory(m_hProc, (LPVOID)address, &value, size, NULL);
			return;
		}
	protected:
		LPCSTR	m_szWindowName;
		HWND	m_hWndTarget;
		HANDLE	m_hProc		= nullptr;
};

extern memManager*	g_pMemMan;

#endif