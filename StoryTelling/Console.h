#pragma once

#include <Windows.h>

class Console
{
public:
	static void GoToXY(int x, int y) // 2번째 GoToXY 적용이 안된다.
	{
		COORD pos = { static_cast<short> (x),static_cast<short>(y) };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	static void CursorVisible(bool show)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cursorInfo;
		GetConsoleCursorInfo(hConsole, &cursorInfo);
		cursorInfo.bVisible = show;
		SetConsoleCursorInfo(hConsole, &cursorInfo);
	}
};

