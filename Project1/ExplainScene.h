#pragma once
#include "Scene.h"
class ExplainScene : public Scene
{
public:
	void Init();
	void Update();
	void Render();
	void Release();
private:
	void ShowThis();
};

