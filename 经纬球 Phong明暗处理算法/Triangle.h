#pragma once
#include"Point3.h"
#include "Vector3.h"
#include "Lighting.h"

class CTriangle
{
public:
	CTriangle(void);
	virtual ~CTriangle(void);
	void SetPoint(CP3 P0, CP3 P1, CP3 P2, CVector3 N0, CVector3 N1, CVector3 N2);//三角形初始化
	void PhongShader(CDC* pDC, CP3 ViewPoint, CLighting* pLight, CMaterial* pMaterial);//Phong明暗处理填充三角形
	void EdgeFlag(CPoint2 PStart, CPoint2 PEnd, BOOL bFeature);//为边做标记
	CRGB LinearInterp(double t, double tStart, double tEnd, CRGB intensityStart, CRGB intensityEnd);//光强线性插值
	CVector3 LinearInterp(double t, double tStart, double tEnd, CVector3 vStart, CVector3 vEnd);//法向量线性插值
	void SortVertex(void);//顶点排序
private:
	CP3 P0, P1, P2;//三角形的浮点数顶点坐标
	CPoint3 point0, point1, point2;//三角形的整数顶点坐标	
	CPoint2* pLeft; //跨度的起点数组标志
	CPoint2* pRight;//跨度的终点数组标志
	int nIndex;//记录扫描线条数
};

