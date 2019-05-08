// zadanie 10 dz.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "Header.h"
#include <string>


void Money::setMoney(long newRubley, unsigned char newKopeek)
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
Money Money::operator+(Money &plusMoney)
{
	using namespace std;
	Money result;
	result.rubley=this->rubley+plusMoney.rubley;

	result.kopeek=this->rubley+plusMoney.kopeek;
	if (result.kopeek>=100) 
	{
		result.kopeek=(result.kopeek-100);
		result.rubley=(result.rubley+1);
	}
	return result;
}
Money Money::operator-(Money &minusMoney)
{
	using namespace std;
	Money result;
	result.rubley=this->rubley-minusMoney.rubley;
	int r;
	r=this->kopeek-minusMoney.kopeek;
	if (r<0) 
	{
		result.kopeek=r+100;
		result.rubley=(result.rubley-1);
	}
	else 
{
	result.kopeek=r; 
}
	return result;
}


Money Money::operator*(const int &mulMoney)
{
	using namespace std;
	Money result;
	result.rubley=this->rubley*mulMoney;
	result.kopeek=this->kopeek*mulMoney;
		if (result.kopeek >100)
		{
		result.rubley=(result.rubley+1);
		result.kopeek = (result.kopeek-100);
		}
		return result;
}

bool Money::operator< (Money& someMoney)
{
	if (this->rubley<someMoney.rubley) 
		return true;
	else return false;
}
bool Money::operator> (Money& someMoney)
{
	if (this->rubley>someMoney.rubley) 
		return true;
	else return false;

}
bool Money::operator<= (Money& someMoney)
{
	if (this->rubley<=someMoney.rubley) 
		return true;
		else return false;
}
bool Money::operator>= (Money& someMoney)
{
	if (this->rubley>=someMoney.rubley) 
		return true;
	else return false;

}
bool Money::operator== (Money& someMoney)
{
	if (this->rubley==someMoney.rubley) 
		return true;
		else return false;
}
bool Money::operator!= (Money& someMoney)
{
	if (this->rubley!=someMoney.rubley) 
		return true;
	else return false;
}
void Money:: print()
{
	cout <<this->getRubley()<< "," <<(int)this->getKopeek() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	Money a,b,z,n;

	a.setMoney(2,5);
	b.setMoney(2,5);
	z.setMoney(3,6);

	cout << "Summa: " << a.getRubley()+b.getRubley()<< "."<< a.getKopeek()+b.getKopeek()<< endl;
	cout << "Raznost: " << a.getRubley()-b.getRubley()<< "."<< a.getKopeek()-b.getKopeek()<< endl;
	cout << "Umnozhenie" << endl;
	int f= 4;
	n=z*f;
	bool s1 = a>b;
	cout << "Sravnenie"<<s1<<endl; 
	bool s2 = a<b;
	cout << "Sravnenie2"<<s2<<endl;
	bool s3 = a<=z;
	cout << "Sravnenie3"<<s3<<endl;
	bool s4 =a>=z;
	cout << "Sravnenie4"<<s4<<endl;
	bool s5 =z==a;
	cout << "Sravnenie5"<<s5<<endl;
	bool s6 =z!=b;
	cout << "Sravnenie6"<<s6<<endl;

	system("PAUSE");
};

