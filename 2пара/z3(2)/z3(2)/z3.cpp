#include<iostream>
#include<math.h>

/* Даны вещественные x1, x2, x3, x4. Поменять значения переменных так, чтобы
x1 >= x2 < x3 <= x4 */

using namespace std;
int main()
{
	double x1, x2, x3, x4, n;

	cout << "x1 = ";
	cin >> x1;
	cout << "x2 = ";
	cin >> x2;
	cout << "x3 = ";
	cin >> x3;
	cout << "x4 = ";
	cin >> x4;

	x1 < x2 ? (n = x1, x1 = x2, x2 = n) : (n = 0);
	x3 < x2 ? (n = x3, x3 = x2, x2 = n) : (n = 0);
	x4 < x2 ? (n = x4, x4 = x2, x2 = n) : (n = 0);

	x4 < x3 ? (n = x4, x4 = x3, x3 = n) : (n = 0);

	x3 == x2 ? (n = x1, x1 = x3, x3 = n) : (n = 0);
	
	x4 < x3 ? (n = x4, x4 = x3, x3 = n) : (n = 0);

	x2 == x3 ? (cout << "Wrong numbers" << endl) : (cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl);
	return 0;
}