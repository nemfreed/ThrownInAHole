#pragma once

#include "tile.h"

class tileTest
{
public:
	tileTest();
	~tileTest();

	bool testTileSetX();
	bool testTileSetY();
	bool testTileGetX();
	bool testTileGetY();
private:
	tile t;
};
