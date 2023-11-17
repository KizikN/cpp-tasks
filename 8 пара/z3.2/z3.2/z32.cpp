/*�������� ���������� ������� B ������� n, ������ ������� bij ������� ����� ��������� �� ��������� �������� ���������� ������� � ������� n,
������������� � ����������� ������� (������� �������),
������������ ���������������� ��������� i, j �� �������.

������� A ������������� ��������.
������������ ������ ��������� ����������������� �� ������� 6�6.
�������������� ������������������ �� ������� 10000�10000 ��� ������ ������� �� ����� (����� ������� ������ ������������� �������� � ���������� ������� ���������).*/

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