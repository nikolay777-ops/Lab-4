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
	const int N = 5, M = 4;
	int	arr[N][M];
	srand(time(NULL));
	long long Composition = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
		arr[i][j] = rand() % 30 - 2;
		cout << arr[i][j] << "\t";
		}
	cout << endl;
	}
	for (int i=0; i < M; ++i)
	{
		for (int j=0; j < N; ++j)
		{
			if ( (i>j) && (arr[i][j] > 0) )
			{
			Composition *= arr[i][j];
			}
		}
	}
	cout<<endl;
	cout<<"Composition of matrix members under main diagonal  = "<< Composition;
	getch();
	return 0;
}
