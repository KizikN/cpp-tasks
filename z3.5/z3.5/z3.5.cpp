/*. Заданы две правые треугольные целочисленные матрицы А, B.
Найти матрицу С = A * B.*/
/*variant 5*/

#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(NULL));

	//-----------------
	const int n = 5;
	//-----------------

	int A[(n + 1) * n / 2] = { 0 }, B[(n + 1) * n / 2] = { 0 }, C[n][n] = { 0 }, just = 0;

	for (int i = 0; i < (n + 1) * n / 2; i++)
	{
		A[i] = rand() % 101;
		B[i] = rand() % 101;
	}

	//-------------------------------------------
	cout << " Array A:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "|";

		for(int k = n - i; k < n; k++)
			cout << "  0 ";

		for (int j = i; j < n; j++)
		{
			cout << setw(3) << A[just] << " ";
			just++;
	    }

		cout << "|" << endl;
	}

	just = 0;

	cout << endl << " Array B:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "|";

		for (int k = n - i; k < n; k++)
			cout << "  0 ";

		for (int j = i; j < n; j++)
		{
			cout << setw(3) << B[just] << " ";
			just++;
		}

		cout << "|" << endl;
	}
	//-------------------------------------------

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
				C[i][j] = 0;
			else
			{
				int Sum = 0;
				int A0 = i * n - i * (i - 1) / 2;
				int B0 = j + i * (n - 1) - i * (i - 1) / 2;
				int N = i;
				while (N <= j)
				{
					Sum += A[A0] * B[B0];
					A0++;
					B0 += n - 1 - N;
					N++;
				}
				C[i][j] = Sum;
			}
		}
	}
		
	//----------------------------------------
	cout << endl << " Array C:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "|";
		for (int j = 0; j < n; j++)
			cout << setw(5) << C[i][j] << " ";
		cout << "|" << endl;
	}
	//----------------------------------------

	return 0;
}