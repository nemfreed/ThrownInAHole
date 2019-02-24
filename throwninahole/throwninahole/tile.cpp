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
void tile::setX()
{
	PosX = 0;
}
void tile::setY()
{
	PosY = 0;
}