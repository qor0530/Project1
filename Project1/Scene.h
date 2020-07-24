#pragma once
#include "GraphicManager.h"
#include <iostream>
class Scene
{
public:
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;
};

