#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int s, t;
	double x,y;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter t" << endl;
	cin >> t;
	cout << "Enter s" << endl;
	cin >> s;
	if(s<=0)
		cout << "wrong result" << endl;
	else
	{
		if (x < -1 || sqrt(pow(x, 3) + 1) + log(s) == 0)
			cout << "wrong result" << endl;
		else
		{
			y = pow(x, t) / (sqrt(pow(x, 3) + 1) + log(s));
			cout << "y=" << y << endl;
		}
	}
	return 0;
}
