// 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>   // cout
#include <windows.h> // CreateThread()
#include <conio.h>   // _getch()
#include <ctime>

using namespace std;
volatile int Putin,Medvedev,Nikolaev;

DWORD WINAPI citytherad1(LPVOID);
DWORD WINAPI citytherad2(LPVOID);
DWORD WINAPI citytherad3(LPVOID);
DWORD WINAPI citytherad4(LPVOID);
DWORD WINAPI citytherad5(LPVOID);

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "ѕредседатель избирательного комитета\n";
	
	HANDLE citythread[5];
	Putin=0;
	Medvedev=0;
	Nikolaev=0;
	srand(time(0)); 
	citythread[0]=CreateThread(NULL,0,citytherad1,NULL, 0, NULL);
	citythread[1]=CreateThread(NULL,0,citytherad2,NULL, 0, NULL);
	citythread[2]=CreateThread(NULL,0,citytherad3,NULL, 0, NULL);
	citythread[3]=CreateThread(NULL,0,citytherad4,NULL, 0, NULL);
	citythread[4]=CreateThread(NULL,0,citytherad5,NULL, 0, NULL);

	DWORD dwWaitResult = ::WaitForMultipleObjects(5,citythread,true, INFINITE );

	cout <<"Putin:"<<Putin<<endl;
	cout <<"Medvedev:"<<Medvedev<<endl;
	cout <<"Nikovaev:"<<Nikolaev<<endl;

	return 0;

}

DWORD WINAPI citytherad1(LPVOID t)
{
	cout << "m\n";
	srand(time(0)); 
	for (int t=0;t<500;t++)
	{
		int res=rand()%3+1;
		if (res == 1 )
		{
			Putin++;	
		}
		if (res == 2 )
		{
			Medvedev++;	
		}
		if (res == 3 )
		{
			Nikolaev++;	
		}
	}

	return 0;
}
DWORD WINAPI citytherad2(LPVOID t)
{
	cout << "s\n";
	srand(time(0)); 
	for (int t=0;t<500;t++)
	{
		int res=rand()%3+1;
		if (res == 1 )
		{
			Putin++;	
		}
		if (res == 2 )
		{
			Medvedev++;	
		}
		if (res == 3 )
		{
			Nikolaev++;	
		}
	}

	return 0;
}
DWORD WINAPI citytherad3(LPVOID t)
{
	cout << "n\n";
	srand(time(0)); 
	for (int t=0;t<500;t++)
	{
		int res=rand()%3+1;
		if (res == 1 )
		{
			Putin++;	
		}
		if (res == 2 )
		{
			Medvedev++;	
		}
		if (res == 3 )
		{
			Nikolaev++;	
		}
	}

	return 0;
}
DWORD WINAPI citytherad4(LPVOID t)
{
	cout << "t\n";
	srand(time(0)); 
	for (int t=0;t<500;t++)
	{
		int res=rand()%3+1;

		if (res == 1 )
		{
			Putin++;	
		}
		if (res == 2 )
		{
			Medvedev++;	
		}
		if (res == 3 )
		{
			Nikolaev++;	
		}
	}

	return 0;
}
DWORD WINAPI citytherad5(LPVOID t)
{
	cout << "y\n";
	srand(time(0)); 
	for (int t=0;t<500;t++)
	{
		int res=rand()%3+1;

		if (res == 1 )
		{
			Putin++;	
		}
		if (res == 2 )
		{
			Medvedev++;	
		}
		if (res == 3 )
		{
			Nikolaev++;	
		}
	}

	return 0;
}

