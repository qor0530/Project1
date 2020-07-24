#include "Monster.h"

Monster::Monster(const char* sh, const char* name, int max_hp, int hp) : 
	Tile (sh), MAX_HP(max_hp), HP(hp), NAME(name)
{
	x = y = 0;
}

void Monster::Move()
{
	if (y == 0 && x < MAX_X )
	{
		x++;
	}
	if (x == MAX_X - 1 && y < MAX_Y - 1) 
	{
		y++;
	}
	if (y == MAX_Y- 1 && x > 0)
	{
		x--;
	}
	if (x == 0 && y > 0) 
	{
		y--;
	}
}

void Monster::m_Render()
{
	Tile::Render(x, y, 14);
}

void Monster::HP_Render(int x, int y)
{
	std::string str = "";
	str += NAME;
	str += " : ";
	str += std::to_string(MAX_HP);
	str += " / ";
	str += std::to_string(HP);
	GraphicManager::Render(x, y, str.c_str(), 14, 8);
}
