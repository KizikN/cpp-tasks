/*Дано натуральное число n.
Найти четверки простых чисел меньших n, принадлежащих одному десятку. (через решето Эратосфена)*/

#include<iostream>

using namespace std;

int main()
{
	//------------------
	const int n = 10000;
	//------------------
	int A[n - 1] = { 0 }, Quat[4] = { 0 };
	

	for (int i = 2; i <= n; i++)
		A[i - 2] = i;
	
	for (int i = 2; i <= n / 2; i++)
	{
		if(A[i - 2] != -1)
		for (int step = 2 * i; step <= n; step += i)
		{
			A[step - 2] = -1;
		}
	}

	for (int i = n - 2; i >= 0; i--)
	{
		if (A[i] != -1)
		{
			if (Quat[0] == 0)
				Quat[0] = A[i];
			else
				for(int j = 1; j <= 3; j++)
					if (Quat[j] == 0)
					{
						Quat[j] = A[i];

						if (Quat[j - 1] / 10 != Quat[j] / 10)
						{
							Quat[0] = A[i];
							Quat[1] = 0;
							Quat[2] = 0;
							Quat[3] = 0;
						}

						break;
				    }
		}

		if (Quat[3] != 0)
			break;
	}

	for (int i = 0; i < 4; i++)
		cout << Quat[i] << endl;
	return 0;
}