#include "SceneManager.h"
Scene* SceneManager::scene;
void SceneManager::SetScene(int whatScene)
{
	if (scene)
	{
		scene->Release();
		delete scene;
	}
	
	switch (whatScene)
	{
	case INTRO: // 0
		scene = new IntroScene();
		break;
	case GAME: // 1
		scene = new GameScene();
		break;
	case EXPLAIN: // 2
		scene = new ExplainScene();
		break;
	case END: // 3
		if (GameManager::CheckGameEnd())
		{
			GameManager::SetGameEnd();
		}
	}
	if (scene)
	{
		scene->Init();
	}
}

void SceneManager::Init()
{
	scene->Init();
}

void SceneManager::Update()
{
	scene->Update();
}

void SceneManager::Render()
{
	scene->Render();
}

void SceneManager::Release()
{
	scene->Release();
}
