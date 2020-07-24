#pragma once
#include <vector>
//#include <list>
#include "Bullet.h"
class Bullet;
static class BulletManager
{
public:
	static std::vector<Bullet*> b;
	static void Update();
};

