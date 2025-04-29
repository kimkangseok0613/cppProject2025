#include "Runner2.h"

void Runner2::SetMaxSpeed()
{
	run += RandomUtil::GetRandomInt(maxSpeed);
}

void Runner2::DrawMoveDistance()
{
	for (int i = 0;i < run;i++)
	{
		cout << " ";
	}
}

void Runner2::SetShape()
{
	cout << symbol << endl;
}

void Runner2::Run()
{
	SetMaxSpeed();
	DrawMoveDistance();
	SetShape();
}

bool Runner2::CheckEndLine(int length)
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