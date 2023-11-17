/*Дано четырехзначное натуральное n. Верно ли, что это число содержит 
ровно две цифры 7?*/

#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n, n1, a;
	int k = 0;
	cout << "n=" ;
	cin >> n;
	n1 = n;
	a = n1 % 10;
	n1 = n1 / 10;
	if (a == 7)
		k += 1;
	a = n1 % 10;
	n1 = n1 / 10;
	if (a == 7)
		k += 1;
	a = n1 % 10;
	n1 = n1 / 10;
	if (a == 7)
		k += 1;
	a = n1 % 10;
	n1 = n1 / 10;
	if (a == 7)
		k += 1;
	if (k == 2)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}