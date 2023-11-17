#include<iostream>
#include<math.h>

/*Дано натуральное n. Верно ли, что это число содержит ровно k одинаковых цифр?*/

using namespace std;

int main()
{
	int n, k, n1, ch;
	cout << "n=";
	cin >> n;
	cout << "k=";
	cin >> k;
	ch = 0;

	for (int i = 0; i <= 9; i++)
	{
		n1 = n;
		while (n1 > 0)
		{
			if (i == n1 % 10)
				ch++;

			n1 = n1 / 10;
		}
		if (ch == k)
			break;
		else
			ch = 0;
	}
	if (ch == k)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}