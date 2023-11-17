#include <stdlib.h>      
#include <time.h>
#include <iostream>
#include<iomanip>
using namespace std;

void main()
{
	const int N = 15;
	int a[N];
	int b[N];

	srand(time(NULL));

	cout << endl << " massiv a" << endl;
	for (int i = 0; i < N; i++)
		a[i] = rand() % 10 - rand() % 10;
	for (int i = 0; i < N; i++)
	{
		cout << setw(3) << a[i];
	}
	cout << endl;
	int j = 0;
	for (int i = 0; i < N; i++)
	{
		if (a[i] > 0)
		{
			b[j] = a[i];
			j++;
		}
	}
		for (int i = 0; i < N; i++)
		{
			if (a[i] < 0)
			{
				b[j] = a[i];
				j++;
			}
		}

		for (int i = 0; i < j; i++)
		{
			cout << setw(3) << b[i];
		}
		cout << endl;
}
