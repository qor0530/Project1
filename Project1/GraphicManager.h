#pragma once
#include <Windows.h>

#define BLACK 0 
#define BLUE 1 
#define GREEN 2 
#define CYAN 3 
#define RED 4 
#define MAGENTA 5 
#define BROWN 6 
#define LIGHTGRAY 7 
#define DARKGRAY 8 
#define LIGHTBLUE 9 
#define LIGHTGREEN 10 
#define LIGHTCYAN 11 
#define LIGHTRED 12 
#define LIGHTMAGENTA 13 
#define YELLOW 14 
#define WHITE 15 

static class GraphicManager
{
private:
	static HANDLE hBuffer[2];  //버퍼 핸들
	static int nScreenIndex;   //현재 선택 버퍼가 뭔지 저장
public:
	static void Init();
	static void Render(int x, int y, const char* str, int foreground = 14, int background = 0);
	static void Flipping();
	static void Clear();
	static void Release();
};

