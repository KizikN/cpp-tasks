/*5 variant*/

#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
	int M = 0, N = 0, num = 0;
	long long M0 = 1;
	cout << "M=";
	cin >> M;
	cout << "N=";
	cin >> N;

	if (N < 9)
		cout << "N must be more or equal 10!!!" << endl;
	else
	{
		int A[100] = { 0 };

		for (int i = 0; i < N; i++)
			M0 *= M;
			
		while (M0 > 0)
		{
			A[num] = M0 % 10;
			M0 /= 10;
			num++;
		}

		for (int i = num - 1; i >= 0; i--)
			cout << A[i] << " ";
		cout << endl;
	}
	return 0;
}