#pragma once
#include"Vector3.h"

class CFacet
{
public:
	CFacet(void);
	virtual ~CFacet(void);
	void SetPtNumber(int Number);
	void SetFacetNormal(CP3 P0,CP3 P1,CP3 P2);
public:
	int Number;//��Ķ�����
	int Index[4];//��Ķ���������
	CVector3 fNormal;//��ķ�����
};

