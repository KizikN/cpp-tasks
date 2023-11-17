#include<iostream>
#include<math.h>

/*Определить, есть ли среди первых четырех цифр дробной части заданного 
положительного вещественного числа, цифра 9. */

using namespace std;

int main()
{
	double n,a,b,c,d;
	cout << "n=";
	cin >> n;
	n = n * 10000;
	n = trunc(n);
	n = fmod(n, 10000);
	cout << n << endl;

	a = fmod(n, 10);
	cout << a << endl;
	b = trunc(fmod(n, 100)/10);
	cout << b << endl;
     c = trunc(fmod(n, 1000) / 100);
	 cout << c << endl;
	d = trunc(n/1000);
	cout << d << endl;
	if (a == 9 || c == 9 || b == 9 || d == 9)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}