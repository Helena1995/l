#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
class book
{
private:
	std::string name;
	int year;

public:
	void set_book(book new_book);
	void set_name(const char * new_name);
	void set_year(const int new_year);
	void get_info();
};

void book::set_book(book new_book)
{
	this->name=new_book.name;
	this->year=new_book.year;
	return;
}

void book::set_name(const char * new_name)
{
	this->name=new_name;
	return;
}
void book::set_year(const int new_year)
{
	this->year=new_year;
	return;
}
void book::get_info()
{
cout << this->name << "(" << this ->year << ")"<< endl;
	return;
}
