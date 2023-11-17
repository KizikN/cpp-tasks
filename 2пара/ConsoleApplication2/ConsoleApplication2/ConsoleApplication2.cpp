#include <iostream>  // cin cout

using namespace std;

void main()
{
	bool  a, b, c, d;

int  a1, b1, c1;
cout << "a= ";
cin >> a1;
cout << "b= ";
cin >> b1;
cout << "c= ";
cin >> c1;

d = bool(a1) * (!(bool(b1) * (!bool(c1))));
cout << d << endl;

}

