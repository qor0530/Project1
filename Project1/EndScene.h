#pragma once
#include "Scene.h"

class EndScene : public Scene
{
public:
	void Init();
	void Update();
	void Render();
	void Release();
private:
	void ShowThis();
};

