#include<iostream>

using namespace std;

/*Задано число n в формате unsigned short int. Вывести на экран значения
0-го, 7-го и 15-го битов представления в ЭВМ этого числа. Объяснить результат.
Инвертировать биты 7, 8. Вывести и объяснить результат.*/

int main()
{
	unsigned short int n, n0, n7, n15;
	cout << "n=";
	cin >> n;

	if ((n & 1 )== 1)
		n0 = 1;
	else
		n0 = 0;


	if ((n & 128 )== 128)
		n7 = 1;
	else
		n7 = 0;


	if ((n & 32768) == 32768)
		n15 = 1;
	else
		n15 = 0;


	cout << "n0=" << n0 << endl;
	cout << "n7=" << n7 << endl;
	cout << "n15=" << n15 << endl;
	n = n ^ 128;
	n = n ^ 256;
	cout << "n=" << n << endl;
	return 0;
}