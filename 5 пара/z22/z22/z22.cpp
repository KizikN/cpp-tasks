#include<iostream>
#include<math.h>
#include<iomanip>

/*Составить программу вычисления значений функции в точках хi  [х0; хn], хi= х0
+ iх, i = 0,1, …, воспользовавшись формулами разложения элементарных функций
в ряд Тейлора с точностью  = 10 – 6
. Вывести на экран необходимое количество
слагаемых в каждом случае. Сравнить результаты со значениями функции в этих
точках, вычисленных с помощью встроенных функций системы программирования.
*/

using namespace std;

int main()
{
	double x0 = -0.4, xn = 0.6, dx = 0.1, xr1 = 0, xr2 = 0, x = 1;
	int i = 2;

	cout << "x0=" << x0 << endl;
	cout << "xn=" << xn << endl;
	cout << "dx=" << dx << endl;

	cout << endl;
	cout << left << setw(5) << "x0" << setw(10) << "| res1" << setw(10) << " | res2" << endl;
	while (x0 != xn)
	{
		xr1 = 1 / pow(1 + x0, 2) - 1;

		while ( abs( abs(xr1) - abs(xr2) )> 0.000001 )
		{
			x *= -x0;
			xr2 += i * x;
			i += 1;
		}

		if (abs(x0) < 0.01)
			x0 = 0;

		cout << left << setw(5) << x0 << "|" << setw(10) << xr1 << "|" << setw(10) << xr2 << endl;

		x0 += dx;
		x = 1;
		xr2 = 0;
		i = 2;
	}

	return 17;
}