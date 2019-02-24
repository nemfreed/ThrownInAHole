#pragma once
#include <string>

enum speed
{
	slow = 1,
	average = 2,
	fast = 4,
};


class monster
{
public:
	monster();
	~monster();
	void orc();
	void elf();


private:
	int ac, hp, bab, dmg;
	unsigned char token;
	speed MoveSpeed = average;
	
};

class player : public monster
{

};

