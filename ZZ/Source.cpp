/*”чены из иститута времени привезли из эксп в прошлое прив рук погибшей цивил (рукопись зашифр). »сторики в качестве вводной инф смогли шифр цезар€ (кажда€ буква замен 
при сдвиге на 3 а мен€етс€ на г),  какой сдвиг был исп не известно*/

//аьа шаь стЄцвюьпнщ атш€а аьеыь эьщбеца эыщьфцатщйыбл ьдтышб

#include<iostream>
using namespace std;

void Change(const int N, char n, char Str[], char StrN[]);

int main()
{
	setlocale(LC_ALL, "RU");
	const int N = 70;
	char Str[] = "аьа шаь стЄцвюьпнщ атш€а аьеыь эьщбеца эьщьфцатщйыбл ьдтышб\0", StrN[N] = {0};

	for (char n = 0; n <= 32; n++)
	{
		Change(N, n, Str, StrN);

		for (int i = 0; StrN[i] != '\0'; i++)
			cout << StrN[i];
		cout << "\n";
	}

	return 666;
}

void Change(const int N, char n, char Str[], char StrN[])
{
	char Symb = 0;
	char ABC[] = "абвгдеЄжзийклмнопрстуфхцчшщъыьэю€\0";

	for (int i = 0; Str[i] != '\0'; i++)
	{
		Symb = Str[i];
		if (Symb != ' ')
		{
			for (int j = 0; ABC[j] != '\0'; j++)
			{
				if (Symb == ABC[j])
				{
					if (j + n > 32)
						Symb = ABC[j + n - 33];
					else
						Symb = ABC[j + n];

					break;
				}
			}
		}
		StrN[i] = Symb;
	}
}