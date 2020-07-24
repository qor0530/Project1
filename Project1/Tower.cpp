#include "Tower.h"

Tower::Tower(const char* sh, const char* name, int x, int y, bool On, int Damage) 
	: Tile(sh) , NAME(name), Tx(x), Ty(y), Onplayed(On) , Hit(Damage)
{

}

void Tower::T_Render()
{
	if (Tx >= 0 && Ty >= 0)
	{
		Render(Tx, Ty, 3);
	}
}

void Tower::Info_Render(int x, int y)
{
	std::string str = "";
	str += NAME;
	str += "  Damage : ";
	str += std::to_string(Hit);
	GraphicManager::Render(x, y, str.c_str(), 14, 8);
}

void Tower::Tower_move(int x, int y)
{
	if (Tx <= 0)
	{
		Tx++;
	}
	if (Ty <= 0)
	{
		Ty++;
	}
	if (Tx >= MAX_X - 1)
	{
		Tx--;
	}
	if (Ty >= MAX_Y - 1)
	{
		Ty--;
	}
	Tx += x, Ty += y;

}

void Tower::Tower_On()
{
	Onplayed = true;
}

void Tower::Tower_Off()
{
	Onplayed = false;
}
