#include<iostream>

using namespace std;

/*������ ����� n � ������� unsigned short int. ������� �� ����� ��������
0-��, 7-�� � 15-�� ����� ������������� � ��� ����� �����. ��������� ���������.
������������� ���� 7, 8. ������� � ��������� ���������.*/

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