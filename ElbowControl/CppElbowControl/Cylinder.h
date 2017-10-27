#pragma once
class Cylinder
{
public:
	Cylinder();
	~Cylinder();
	float ShowPosition();
	float ShowFlow1();
	float ShowFlow2();
	void GetPosition(float InputPosition);
	void SetCylinderRelative(float r1, float r2);
	void SetCylinderAboslute(float a1, float a2);

protected:
	float position;		//����λ��
	float flow1, flow2;	//��������
};

