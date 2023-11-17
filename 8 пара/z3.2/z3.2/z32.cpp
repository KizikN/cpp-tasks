/*ѕолучить квадратную матрицу B пор€дка n, каждый элемент bij которой равен максимуму из элементов исходной квадратной матрицы ј пор€дка n,
расположенных в закрашенной области (включа€ границы),
определ€емой соответствующими индексами i, j по рисунку.

ћатрицу A сгенерировать случайно.
 орректность работы алгоритма продемонстировать на матрице 6х6.
Ѕыстродействие продемонстрировать на матрице 10000х10000 без вывода матрицы на экран (такой большой массив рекомендуетс€ объ€вить в глобальной области видимости).*/

#include<iomanip>
#include<iostream>
#include<clocale>
#include<time.h>

using namespace std;

//-----------------------------------
const int n = 6;
int A[n][n] = { 0 }, B[n][n] = { 0 }, I[n] = { 0 }, J[n] = { 0 };
//-----------------------------------

int main()
{
	srand(time(NULL));

	for (int x = 0; x < n; x++)
	{
		cout << "|";
		for (int y = 0; y < n; y++)
		{
			A[x][y] = rand() % 100 - 50;
			cout << setw(3) << A[x][y] << " ";
		}
		cout << "|" << endl;
	}
	
	cout << "<< Success";
	cout << endl;

	for (int i = 0; i < n; i++)
	{
			J[i] = A[0][i];
			for (int x = 1; x < n; x++)
			{
				if ( J[i]< A[x][i])
					J[i] = A[x][i];
			}
	}

	cout << "<< Success" << endl;

	for (int j = 0; j < n; j++)
	{
		I[j] = A[j][0];
		for (int y = 1; y < n; y++)
		{
			if (I[j] < A[j][y])
				I[j] = A[j][y];
		}
	}

	cout << "<< Success" << endl;

	for (int j = 0; j < n; j++)
	{
		cout << "|";
		for (int i = 0; i < n; i++)
		{
			int maxji = 0;
			
			if (I[j] < J[i])
			B[j][i] = J[i];
			else 
			B[j][i] = I[j];

			cout << setw(3) << B[j][i] << " ";
		}
		cout << "|" << endl;
	}
	cout << "<< Success" << endl;

	return 0;
}