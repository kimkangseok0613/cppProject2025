#pragma once

#include <iostream>
#include <Windows.h>
#include <tchar.h>

using namespace std;


class SoundUtility
{
public:
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};

class ConsoleUtility
{
public:
	void GoYoXY(int x, int y);
};