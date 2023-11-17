/*�� ���� �������� A(N) � B(M), ������������� �� �����������, �������� ��
���� �������� ������ �(�), ����� ������������� �� �����������, � �������
�������� �������� ������� �������, �������� �� ��� �������� ������� �������.*/

#include<iomanip>
#include<iostream>
#include<clocale>

using namespace std;


int main()
{
    //------------------------------------------------------------
    const int N = 5 , M = 5;
    //------------------------------------------------------------
    int  A[N] = { 0 }, B[M] = {0}, C[N] = { 0 }, num = 0, var = 0;

    enum class Massiv {WithConst = 1,  WithRand = 2, ByUser = 3 };

    setlocale(LC_ALL, "rus");

    cout << " �������� ��� �������������:\n"
        << (int)Massiv::WithConst << ".�����������\n"
        << (int)Massiv::WithRand << ".���������� �������\n"
        << (int)Massiv::ByUser << ".������ �������\n";
    cout << "����� ������ ������ �������� ���������\n  ��� �����: ";

    int ch = 0;   cin >> ch;

    switch ((Massiv)ch)
    {
        case Massiv::WithConst:
        { 
            for (int i = 0; i < N; i++) A[i] = i;
            for (int i = 0; i < M; i++) B[i] = i;
            break;
        }

        case Massiv::WithRand :
        { 
            for (int i = 0; i < N; i++) A[i] = rand() % 100 - 50;
            for (int i = 0; i < M; i++) B[i] = rand() % 100 - 50;
            break;
        }

        case Massiv::ByUser :
        {   
            for (int i = 0; i < N; i++)
            {
                cout << "A[" << i + 1 << "]=";
                cin >> A[i];
            }
            cout << endl;
            for (int i = 0; i < M; i++)
            {
                cout << "B[" << i + 1 << "]=";
                cin >> B[i];
            }
            break;
        }

        default:  cout << "��������� �����������" << endl;
    }

    for (int i = 0; i < N; i++)
    {
        num = i;

        for (int j = i; j < N; j++)
            if (A[num] > A[j])
                num = j;

        var = A[i];
        A[i] = A[num];
        A[num] = var;
    }

    for (int i = 0; i < M; i++)
    {
        num = i;

        for (int j = i; j < M; j++)
            if (B[num] > B[j])
                num = j;

        var = B[i];
        B[i] = B[num];
        B[num] = var;
    }

    for (int i = 0; i < N; i++)   
        cout << setw(3) << A[i];
    cout << endl;

    for (int i = 0; i < M; i++)
        cout << setw(3) << B[i];
    cout << "\n" << " New massiv:" << endl;

    int ni = 0, nj = 0, nk = 0;
    while (ni < N)
    {
        if (A[ni] < B[nj])
        {
            C[nk] = A[ni];
            nk++;
            ni++;
        }
        if (A[ni] > B[nj])
        {
            if (nj < M)
                nj++;
            else
            {
                C[nk] = A[ni];
                nk++;
                ni++;
            }
        }
        if (A[ni] == B[nj])
            ni++;
    }

    for (int i = 0; i <= nk - 1; i++)
        cout << setw(3) << C[i];
    return 0;
}
