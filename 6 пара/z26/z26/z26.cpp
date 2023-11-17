/*Вычислить значение многочлена для заданного n в точках хi  [х0; хm]
(хi = х0 + iх, i = 0, 1, …) двумя способами: суммируя элементы по возрастанию
степени x и по схеме Горнера. Посчитать количество операций сложения и умножения в том и другом случае.
*/

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	int n, Sum = 0, Mul1 = 0, Mul2 = 0, min = 1;
	double x0 = 1, xm = 5, dx = 0.5, S1 = 5, S2 = 0, Pow = 1;

	cout << "n=";
	cin >> n;

	for (x0; x0 <= xm; x0 += dx)
	{
		Pow = 1;
		Mul1 = 0;
		Mul2 = 0;
		Sum = 0;
		S1 = 5;
		S2 = 0;

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= 2 * i - 2; j++)
			{
				Pow *= x0;
			}

			for (int j = 1; j <= n; j++)
			{
				min *= -1;
			}

			S1 += min * i * (Pow * x0);
			S2 += min * i * Pow;

			Mul1 += 3 * i - 1;
			Mul2 += 3 * i - 2;

			Sum += 2;
		}
		cout << "|" << setw(15) << S1 << "|" << setw(15) << S2 * x0 + 5 << "|" << endl;
	}

	cout << endl;

	if (Mul2 != 0)
		Mul2 ++;

	cout << "Sum1=" << Sum << endl;
	cout << "Mul1=" << Mul1 << endl;

	cout << "Sum2=" << Sum << endl;
	cout << "Mul2=" << Mul2 << endl;

	return 0;
}