#include <iostream>
#include <Windows.h>
#include <conio.h> // 입력대기 함수 // _getch();

namespace ConsoleUtils
{
	void GoToXY(int x, int y)
	{
		COORD pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
}

int main()
{
	// 예제1. 10, 10 좌표에 플레이어의 정보 텍스트를 출력해보세요.
	ConsoleUtils::GoToXY(10, 10);
	std::cout << "플레이어의 정보";

	// 예제2. 플레이어의 이름을 입력받아서 플레이어의 정보 텍스트 한 줄 아래에 출력해주세요.
	// 입력값을 정수로 받아서, 1을 받으면 플레이어의 이름 추가하기
	// 2를 받으면 화면에 플레이어 정보를 출력하기

	char name[10];

	while (true)
	{
		int inputNumber = 0;

		std::cout << "1_이름 변경.2_정보 출력.3_프로그램 종료." << std::endl;
		std::cin >> inputNumber;
		if (inputNumber == 1)
		{
			std::cout << "이름을 입력해주세요.\n";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "플레이어의 정보";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "플레이어의 이름 : "<< name;
			_getch();	// #include <conio.h>
		}
		else if(inputNumber==3)
		{
			break;
		}
		else
		{
			
		}
		system("cls");
	}
}