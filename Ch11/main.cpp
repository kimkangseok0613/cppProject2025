// 클래스를 만드는 연습.
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

#include "SoundUtility.h"
#include  "GameManager.h"

int main()
{
	//ClassDefaultInfo();
	//system("cls");
	//cout << "달리기 게임 코드" << endl; // Game Title
	GameManager game;
	game.Play();

	// 사운드를 출력해주는 기능
	//SoundUtil::PlayBGM(_T("Sound.wav"));

	
}