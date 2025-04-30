#include "GameManager.h"

void GameManager::ShowTitle()
{
	ConsoleUtility::GoToXY(30, 0);
	cout << "제목 실행" << endl;
	SoundUtil::PlayTitleSound(_T("Sound.wav"));
}

void GameManager::ShopPhase()
{
	// 플레이어의 강화 시스템 필요
	system("cls");
	cout << "상점에 진입했습니다" << endl;

	int input = 0;
	cout << "행동을 선택해주세요" << endl;
	cout << "1_minSpeed가 1만큼 증가합니다." << endl;
	cout << "2_maxSpeed가 1만큼 증가합니다." << endl;
	cout << "3_게임을 시작합니다." << endl;

	cin >> input;
	if (input == 1)
	{
		cout << "게임이 시작됩니다." << endl;
	}
	else if (input == 2)
	{
		cout << "게임이 시작됩니다." << endl;
	}
	else if (input == 3)
	{
		cout << "게임이 시작됩니다." << endl;
	}
}

void GameManager::GamePhase()
{
	cout << "달리기 게임이 실행됩니다." << endl;
	int input = 0;
	cin >> input;

	Player* runA = new Player();
	Runner* runB = new Runner("B");
	Runner* runC = new Runner("C");
	Runner* runD = new Runner("D");

	//int runA = 0;	// 1번 주자의 현재 이동 거리
	//int runB = 0;
	//int runC = 0;
	//int runD = 0;
	//
	//bool endA = false;
	//bool endB = false;
	//bool endC = false;
	//bool endD = false;

	string line = "===============================================================================";

	int endline = line.length();

	while (true)
	{
		Sleep(1000);	// 1초마다 게임을 업데이트
		system("cls");	// 화면을 지운다.

		cout << line << endl;
		runA->Run();
		runB->Run();
		runC->Run();
		runD->Run();
		cout << line << endl;

		runA->ShowPlayerGameInfo();

		if (runA->CheckEndLine(endline) || runB->CheckEndLine(endline) || runC->CheckEndLine(endline) || runD->CheckEndLine(endline))
		{
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (runA->CheckEndLine(endline))
	{
		cout << "A가 1등을 했습니다." << endl;
	}
	if (runB->CheckEndLine(endline))
	{
		cout << "B가 1등을 했습니다." << endl;
	}
	if (runC->CheckEndLine(endline))
	{
		cout << "C가 1등을 했습니다." << endl;
	}
	if (runD->CheckEndLine(endline))
	{
		cout << "D가 1등을 했습니다." << endl;
	}

	cout << "상점 페이지로 진행하기 위해서 버튼을 입력해주세요." << endl;
	_getch();
}

void GameManager::Play()
{
	ShowTitle();

	while (true)
	{
		ShopPhase();
		GamePhase();
	}
}
