#include "EndScene.h"

void EndScene::Init()
{
}

void EndScene::Update()
{
}

void EndScene::Render()
{
	ShowThis();
}

void EndScene::Release()
{
}

void EndScene::ShowThis()
{
	GraphicManager::Render(10, 10, "EndScene", 1);
}