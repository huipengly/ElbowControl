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

	if (m1 > 5)
	{
		m1 = 5;
	}
	if (m1 < 0)
	{
		m1 = 0;
	}

	if (m2 > 5)
	{
		m2 = 5;
	}
	if (m2 < 0)
	{
		m2 = 0;
	}

	//if (m1 > 10)
	//{
	//	m1 = 10;
	//}
	//if (m1 < 0)
	//{
	//	m1 = 0;
	//}

	//if (m2 > 10)
	//{
	//	m2 = 10;
	//}
	//if (m2 < 0)
	//{
	//	m2 = 0;
	//}
}

void Elbow::SetMuscleAboslute(float a1, float a2)
{
	m1 = (5.0/6.0)*5.5 - a1;
	m2 = a2;

	if (m1 > 5)
	{
		m1 = 5;
	}
	if (m1 < 0)
	{
		m1 = 0;
	}

	if (m2 > 5)
	{
		m2 = 5;
	}
	if (m2 < 0)
	{
		m2 = 0;
	}

	//if (m1 > 10)
	//{
	//	m1 = 10;
	//}
	//if (m1 < 0)
	//{
	//	m1 = 0;
	//}

	//if (m2 > 10)
	//{
	//	m2 = 10;
	//}
	//if (m2 < 0)
	//{
	//	m2 = 0;
	//}
}