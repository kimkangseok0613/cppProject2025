#include <iostream>
#include <Windows.h>
#include <conio.h> // �Է´�� �Լ� // _getch();

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
	// ����1. 10, 10 ��ǥ�� �÷��̾��� ���� �ؽ�Ʈ�� ����غ�����.
	ConsoleUtils::GoToXY(10, 10);
	std::cout << "�÷��̾��� ����";

	// ����2. �÷��̾��� �̸��� �Է¹޾Ƽ� �÷��̾��� ���� �ؽ�Ʈ �� �� �Ʒ��� ������ּ���.
	// �Է°��� ������ �޾Ƽ�, 1�� ������ �÷��̾��� �̸� �߰��ϱ�
	// 2�� ������ ȭ�鿡 �÷��̾� ������ ����ϱ�

	char name[10];

	while (true)
	{
		int inputNumber = 0;

		std::cout << "1_�̸� ����.2_���� ���.3_���α׷� ����." << std::endl;
		std::cin >> inputNumber;
		if (inputNumber == 1)
		{
			std::cout << "�̸��� �Է����ּ���.\n";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "�÷��̾��� ����";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "�÷��̾��� �̸� : "<< name;
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