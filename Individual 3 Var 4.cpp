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
	int sizeofArrayCol = 0;
	int sizeofArrayRow = 0;
	cout << "Enter Size of Array Rows SizeofArrayRow = " ;
	cin >> sizeofArrayRow;
	cout << "Enter Size of Array Columns SizeofArrayCol = ";
	cin >> sizeofArrayCol;
	float** ptrarray = new float* [sizeofArrayRow];
	for (int i = 0; i < sizeofArrayRow; i++)
	{
		ptrarray[i] = new float [sizeofArrayCol];
	}
	for (int i = 0 ; i < sizeofArrayRow; i++)
	{
		for (int j = 0; j < sizeofArrayCol; j++)
		{
			ptrarray[i][j] = (rand() % 10 + 1) / float((rand() % 10 + 1));
			cout.setf(ios::fixed);
			cout.precision(3);
			cout << ptrarray[i][j]  << "\t";
		}
	cout << endl;
	}
	for (int i = 0; i < sizeofArrayRow ; i++)
	{
		for (int j = 0; j < sizeofArrayCol; j++)
		{
			for (int k = 0; k < sizeofArrayCol  - 1; k++)
			{
				if (ptrarray[i][k] < ptrarray[i][k+1])
				{
					float helper = ptrarray[i][k];
					ptrarray[i][k] = ptrarray[i][k+1];
					ptrarray[i][k+1] = helper;
				}
			}
		}
	}
	equalityline();
	for (int i = 0; i < sizeofArrayRow; i++)
	{
		for (int j = 0; j < sizeofArrayCol; j++)
		{
			cout << ptrarray[i][j] << "\t";
		}
	cout << endl;
	}
	for (int i = 0; i < sizeofArrayRow; i++)
	{
		delete []ptrarray[i];
	}
	getch();
	system("pause");
	return 0;
}

