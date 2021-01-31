/*
	由sub1to在2016-2017开源
	GTA5 Kevin Menu www.cngta5.com 后期整理
	我会在游戏更新后，不定时的更新里面的内容，再次开源
*/

#ifndef VECTOR_H
#define VECTOR_H

struct v2
{
	float	x = 0,
			y = 0;
};

struct v3
{
	float	x = 0,
			y = 0,
			z = 0;

	v3(){}
	v3(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

#endif