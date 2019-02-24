#pragma once
#pragma once

class tile
{
public:
	tile();
	~tile();
	void setX();
	void setY();
private:
	unsigned char type;//. for floor, ascii 219 for wall
	int isOccupied;// 0 = unoccupied;1 = occupied
	int PosX;
	int PosY;
};

