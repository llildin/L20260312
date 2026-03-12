#include <iostream>
#include "GameEngine.h"
using namespace std;

struct InnerType
{
	int A;
	int B;
};

struct CustomDataType
{
	int A;
	int B;
	float C;
	bool D;
	InnerType Inner;
};

struct AActor
{
public:
	int X;
	int Y;

	void Add()
	{

	}
	 
	void Move()
	{
		this->Add();
	}
};

int main()
{
	/*
	CustomDataType Data;
	CustomDataType* P = &Data;
	Data.A = 1;
	cout << P << endl; // 주소 출력
	cout << (*P).A << endl; // Data.A
	cout << P->A << endl; // Data.A
	*/

	AActor* Player = nullptr;
	Player = new AActor();

	Player->Move();

	delete Player;
	Player = nullptr;

	return 0;

	bool bIsRunning = true;
	//Gameloop
	while (bIsRunning) //frame
	{
		int KeyCode = Input();
		Tick(KeyCode);
		Render();
	}

	return 0;
}