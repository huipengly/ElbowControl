#pragma once
class Elbow
{
public:
	Elbow();
	~Elbow();
	float ShowRad();//���ص�ǰ����ֵ
	float ShowM1();
	float ShowM2();
	void GetAngle(float InputAngle);//��ȡ�Ƕ�ֵ��ת��Ϊ����ֵ
	//�������������������ѹֵ��r1/a1����������һ�ߣ�r2/a2����2������һ��
	void SetMuscleRelative(float r1, float r2);//���õ�ѹֵ��Ա仯��
	void SetMuscleAboslute(float a1, float a2);//���þ��Ե�ѹֵ

protected:
	const float Pi;	//��ѧ����PI
	float angle;	//��ؽڽǶ�
	float rad;		//��ؽڻ����ƽǶ�
	float m1, m2;	//���������������ѹֵ��m1����������һ�ߣ�m2����2������һ��
};

