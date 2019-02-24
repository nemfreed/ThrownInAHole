#include "tile.h"

tile::tile()
{
	type = 219;
	isOccupied = 1;
}

tile::~tile()
{
	//tile loss
}

int tile::getX()
{
	return PosX;
}

void tile::setX()
{
	PosX = 0;
}

void tile::setX(int a)
{
	if (a >= 0)
	{
		PosX = a;
	}
	else
	{
		PosY = 0;
	}
}

int tile::getY()
{
	return PosY;
}

void tile::setY()
{
	PosY = 0;
}

void tile::setY(int a)
{
	if (a >= 0)
	{
		PosY = a;
	}
	else
	{
		PosY = 0;
	}
}
