#include <iostream>
#include <Windows.h>
#include "GameSystem.h"
using namespace std;

int main(void)
{
	GameSystem gs;

	gs.Init();
	while (GameManager::GameLoop)
	{
		gs.Update();
		gs.Render();
	}
	gs.Release(); 
	return 0;
}