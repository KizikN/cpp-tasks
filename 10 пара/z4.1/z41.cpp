/*Из заданного текста удалить те символы, которые встречаются в нем ровно
два раза.*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	//===================
	const int Max = 5;
	//===================
	int N1 = 0, N2 = -1;
	char Text[Max + 1];

	cout << " Enter your text:" << endl;
	cin.getline(Text, Max + 1);

	for (int i = 0; i < Max; i++)
	{
		N1 = i;
		N2 = -1;

		for (int j = 0; j < Max; j++)
		{
			if (Text[j] == '^')
				j++;
			
				if (j == i)
					j++;

				if (Text[j] == Text[N1])
					if (N2 == -1)
						N2 = j;
					else
					{
						N2 = -1;
						break;
					}
		}

		if (N2 != -1)
		{
			Text[N1] = '^';
			Text[N2] = '^';
		}
	}


	int off = 0;

	for (int i = 0; i < Max; i++)
	{
		if (Text[i] == '^')
			off += 1;
		else
		{
			Text[i - off] = Text[i];
			Text[i] = '^';
		}

	}
	
	for (int i = 0; i < Max; i++)
		if (Text[i] == '^')
			Text[i] = ' ';

	cout << Text << endl;

	return 0;
}