#include "BulletManager.h"
std::vector<Bullet*> BulletManager::b;

void BulletManager::Update()
{
	for (std::vector<Bullet*>::iterator i = b.begin(); i != b.end(); i++)
	{
		(*i)->Move();
	}
}
