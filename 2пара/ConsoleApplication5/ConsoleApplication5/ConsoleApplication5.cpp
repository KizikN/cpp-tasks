
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


	



		int N = int(a == 9) + int(b == 9) + int(c == 9) + int(d == 9);

		if (N > 2) cout << "Yes" << endl;
		else         cout << "No" << endl;


	}
	else
	{
		cout << "error";
	}

}
