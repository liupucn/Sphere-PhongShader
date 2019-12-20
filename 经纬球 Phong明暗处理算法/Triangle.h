#pragma once
#include"Point3.h"
#include "Vector3.h"
#include "Lighting.h"

class CTriangle
{
public:
	CTriangle(void);
	virtual ~CTriangle(void);
	void SetPoint(CP3 P0, CP3 P1, CP3 P2, CVector3 N0, CVector3 N1, CVector3 N2);//�����γ�ʼ��
	void PhongShader(CDC* pDC, CP3 ViewPoint, CLighting* pLight, CMaterial* pMaterial);//Phong�����������������
	void EdgeFlag(CPoint2 PStart, CPoint2 PEnd, BOOL bFeature);//Ϊ�������
	CRGB LinearInterp(double t, double tStart, double tEnd, CRGB intensityStart, CRGB intensityEnd);//��ǿ���Բ�ֵ
	CVector3 LinearInterp(double t, double tStart, double tEnd, CVector3 vStart, CVector3 vEnd);//���������Բ�ֵ
	void SortVertex(void);//��������
private:
	CP3 P0, P1, P2;//�����εĸ�������������
	CPoint3 point0, point1, point2;//�����ε�������������	
	CPoint2* pLeft; //��ȵ���������־
	CPoint2* pRight;//��ȵ��յ������־
	int nIndex;//��¼ɨ��������
};

