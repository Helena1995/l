#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "Header.h"
#include <string>

void Money::set(int newRubley, int newKopeek)
{
	this->rubley=newRubley;
	this->kopeek=newKopeek;
}
long Money:: getRubley()
{
	return this ->rubley;
	
}
unsigned char Money:: getKopeek()
{
	return this->kopeek;
}
void Money:: addMoney(Money& someMoney )
{
	using namespace std;
	Money result;
	result.rubley=this->rubley+someMoney.rubley;

	result.kopeek=this->rubley+someMoney.kopeek;
	if (result.kopeek>=100) 
	{
		result.kopeek=(result.kopeek-100);
		result.rubley=(result.rubley+1);
	}; 
}
void Money:: withdrawMoney(Money& someMoney)
{
	using namespace std;
	Money result;
	result.rubley=this->rubley-someMoney.rubley;
	int r;
	r=this->kopeek-someMoney.kopeek;
	if (r<0) 
	{
		result.kopeek=r+100;
		result.rubley=(result.rubley-1);
	}
	else result.kopeek=r; 
}
void Money::mulMoney(Money& someMoney)
{
	using namespace std;
	Money result;
	result.rubley=this->rubley*someMoney.rubley;
	int t=this->kopeek*someMoney.kopeek;
	if (t>100)
	{
		int AddMoney=t % 100;
		int AddMoneys=t / 100;
		result.rubley=result.rubley+ AddMoney;
		result.kopeek =  AddMoneys;
	}
	else
		result.kopeek=t;
}
void Money:: print()
{
	cout <<this->getRubley()<< "," <<(int)this->getKopeek() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	Money a,b;
	
	a.set(2,5);
	b.set(2,5);

	cout << "Summa: " << a.getRubley()+b.getRubley()<< "."<< a.getKopeek()+b.getKopeek()<< endl;
	cout << "Raznost: " << a.getRubley()-b.getRubley()<< "."<< a.getKopeek()-b.getKopeek()<< endl;
	cout << "Umnozhenie" <<a.getRubley()*b.getRubley()<<"."<<a.getKopeek()*b.getKopeek()<< endl;
	
	a.print();
	b.print();


	system("PAUSE");
	return 0;
};
