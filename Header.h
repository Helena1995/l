#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Money
{
private:
	long rubley;
	unsigned char kopeek;

public:
	void setMoney(long newRubley, unsigned char newKopeek);
	long getRubley();
	unsigned char getKopeek();
	Money operator+(Money &plusMoney);
	Money operator-(Money &minusMoney);
	Money operator*(const int &mulMoney);

	bool operator< (Money& someMoney);
	bool operator> (Money& someMoney);
	bool operator<= (Money& someMoney);
	bool operator>= (Money& someMoney);
	bool operator== (Money& someMoney);
	bool operator!= (Money& someMoney);
	
	void print();

};
