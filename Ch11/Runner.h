#pragma once

#include "Common.h"
#include "Utility.h"

enum PlayerStat
{
	MINSPEED, MAXSPEED , NONE
};

class Runner
{
private:
	bool isEnd;
protected:
	PlayerStat stat;
	int run;
	int minSpeed;
	int maxSpeed;

	int money;

	string symbol;
	virtual void SetMaxSpeed();
	void DrawMoveDistance();
	virtual void SetMinSpeed();


public:
	Runner() : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol("E"), stat(NONE), money(1000) {}
	Runner(string symbol) : run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol), stat(PlayerStat::NONE), money(1000) {}
	void Run();
	bool CheckEndLine(int length);

	virtual void ShowPlayerGameInfo();

	void Upgrade(PlayerStat selectedStat);
};

class Player : public Runner
{
protected:
	int run;
	int minSpeed;
	int maxSpeed;

public:
	Player() : Runner() 
	{
		symbol = "P";
	}
	Player(string symbol) : Runner(symbol) {}
	
	void ShowPlayerGameInfo() override;
};

class Enemy : public Runner
{
private:

public:
	
};