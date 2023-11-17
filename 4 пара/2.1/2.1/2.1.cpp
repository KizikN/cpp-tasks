#include <iomanip>  
#include <iostream>

using namespace std;


void main()
{
	int n, sum=0;
	cout << "n=";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int k = i * 30;
		cout << setw(5) << k;
		sum += k;
	}
	cout << endl << " s1= " << sum << endl << endl;


}


