#include "GameEngine.h"
#include "conio.h"
#include <iostream>
#include <Windows.h>
using namespace std;

FVector2i PlayerPosition = { 1,1 };

int Map[10][10]
{
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};

int PlayerX = 1;
int PlayerY = 1;
int PlayerHP = 10;
int PlayerItem[10];
int PlayerGold = 100;

int Input()
{
	/*
	if (_kbhit())
	{
		return _getch();
	}
	return 0;
	*/
	return _getch();
}
void Tick(int KeyCode)
{
	if (KeyCode == 'w')
	{
		AddPlayerOffset(0, -1);
	}
	if (KeyCode == 's')
	{
		AddPlayerOffset(0, 1);
	}
	if (KeyCode == 'a')
	{
		AddPlayerOffset(-1, 0);
	}
	if (KeyCode == 'd')
	{
		AddPlayerOffset(1, 0);
	}
}

void Clear()
{
	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			GotoXY(X, Y);
			cout << " ";
		}
		cout << endl;
	}
}

void Render()
{
	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			GotoXY(X, Y);

			if (PlayerPosition.X == X && PlayerPosition.Y == Y)
			{
				cout << "P";
			}
			else if (Map[Y][X] == 1)
			{
				cout << "#";
			}
			else if (Map[Y][X] == 0)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

void AddPlayerOffset(int DeltaX, int DeltaY)
{
	PlayerPosition.X += DeltaX;
	PlayerPosition.Y += DeltaY;
}

void GotoXY(int x, int y)
{
	COORD Pos = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}