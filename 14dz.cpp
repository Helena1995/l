// 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>   // cout
#include <windows.h> // CreateThread()
#include <conio.h>   // _getch()
#include <fstream>
#include <string>

using namespace std;
volatile int a,b;
string x,l;

DWORD WINAPI therad1(LPVOID);
DWORD WINAPI therad2(LPVOID);

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE thread[2];
	
	a=0;
	b=0;
	thread[0]=CreateThread(NULL,0,therad1,NULL, 0, NULL);
	thread[1]=CreateThread(NULL,0,therad2,NULL, 0, NULL);
	DWORD dwWaitResult = ::WaitForMultipleObjects(2,thread,true, INFINITE );

	cout <<"dz14_dune.txt:"<<a<<endl;
	cout <<"dz14_karenina.txt:"<<b<<endl;
	return 0;
}

DWORD WINAPI thread1(LPVOID t)
{
	cout << "dz14_dune.txt\n";
	std::ifstream x("dz14_dune.txt", std::ios::in | std::ios::_Nocreate);
	for (int x=0;x<500;x++)
		{
			++a;
		}
	return 0;
}
DWORD WINAPI thread2(LPVOID t)
{
	cout << "dz14_karenina.txt\n";
	std::ifstream l("dz14_karenina.txt", std::ios::in | std::ios::_Nocreate);
	for (int l=0;l<500;l++)
		{
			++b;
		}
	return 0;
}

