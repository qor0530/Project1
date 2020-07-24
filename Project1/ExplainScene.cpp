#include "ExplainScene.h"

void ExplainScene::Init()
{
}

void ExplainScene::Update()
{
}

void ExplainScene::Render()
{
	ShowThis();
}

void ExplainScene::Release()
{
}

void ExplainScene::ShowThis()
{
	GraphicManager::Render(10, 10, "ExplainScene", 1);
}