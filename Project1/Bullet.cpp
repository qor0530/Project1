#include "Bullet.h"

Bullet::Bullet(const char* sh, int x, int y) : Tile(sh) , Bx(x), By(y)
{
	BulletManager::b.push_back(this); //리스트로 다 들어감
}

void Bullet::B_Render()
{
	Tile::Render(Bx, By, 5);
}

void Bullet::B_SetXY(int x, int y)
{
	Bx = x, By = y;
}

void Bullet::Move()
{
	Bx++;
}

bool Bullet::Hit(int Mx, int My)
{
	if (Bx == Mx && By == My)
	{
		return true;
	}
	return false;
}
