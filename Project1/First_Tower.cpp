#include "First_Tower.h"

First_Tower::First_Tower(const char* sh, const char* name, int x, int y, bool On, int Damage) 
	:Tower(sh, name, x, y, On, Damage)
{
	for (int i = 0; i < 10; i++)
	{
		bul[i] = new Bullet("}", -10, -10); //
	}
	Count = 0;
	lateTime = 100;
}

void First_Tower::FT_Render()
{
	for (int i = 0; i < 10; i++)
	{
		bul[i]->B_Render();
	}
}

void First_Tower::Shot()
{
	if (GetTickCount() - bulletTime > lateTime)
	{
		bulletTime = GetTickCount();
		Count %= 10;
		bul[Count]->B_SetXY(Tx, Ty);
		Count++;
	}

}