#pragma once
static class GameManager
{ 
public: // <- private 에서 바꾼 이유 = main.cpp 에서 루프 탈출에 사용
	static bool GameLoop;
public:
	static bool CheckGameEnd(); //게임이 끝나는지 확인
	static void SetGameEnd();	//게임루프를 false 로 바꿔줌
};

