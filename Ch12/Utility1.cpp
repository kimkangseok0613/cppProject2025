#include "Utility1.h"

int RandomUtil1::GetRandomInt(int range)
{
    static std::random_device device;
    static std::mt19937 gen(device());
    std::uniform_int_distribution<> dist(1, range);

    return dist(gen);
}

void ConsoleUtil1::GoToXY(int x, int y)
{
    static COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SoundUtil1::PlayTitleSound(LPCWSTR filename)
{
    PlaySound(filename, NULL, SND_SYNC);
}

void SoundUtil1::PlayBGM(LPCWSTR filename)
{
    PlaySound(filename, NULL, SND_ASYNC);
}
