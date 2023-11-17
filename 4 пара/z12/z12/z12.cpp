/*Определить, равна ли k-ая цифра дробной части заданного положительного
вещественного числа сумме n предыдущих цифр.*/

#include<iostream>
#include<math.h>


using namespace std;

int main()
{
	double n, k, ch;
	int chp = 0, chk, sn = 0;
	cout << "ch=";
	cin >> ch;
	cout << "k=";
	cin >> k;
	cout << "n=";
	cin >> n;

	for (int i = 1; i <= k - n - 1; i++)
		ch = ch * 10;

	chp = int(ch);

	for (int i = 1; i <= n + 1; i++)
		chp = chp * 10;

	for (int i = 1; i <= n + 1; i++)
		ch = ch * 10;

	chp = int(ch) - chp;

	cout << chp << endl;

	if (k - n > 0 && n > 0 && chp > 0)
	{
		chk = chp % 10;
		chp = chp / 10;

		for (int i = 0; i < n; i++)
		{
			sn += chp % 10;
			chp = chp / 10;
		}

		if (chk == sn)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else
		cout << "Incorrect data" << endl;

	return 0;
}