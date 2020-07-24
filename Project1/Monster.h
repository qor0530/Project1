#pragma once
#include <string>
#include "Tile.h"
#include "Bullet.h"
class Monster : public Tile
{
private:

	const char* NAME;
	int x, y;
	int MAX_HP = 10;
	int HP = 10;
public:
	Monster(const char* sh, const char * name, int MAX_HP, int HP);
	void Move();
	void m_Render();
	void HP_Render(int x, int y);
};

