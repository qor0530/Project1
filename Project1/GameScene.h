#pragma once
#include "Scene.h"
#include "Tile.h"
#include "Monster.h"
#include "Tower.h"
#include "First_Tower.h"
#include "PosTower.h"
#include "Bullet.h"
#include <conio.h>
#include "BulletManager.h"
class GameSystem;
class GameScene : public Scene
{
private:
	Monster* Soycrab;
	Monster* Spam;
	First_Tower* Police[5];
	Tile *MapTile[MAX_X][MAX_Y];
	PosTower Pos;
	bool Setting_Mode;
	bool KeyIsDown;
	int Count = 0;

public:
	void Init();
	void Update(); 
	void Render();
	void Release();
private:
	void Mapping();
	void ShowMonsterHP();
	void CheckTowerOn();
	void GetKey();
};

