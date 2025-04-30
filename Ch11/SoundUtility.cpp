#include "SoundUtility.h"

void SoundUtility::PlayTitleSound(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_SYNC); // 소리가 출력 "true"
}

void SoundUtility::PlayBGM(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_ASYNC); // 소리가 출력 "true"
}

void ConsoleUtility::GoYoXY(int x, int y)
{
	static COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
