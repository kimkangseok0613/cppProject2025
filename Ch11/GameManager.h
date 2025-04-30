#pragma once

// main() 프로그램 시작 -> 게임 시작 -> 게임 종료

#include "Runner.h"
#include <conio.h>

class GameManager
{
private:
	void ShowTitle();
	void ShopPhase();
	void GamePhase();

public:
	void Play();
};

