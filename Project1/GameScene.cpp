#include "GameScene.h"

void GameScene::Init()
{

	for (int i = 0; i < MAX_X; i++)
	{
		for (int j = 0; j < MAX_Y; j++)
		{
			MapTile[i][j] = new Tile("x");
		}
	}
	Setting_Mode = false;
	Soycrab = new Monster("O", "°£Àå°ÔÀå", 10, 10);
	Police[0] = new First_Tower("T", "¹ä°æÂû 1", -10, -10, false, 1);
	Police[1] = new First_Tower("T", "¹ä°æÂû 2", -10, -10, false, 2);
	Police[2] = new First_Tower("T", "¹ä°æÂû 3", -10, -10, false, 3);
	Police[3] = new First_Tower("T", "¹ä°æÂû 4", -10, -10, false, 4);
	Police[4] = new First_Tower("T", "¹ä°æÂû 5", -10, -10, false, 5);
	KeyIsDown = false;
}

void GameScene::Update()
{
	Soycrab->Move();
	GetKey();
	if (Setting_Mode)
	{
		Pos.Setting(Police[Count]); 
	}
	if (KeyIsDown == false)
	{
		for (int i = 0; i < 5; i++)
			Police[i]->Shot();
			BulletManager::Update();
	}

}

void GameScene::Render()
{
	Mapping();
}

void GameScene::Release()
{
}


void GameScene::Mapping()
{
	for (int i = 0; i < MAX_X; i++)
	{
		for (int j = 0; j < MAX_Y; j++)
		{
			MapTile[i][j]->Render(i, j, 12);
		}
	}
	Soycrab->m_Render();
	Soycrab->HP_Render(43, 3);
	for (int i = 0; i < 5; i++)
	{
		Police[i]->T_Render();
		Police[i]->Info_Render(43, 4 + i);
		Police[i]->FT_Render();
	}
}

void GameScene::ShowMonsterHP() 
{
	Soycrab->HP_Render(50, 3);
}

void GameScene::CheckTowerOn()
{
	Police[Count]->Tower_On();
}

void GameScene::GetKey()
{
	if (_kbhit())
	{
		int input = _getch();
		if (input == 0)
		{
			input = _getch();
			Count %= 5;
			if (!KeyIsDown)
			{
				switch (input)
				{
				case 59:
					Setting_Mode = true;
					CheckTowerOn();
					KeyIsDown = true; 
					break;
				case 60:
					Setting_Mode = false; 
					Police[Count]->Tower_Off();
					Count++;
					KeyIsDown = true;
					break;
				}
			}
		}
	}
	else
	{
		KeyIsDown = false;
	}

}

