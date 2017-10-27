#include "PID_Position.h"
//Œª÷√PID
PID_Position::PID_Position() :kp(0), ki(0), kd(0), target(0), actual(0), integral(0)
{
	err = target - actual;
	err_pre = err;
}

PID_Position::PID_Position(float p, float i, float d) : kp(p), ki(i), kd(d), target(0), actual(0), integral(0)
{
	err = target - actual;
	err_pre = err;
}

void PID_Position::pid_set(float p, float i, float d)
{
	kp = p;
	ki = i;
	kd = d;
}

float PID_Position::pid_control(float tar, float act)
{
	float u;
	target = tar;
	actual = act;
	err = target - actual;
	integral += err;
	u = kp*err + ki*integral + kd*(err - err_pre);
	err_pre = err;
	return u;
}

float PID_Position::ShowKp()
{
	return kp;
}