#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

void main()
{
	const int N = 3;
	int a[N][N];
	srand(time(NULL));
	cout << " massiv a" << endl;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			a[i][j] = rand() % 10;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
//	int max = g;
	for (int i = 0; i < N; i++)
	{
		cout << endl << a[i][i] << endl;
		if (i++ > i)
			cout << i-- << endl;

	}

}
