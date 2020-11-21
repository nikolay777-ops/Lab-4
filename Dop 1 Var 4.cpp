#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
using namespace std;
#include <iostream>
#include <conio.h>
#include <ctime>
void equalityline()
{
	for (int i = 0; i < 50; i++) {
	cout << "=";
	}
cout << endl;
}

int _tmain()
{
	srand(time(NULL));
	int N;
	cout << "Enter matrix order N = ";
	cin >> N;

	double*** ptrarray = new double** [2];
	for (int i = 0; i < 2; i++)
	{
		ptrarray[i] = new double* [N];
		for (int j = 0 ; j < N; j++)
		{
			ptrarray[i][j] = new double [N];
		}
	}
	for (int matrix = 0; matrix < 2; matrix++)    /* ÷икл заполнени€ 2х двумерных массивов */
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				ptrarray[matrix][i][j] = (rand() % 30 - 10) / double (rand() % 30 - 10);
				cout.setf(ios::fixed);
				cout.precision(3);
				cout << ptrarray[matrix][i][j] << "\t";
			}
		cout << endl;
		}
	equalityline();
	}
	for (int k = 0; k < N; k++)       /* ÷икл сортировки каждой строки 2й матрицы и соответственно первый элемент каждой строки будет наибольшим */
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N - 1; j++)
			{
				if (ptrarray[1][k][j] < ptrarray[1][k][j+1])
				{
					double helper = ptrarray[1][k][j];
					ptrarray[1][k][j] = ptrarray[1][k][j+1];
					ptrarray[1][k][j+1] = helper;
				}
			}
		}
	}
	for (int i = 0; i < N; i++)     /* ”множение элементов каждой строки 1й матрицы на наиб. значение каждой строки 2й матрицы */
	{
		for (int j = 0; j < N; j++)
		{
			ptrarray[0][i][j] *= ptrarray[1][i][0];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << ptrarray[0][i][j] << "\t";
		}
		cout << endl;
	}
	equalityline();
	for (int i = 0; i < N; i++)
	{
	delete []ptrarray[i];
	}
	getch();
	return 0;
}
