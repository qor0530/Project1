#pragma once
#include "Tower.h"
#include "Bullet.h"
class First_Tower : public Tower
{
private:
	int Count, bulletTime, lateTime;
public:
	First_Tower(const char* sh, const char* name, int x, int y, bool On, int Damage);
	void FT_Render();
	void Shot();
	void SetBul();
	Bullet * bul[10];
};

