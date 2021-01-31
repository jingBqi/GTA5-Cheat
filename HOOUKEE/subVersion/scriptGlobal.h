/*
	由sub1to在2016-2017开源
	GTA5 Kevin Menu www.cngta5.com 后期整理
	我会在游戏更新后，不定时的更新里面的内容，再次开源
*/

#pragma once
#include "stdafx.h"
#include "ptrHandler.h"

class scriptGlobal
{
public:
	explicit scriptGlobal(std::size_t index);

	scriptGlobal at(std::ptrdiff_t index);
	scriptGlobal at(std::ptrdiff_t index, std::size_t size);

	template <typename T>
	prtHandler<T> as()
	{
		return prtHandler<T>(get());
	}

private:
	DWORD_PTR get();
	std::size_t m_index;
};