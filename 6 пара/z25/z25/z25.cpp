/* 12345678910111213..., в которой выписаны все натуральные числа*/

#include<iostream>

using namespace std;

int main()
{
	int k, d = 0, i = 0, n = 0;

	cout << "k=";
	cin >> k;

	while (n != k)
	{
		n++;
		i++;
		d = i;

		while (d / 10 != 0)
		{
			if (n == k)
			{
				d = d % 10;
				break;
			}

			d /= 10;
			n++;
		}
	}
	cout << "d=" << d << endl;

	return 0;
}