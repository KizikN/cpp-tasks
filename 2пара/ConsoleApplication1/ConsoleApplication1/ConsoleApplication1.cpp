
#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	int a, b, c, d, n;
	cout << "enter n=";
	cin >> n;
	if ((n >= 1000) && (n < 10000))
	{
		a = n / 1000 % 10;
		b = n / 100 % 10;
		c = n / 10 % 10;
		d = n % 10;
		cout << a << b << c << d << endl;
		if (((a == 9) && (b == 9) && (c == 9)) || ((a == 9) && (b == 9) && (d == 9)) || ((b == 9) && (c == 9) && (d == 9)) || ((a == 9) && (c == 9) && (d == 9)))
		{
			cout << "true";
		}
		else
		{
			cout << "false";
		}
	}
	else
	{
		cout << "error";
	}
	
}
