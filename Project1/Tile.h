#pragma once
#define MAX_X	40
#define MAX_Y	20

#include "GraphicManager.h"

class Tile
{
protected:
	const char* Tile_shape;
public:
	Tile(const char* sh);
	void Render(int x, int y, int color);
};

