#pragma once

#include <random>
#include <Windows.h>
#include <tchar.h>

class RandomUtil1
{
public:
	static int GetRandomInt(int range);
};

class ConsoleUtil1
{
public:
	static void GoToXY(int x, int y);
};

class SoundUtil1
{
public:
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};