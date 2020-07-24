#include "GameSystem.h"

void GameSystem::Init()
{
	GraphicManager::Init();
	SceneManager::SetScene(sm.INTRO);
}

void GameSystem::Update()
{
	SceneManager::Update();
}

void GameSystem::Render()
{
	GraphicManager::Clear();
	SceneManager::Render();
	GraphicManager::Flipping();
}

void GameSystem::Release()
{
	SceneManager::Release();
	GraphicManager::Release();
}