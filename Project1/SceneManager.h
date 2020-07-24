#pragma once
#include "Scene.h"
#include "IntroScene.h"
#include "GameScene.h"
#include "ExplainScene.h"
#include "EndScene.h"
#include "GameManager.h"
static class SceneManager
{
public:
	enum SceneType
	{
		INTRO,
		GAME,
		EXPLAIN,
		END
	};
	static Scene* scene;
public:
	static void SetScene(int whatScene);
	static void Init();
	static void Update();
	static void Render();
	static void Release();
};
