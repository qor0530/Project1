#pragma once
#include "Tower.h"
#include "Tile.h"
#include "BulletManager.h"

class Bullet : public Tile
{
private:
	int Bx, By;
public:
	Bullet(const char * sh, int x, int y);
	void B_Render();
	void B_SetXY(int x, int y);
	void Move();
	bool Hit(int x, int y);
};

