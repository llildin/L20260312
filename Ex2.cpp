#include <iostream>
#include <conio.h>
using namespace std;

int Map[10][10] =
{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

void PrintMap(int* PlayerX, int* PlayerY)
{
	system("cls");
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (*PlayerX == j && *PlayerY == i)
			{
				cout << "P";
			}
			else if (Map[j][i] == 1)
			{
				cout << "*";
			}
			else if (Map[j][i] == 0)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return;
}

void Input(int* Temp)
{
	*Temp = _getch();
}

void Move(int* Temp, int* PlayerX, int* PlayerY)
{
	if (*Temp == 'w')
	{
		*PlayerY-=1;
	}
	if (*Temp == 'a')
	{
		*PlayerX-=1;
	}
	if (*Temp == 'd')
	{
		*PlayerX+=1;
	}
	if (*Temp == 's')
	{
		*PlayerY+=1;
	}
}

int main()
{
	int Temp;
	int PlayerX = 1;
	int PlayerY = 1;

	for (;;)
	{
		PrintMap(&PlayerX, &PlayerY);

		Input(&Temp);

		Move(&Temp, &PlayerX, &PlayerY);
	}

	return 0;
}