#include "tiltTest.h"

tileTest::tileTest()
{
	t.setX();
	t.setY();
}

tileTest::~tileTest()
{
	//end of test boi
}

bool tileTest::testTileGetX()
{
	bool check = false;

	t.setX();

	if (t.getX() == 0)
	{
		check = true;
	}

	return check;
}

bool tileTest::testTileSetX()
{
	bool check = 0;
	t.setX(1);
	if (t.getX() == 1)
	{
		check = true;
	}
	return check;
}

bool tileTest::testTileGetY()
{
	bool check = false;

	t.setY();

	if (t.getY() == 0)
	{
		check = true;
	}

	return check;
}

bool tileTest::testTileSetY()
{
	bool check = 0;
	t.setY(1);
	if (t.getY() == 1)
	{
		check = true;
	}
	return check;
}
