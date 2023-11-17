#include <math.h>                // modf
#include <iostream>              // cin cout

using namespace std;

void main()
{
	double value, int_value, frac_value;
	int a,b,c,d,e, f,g,h,k,s;

	cout << "vvod value=";
	cin >> value;
	frac_value = modf(value, &int_value);
	cout << "frac_value =" << frac_value << endl;

	a = frac_value * 10;
	b = frac_value * 100;
	c = b % 10;
	d = frac_value * 1000;
	e = d % 10;
	f = frac_value * 10000;
	g = f % 10;
	h = frac_value * 100000;
	k = h % 10;
	cout << a << " " << c << " " << e << " " << g << " " << k << endl;
	s = a + c + e + g + k;
	

		cout <<s <<endl;
}
