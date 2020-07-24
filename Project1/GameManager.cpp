#include "GameManager.h"
bool GameManager::GameLoop = true;
bool GameManager::CheckGameEnd()
{
	return GameLoop;
}

void GameManager::SetGameEnd()
{
	GameLoop = false;
}
