#include "IntroScene.h"

void IntroScene::Init()
{
}

void IntroScene::Update()
{
	PutSceneNum();
}

void IntroScene::Render()
{
	ShowIntro();
}

void IntroScene::Release()
{ 

}

void IntroScene::ShowIntro() 
{
	GraphicManager::Render(0, 0, "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖", 1);
	GraphicManager::Render(0, 1, "弛    Catch the rice chief !!     弛",1); 
	GraphicManager::Render(0, 2, "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎",1);
	GraphicManager::Render(1, 4, "     1. GameStart", 1);
	GraphicManager::Render(1, 6, "     2. GameExplain", 1);
	GraphicManager::Render(1, 8, "     3. GameExit", 1);
	
}

void IntroScene::PutSceneNum() //Update
{
	if (GetAsyncKeyState(0x31) & 0x8000)
	{
		SceneManager::SetScene(1);
	}
	if (GetAsyncKeyState(0x32) & 0x8000)
	{
		SceneManager::SetScene(2);
	}
	if (GetAsyncKeyState(0x33) & 0x8000)
	{
		SceneManager::SetScene(3);
	}
}
