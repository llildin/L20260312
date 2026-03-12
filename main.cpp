#include <iostream>
#include <time.h>
using namespace std;

void ChangeBall(int* BP_Pocket, int Size)
{
	srand((unsigned int)time(NULL));
	int Temp = 0;
	int FirstBall = 0;
	int SecondBall = 0;

	for (int i = 0; i < Size; i++)
	{
		BP_Pocket[i] = i + 1;
	}

	for (int i = 0; i < Size * 10; i++)
	{
		FirstBall = rand() % Size;
		SecondBall = rand() % Size;
		Temp = BP_Pocket[FirstBall];
		BP_Pocket[FirstBall] = BP_Pocket[SecondBall];
		BP_Pocket[SecondBall] = Temp;
	}
}

int main()
{
	int Size = 45;
	int* Actor_BP_Pocket = new int[Size];

	ChangeBall(Actor_BP_Pocket, Size);

	for (int i = 0; i < 6; i++)
	{
		cout << i+1 << "Ball : " << Actor_BP_Pocket[i] << endl;
	}

	delete[] Actor_BP_Pocket;
	Actor_BP_Pocket = nullptr;

	return 0;
}