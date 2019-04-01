// Задание 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "reader.h"
#include <string>




int _tmain(int argc, _TCHAR* argv[])
{
	book x,y,z;
	x.set_name("War and Peace");
	x.set_year(1996);
	x.get_info();
	
	y.set_name("Lord of the Rings");
	y.set_year(2001);
	y.get_info();

	z.set_name("Harry Potter and the Philosopher's Stone");
	z.set_year(2001);
	z.get_info();

	reader a,b,c;
	a.age(20);
	a.fio("Ivanov Ivan Ivanovich");
	a.set_book(z);
	a.get_info();

	b.age(21);
	b.fio("Pertov Petr Petrovich");
	b.set_book(y);
	b.get_info();

	c.age(22);
	c.fio("Sidorov Sidr Sodorovich");
	c.set_book(x);
	c.get_info();

	system ("pause");
	return 0;
}


