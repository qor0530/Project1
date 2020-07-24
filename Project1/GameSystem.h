#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include "SceneManager.h"
#include "GameManager.h"
#include "GraphicManager.h"
using namespace std;
class GameSystem
{
private:
	SceneManager sm;
public:
	void Init();
	void Update();
	void Render();
	void Release();
};

