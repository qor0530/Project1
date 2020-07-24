#pragma once
#include "Tower.h"
#include "Monster.h"
class BoxCollider
{
public:
	static bool ColliderCheck(Tower * Obj1, Monster * obj2);
};

