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
	int Number;//面的顶点数
	int Index[4];//面的顶点索引号
	CVector3 fNormal;//面的法向量
};

