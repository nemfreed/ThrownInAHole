#pragma once
#define MaxFloorSizeX 100//these values were too large at 1000 each
#define MaxFloorSizeY 100//set to 100 each now
#include "tile.h"

class floor
{
public:
	floor();
	~floor();

private:
	tile board[MaxFloorSizeX][MaxFloorSizeY];
};

