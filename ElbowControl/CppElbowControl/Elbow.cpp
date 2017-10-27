#include "Elbow.h"


Elbow::Elbow() : Pi(3.14159f), m1(0), m2(0), angle(0), rad(0)
{
}


Elbow::~Elbow()
{
}

float Elbow::ShowRad()
{
	return rad;
}

float Elbow::ShowAngle()
{
	return angle;
}

float Elbow::ShowM1()
{
	return m1;
}

float Elbow::ShowM2()
{
	return m2;
}

void Elbow::GetAngle(float InputAngle)
{
	angle = InputAngle;
	rad = angle / 180 * Pi;
}

void Elbow::SetMuscleRelative(float r1, float r2)
{
	m1 += r1;
	m2 += r2;
}

void Elbow::SetMuscleAboslute(float a1, float a2)
{
	m1 = a1;
	m2 = a2;
}