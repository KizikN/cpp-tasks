/*ƒано натуральное число n.
Ќайти четверки простых чисел меньших n, принадлежащих одному дес€тку. (через решето Ёратосфена)*/

#include<iostream>

using namespace std;

int main()
{
	int n, a = 0, b = 0, c = 0, d = 0, k = 0;
	cout << "n=";
	cin >> n;


	while (n > 0)
	{
		a = 0, b = 0, c = 0, d = 0;
		k = (n / 10) * 10;

		for (int i = k; i <= n; i++)
		{
			for (int j = 2; j <= i; j++)
			{
				if (i % j == 0)
				{
					if (j == i)
						if (a == 0)
							a = j;
						else
							if (b == 0)
								b = j;
							else
								if (c == 0)
									c = j;
								else
									if (d == 0)
										d = j;

					break;
				}
			}
		}

		if (a != 0 && b != 0 && c != 0 && d != 0)
		{
			cout << a << " " << b << " " << c << " " << d << endl;
			break;
		}

		n = (n / 10) * 10;
		n--;
	}

	if (a == 0 || b == 0 || c == 0 || d == 0)
		cout << "Incorrect data" << endl;

	return 0;
}