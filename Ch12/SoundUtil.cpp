#include "SoundUtil.h"

void SoundUtil::PlayTitleSound(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_SYNC); // 소리가 출력 "true"
}

void SoundUtil::PlayBGM(LPCWSTR filename)
{
	PlaySound(filename, NULL, SND_ASYNC); // 소리가 출력 "true"
}
