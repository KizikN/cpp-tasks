#include<iostream>
#include<math.h>

/*���� a, b, c, d, e, f, s, t, u � ������������ �����. ����� (a, b), (c, d), (e, f) ��
����� �� ������ l, �������� ���������� sx + ty + u = 0. ������ l ��������� ��������� �� ��� �������������. 
����������, ����������� �� ����������� � ��������� (a, b), (c, d), (e, f) ����� �������������*/

using namespace std;

int main()
{
	double a, b, c, d, e, f, s, t, u , x1 , x2;
	cout << "Enter a,b,c,d,e,f,s,t,u" << endl;
	cin >> a >> b >> c >> d >> e >> f >> s >> t >> u ;
	
	if (a - c == 0)
		x1 = 0;
	else
	x1 = (b - d) / (a - c);

	if (a - e == 0)
		x2 = 0;
	else
	x2 = (b - f) / (a - e);

	if (x1 != x2 && b - x1 * a != b - x2 * a)
	{
		if (s * a + t * b + u < 0 && s * c + t * d + u < 0 && s * e + t * f + u < 0 || s * a + t * b + u > 0 && s * c + t * d + u > 0 && s * e + t * f + u > 0)
			cout << "The points belong to the same half-plane" << endl;
		else
			cout << "The points dont belong to the same half-plane" << endl;
	}
	else
		cout << "Points dont make a triangle" << endl;
	return 0;
}