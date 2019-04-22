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
	void set(int newRubley, int newKopek);
	long getRubley();
	unsigned char getKopeek();
	void addMoney(Money& someMoney );
	void withdrawMoney(Money& someMoney);
	void mulMoney(Money& someMoney);
	void print();

};
