/*
#include <iostream>
using namespace std;

int main()
{
	int Pocket[45] = { 0, };

	srand(time(NULL));

	//Initialize
	for (int i = 0; i < 45; i++)
	{
		Pocket[i] = i + 1;
	}

	//Shuffle
	for (int i = 0; i < 45 * 10; i++)
	{
		int FirstIndex = rand() % 45;
		int SecondIndex = rand() % 45;

		int Temp = Pocket[FirstIndex];
		Pocket[FirstIndex] = Pocket[SecondIndex];
		Pocket[SecondIndex] = Temp;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << Pocket[i] << ", ";
	}
	return 0;
}
*/