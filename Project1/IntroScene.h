#pragma once
#include "Scene.h"
#include "SceneManager.h"
#include "GraphicManager.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
class SceneManager;
class IntroScene : public Scene
{
public:
	void Init();
	void Update();
	void Render();
	void Release();
private:
	int SceneNum;
	void ShowIntro(); // 인트로
	void PutSceneNum(); // 씬 번호 입력
};

