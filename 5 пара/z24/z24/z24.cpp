/*¬водитс€ последовательность целых чисел. ќпределить количество элементов
в наиболее длинной подпоследовательности подр€д идущих чисел, представл€ющих собой числа ‘иббоначи.*/


#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n , x , xp , xpp , am = 0 , ammax = 0;
	
	cout << "n=";
	cin >> n;

	if (n > 1)
	{
		cout << "x1=";
		cin >> xpp;
		cout << "x2=";
		cin >> xp;

		for (int i = 2; i < n; i++)
		{
			cout << "x" << i + 1 << "=";
			cin >> x;

			if (xpp == 0)
				am = 1;

			if (xpp == 0 && xp == 1)
				am = 2;

			if (am > 1 && x == xp + xpp)
				am += 1;
			else
			{
				if (am > ammax)
					ammax = am;

				am = 0;
			}

			xpp = xp;
			xp = x;
		}

		if (xpp == 0)
			am = 1;

		if (xpp == 0 && xp == 1)
			am = 2;

		if (am > ammax)
			ammax = am;

		cout << "max = " << ammax << endl;
	}

	else
	{
		if (n == 1)
		{
			cout << "x1=";
			cin >> x;

			if (x == 0)
				ammax = 1;

			cout << "max = " << ammax << endl;
		}
		else
			cout << "Incorrect data" << endl;
	}

	return 12;
}