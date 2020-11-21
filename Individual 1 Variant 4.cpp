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
	const int SIZE = 10;
	int arr[SIZE];
	srand(time(NULL));
	int helper;
 /*
	for (int i = 0; i < SIZE; i++){
		 cout << "[" << i + 1 << "]" << ": ";
		 cin >> arr[i];
	}
  */
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 55;
	}
	/* ”пор€дочивание массива по убыванию */
	for (int i = SIZE; i > 1; i--)
	{
		for(int j = 0; j < i; j++)
		{
		   if(arr[j] > arr[j+1])
		   {
				helper = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = helper;
		   }
		}
	cout << arr[i] << endl;
	}
	getch();
	return 0;
}
