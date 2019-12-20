#include "StdAfx.h"
#include "Facet.h"


CFacet::CFacet(void)
{
}

CFacet::~CFacet(void)
{	
}

void CFacet::SetPtNumber(int Number)
{
	this->Number = Number;
}

void CFacet::SetFacetNormal(CP3 P0, CP3 P1, CP3 P2)    //表面法向量函数
{
	CVector3 Vector01(P0, P1);// P0与P1顶点构成边向量
	CVector3 Vector02(P0, P2);// P0与P2顶点构成边向量
	fNormal = CrossProduct(Vector01, Vector02);
}

