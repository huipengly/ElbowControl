#include "Cylinder.h"


Cylinder::Cylinder()
{
}


Cylinder::~Cylinder()
{
}

float Cylinder::ShowPosition()
{
	return position;
}

float Cylinder::ShowFlow1()
{
	return flow1;
}

float Cylinder::ShowFlow2()
{
	return flow2;
}

void Cylinder::GetPosition(float InputPosition)
{
	position = static_cast<float>(InputPosition / 32767.0 * 10.0);
}

void Cylinder::SetCylinderRelative(float r1, float r2)
{
	flow1 += r1;
	flow2 += r2;

	if (flow1 > 10)
	{
		flow1 = 10;
	}
	if (flow1 < 0)
	{
		flow1 = 0;
	}

	if (flow2 > 10)
	{
		flow2 = 10;
	}
	if (flow2 < 0)
	{
		flow2 = 0;
	}
}

void Cylinder::SetCylinderAboslute(float a1, float a2)
{
	flow1 = 5 + a1;
	flow2 = 5 + a2;

	if (flow1 > 10)
	{
		flow1 = 10;
	}
	if (flow1 < 0)
	{
		flow1 = 0;
	}

	if (flow2 > 10)
	{
		flow2 = 10;
	}
	if (flow2 < 0)
	{
		flow2 = 0;
	}
}
