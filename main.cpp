#include <iostream>
#include <time.h>
using namespace std;

/*
* 주머니(Actor_BP_Pocket)에 45개의 공(Actor_BP_BALL)
* 그 중 6개를 뽑는 프로그램
*/

// 공 섞기
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
		cout << i+1 << "번째 공 : " << Actor_BP_Pocket[i] << endl;
	}

	return 0;
}