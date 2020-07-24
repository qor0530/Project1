#include "PosTower.h"

void PosTower::Setting(Tower* tower)
{
	int x = 0, y = 0;

	if (GetAsyncKeyState(VK_UP) & 0x8001)
	{
		y--;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8001)
	{
		y++;
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8001)
	{
		x--;
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8001)
	{
		x++;
	}
	if (GetAsyncKeyState(VK_RETURN) & 0x8001)
	{
		x = y = 0;
	}
	tower->Tower_move(x, y);
}