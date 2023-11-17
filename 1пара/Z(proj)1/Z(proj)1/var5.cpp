
#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>


using namespace std;

int main()
{
	double x;
	cout << "x=";
	cin >> x;
	double y = pow((pow(log(1+x),2)+cos(pow(M_PI*x,3))),sin(x))+pow((pow(pow(M_E,x),2)+cos(pow(M_E,x))+sqrt(1/x)),(1/x));
	cout << "y=" << y << endl;

	return 0;
}