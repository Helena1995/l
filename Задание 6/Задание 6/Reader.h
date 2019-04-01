#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include "book.h"

using namespace std;
class reader: public book
{
private:
	std::string Fio;
	int Age;
	
public:
	void fio(const char * new_fio);
	void age(const int new_age);
	void get_info();
};
void reader::fio(const char * new_fio)
{
	this->Fio=new_fio;
	return;
}
void reader::age(const int new_age)
{
	this->Age=new_age;
	return;
}
void reader::get_info()
{
cout << this->Fio << "(" << this ->Age << ")";
book::get_info();
	return;
}
