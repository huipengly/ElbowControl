#pragma once
class Elbow
{
public:
	Elbow();
	~Elbow();
	float ShowRad();//返回当前弧度值
	float ShowM1();
	float ShowM2();
	void GetAngle(float InputAngle);//获取角度值并转换为弧度值
	//设置气动肌肉比例阀电压值，r1/a1代表单个肌肉一边，r2/a2代表2根肌肉一边
	void SetMuscleRelative(float r1, float r2);//设置电压值相对变化量
	void SetMuscleAboslute(float a1, float a2);//设置绝对电压值

protected:
	const float Pi;	//数学常量PI
	float angle;	//肘关节角度
	float rad;		//肘关节弧度制角度
	float m1, m2;	//气动肌肉比例阀电压值，m1代表单个肌肉一边，m2代表2根肌肉一边
};

