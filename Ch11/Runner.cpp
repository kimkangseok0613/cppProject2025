#include "Runner.h"

void Runner::Run()
{
	// maxSpeed 제어해주는 함수
	run += RandomUtil::GetRandomInt(maxSpeed);
	
	for (int i = 0;i < run;i++)
	{
		cout << " ";
	}
	cout << symbol << endl;
}

bool Runner::CheckEndLine(int length)
{
	if (run >= length)
	{
		isEnd = true;
	}
	else
	{
		isEnd = false;
	}
	return isEnd;
}

void Runner::ShowPlayerGameInfo()
{
}

void Runner::Upgrade(PlayerStat selectedStat)
{

}

void Player::ShowPlayerGameInfo()
{
	ConsoleUtility::GoToXY(0, 6);
	cout << "유저 정보" << endl;
	cout << "최소 속도 : " << minSpeed << "최대 속도 : " << maxSpeed << endl;
	cout << "보유 금액 : " << " " << endl;
}
