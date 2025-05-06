#pragma once

#include <iostream>
#include<string>
#include "Console.h"

// 1차원 데이터를 
class Image
{
private:
	char art[10][100]; // [가로][세로]
	int height;

public:
	Image(const char* model, int height)
	{
		this->height = height;

		const char* lineStart = model;
		for (int i = 0;i < height;i++)
		{
			const char* lineEnd = strchr(lineStart, '\n'); // i번째 줄에서 게행문자를 찾아라.
			if (lineEnd == nullptr)
			{
				lineEnd = model + strlen(model); // 마지막 줄을 표현
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->art[i], lineStart, length);
			lineStart = lineEnd + 1;
		}
	}

	void show(int x, int y) const
	{
		for (int i = 0;i < height;i++)
		{
			Console::GoToXY(x, y + i);
			std::cout << art[i];
		}
	}

	void move(int x, int y, int moveDistance, int delay) // ->
	{
		for (int i = 0; i < moveDistance; i++)
		{
			Console::GoToXY(x + i, y);

			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(x + i, y + j);
				std::cout << art[j];
			}
			Sleep(delay);
			system("cls");
		}
	}

	void moveReverse(int x, int y, int moveDistance, int delay) // <-
	{
		for (int i = 0; i < moveDistance; i++)
		{
			int currentX = x - i;
			if (currentX < 0) // 콘솔에서 x가 0보다 작으면 에러가 발생한다.
			{
				currentX = 0;
			}
			Console::GoToXY(currentX, y);

			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(currentX, y + j);
				std::cout << art[j];
			}
			Sleep(delay);
			system("cls");
		}
	}
};
