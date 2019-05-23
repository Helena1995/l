// 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>   // cout
#include <windows.h> // CreateThread()
#include <conio.h>   // _getch()

using namespace std;
volatile int i;

DWORD WINAPI thread2(LPVOID);

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "First thread\n";
	HANDLE thread = CreateThread(NULL,0,thread2,NULL, 0, NULL);
	cout << "More data from first thread\n";
	 i=1;
	while (true)
	{
	if (i==1)
	{
		i=-1;
	}
	else 
	{
		i=1 ;
	}
	}
	cout << "Even more data from first thread\n";
	_getch();
	return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
	cout << "Second thread\n";
	while(true)
	{
		cout <<i;
	}
	return 0;
}

