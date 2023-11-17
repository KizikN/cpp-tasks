#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double x, y,R;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "R=";
	cin >> R;
	if (x >= 0 && y <= 0 && x * x + y * y <= R*R  || x <= 0 && x >= -R && y >= 0 && y <= R && (x + R) * (x + R) + (y - R) * (y - R) >= R*R)
	{
			cout << "Matching" << endl;
	}
	else
		cout << "Doesn't matching" << endl;
	return 0;
}