#include "Tile.h"

Tile::Tile(const char* sh) : Tile_shape(sh)
{

}

void Tile::Render(int x, int y, int color)
{
	GraphicManager::Render(x, y, Tile_shape, color); 
}