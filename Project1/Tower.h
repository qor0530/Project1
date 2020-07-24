#pragma once
#include "GraphicManager.h"
#include "Tile.h"
#include "Bullet.h"
#include <string>
class Tower : public Tile
{

protected:

	int Tx, Ty, Hit;
	const char* NAME;
	bool Onplayed;
public:
	Tower(const char* sh, const char* name, int x, int y, bool On, int Damage);
	void T_Render();
	void Info_Render(int x, int y);
	void Tower_move(int x, int y);
	void Tower_On();
	void Tower_Off();
};

