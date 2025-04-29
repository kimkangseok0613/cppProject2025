//#include "SoundUtil.h"
//
//// WinMM.lib : Window Multi Media Library
//
//int main()
//{
//	cout << "배경음악을 넣는 방법" << endl;
//
//	// visual studio Audio file 출력하는 방법
//	// Windows.h PlaySound 함수 사용하기
//
//	// SND_SYNC	: 사운드 파일이 전부 실행되고 난 후에 아래 코드를 실행한다.
//	// SND_ASYNC: 아래 코드와 별개로 파일이 실행된다.
//
//	SoundUtil::PlayBGM(_T("Sound.wav"));
//
//	cout << "소리 출력" << endl;
//
//	while (true)
//	{
//
//	}
//}
// 클래스를 만드는 연습.
//
#include "Base.h"

void ClassDefaultInfo()
{
	Base* base = new Base();
	delete base;

	Base* derived = new Derived();
	derived->Do();

	delete derived;
}

/*
* 달리기 게임
* ----------------------------
* 1
* 2
* 3
* 4
* ----------------------------
*/

#include "Runner2.h"

int main()
{
	ClassDefaultInfo();
	system("cls");
	cout << "달리기 게임 코드" << endl; // Game Title

	// 사운드를 출력해주는 기능
	//SoundUtil::PlayBGM(_T("Sound.wav"));

	Runner2* runA = new Player();
	Runner2* runB = new Runner2("B");
	Runner2* runC = new Runner2("C");
	Runner2* runD = new Runner2("D");

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
}