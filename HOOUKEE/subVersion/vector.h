/*
	��sub1to��2016-2017��Դ
	GTA5 Kevin Menu www.cngta5.com ��������
	�һ�����Ϸ���º󣬲���ʱ�ĸ�����������ݣ��ٴο�Դ
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