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

int _tmain()
{
	srand(time(NULL));
	int I = 0;
	int J = 0;
	cout << "I = ";
	cin >> I;
	cout << "J = ";
	cin >> J;
	int JJ = J;
	int JJJ = J;
	int JJJJ = J;
	int** arr = new int* [I];
	for (int i = 0; i < I; i++)
	{
		arr[i] = new int [J];
	}
	for (int i = 0; i < I; i++)
	{
		for (int j = 0; j < J; j++)
		{
			arr[i][j] = rand() % 20 ;
			cout << arr[i][j] << "\t";
		}
	cout << endl;
	}
	cout << endl;
	int element = 0;
	if (I < J)
	{
		for (int i = 0; i < I; i++)
		{
			for (int j = 0 ; j < J - 1; j++)
			{
				cout << arr[i][j] << "\t";
				element++;
			}
		J--;
		cout << endl;
		}
	cout << endl;
	}
	else if ( (I > J) || (I == J) )
	{
		for (int i = 0 ; i < I; i++)
		{
			for (int j = 0 ; j < J ; j++)
			{
				cout << arr[i][j] << "\t";
				element++;
			}
		J--;
		cout << endl;
		}
	cout << endl;
	}
	cout << "Quality of space for odnomer massive Mass = " << element  << endl;
	int* mass = new int [element];
	int k = 0;
	if (I < JJ)
	{
	int m = 1;
	for (int i = I - 1; i >= 0; i--)
	{
		for (int j = 0 ; j < m; j++)
		{
			mass[k] = arr[i][j];
			k++;
		}
	m++;
	}
   }
	else if (I > JJ || I == JJ)
   {
	for (int i = 0 ; i < I; i++)
	{
		for (int j = JJ - 1 ; j > -1; j--)
		{
			mass[k] = arr[i][j];
			k++;
		}
		JJ--;
	}
   }
	cout << "\n\n";
	int helper = 0;
	for (int i = element; i > 0; i--)
	{
		for(int j = 0; j < i; j++)
		{
		   if(mass[j] < mass[j+1])
			 {
				helper = mass[j+1];
				mass[j+1] = mass[j];
				mass[j] = helper;
			 }

		}
	}
	k = 0;
   if (I == JJJ || I > JJJ)
  {
		for (int i = 0; i < I ; i++)
		{
			for (int j = 0; j < JJJ ; j++)
			{
				arr[i][j] = mass[k];
				k++;
			}
		JJJ--;
		}
  }
   else if (I < JJJ)
   {
		for (int i = 0; i < I; i++)
		{
			for (int j = 0 ; j < JJJ - 1; j++)
			{
				arr[i][j] = mass[k];
				k++;
			}
		JJJ--;
		}
   }
	for (int k = 0; k < element; k++)
	{
		cout << mass[k] << "\t";
	}
	cout << endl << endl;
	for (int i = 0; i < I; i++)
	{
		for (int j = 0 ; j < JJJJ; j++)
		{
			cout << arr[i][j] << "\t";
		}
	cout << endl;
	}
	for (int i = 0; i < I; i++)
	{
		delete []arr[i];
	}
	getch();
	return 0;
}
