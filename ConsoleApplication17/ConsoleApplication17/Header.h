#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class IdCard
{
private:
	int number;
	string dateExpire;
public:
	void setNumber(int newNumber);
	int getNumber();
	void setDateExpire(string newDateExpire);
	string getDateExpire();
	void print();
};

class Employee;

class Department
{
private:
	string name;
	Employee* head;
public:
	void setName(string newName);
	string getName();
	void setHead(Employee* newHead);
	Employee* getHead();
	void print();

};

class Employee
{
private:
	string position;
	IdCard* card;
	int room;
	Department* departament;
public:
	string name;
	void setPosition(string newPosition);
	string getPosition();
	void setIdCard(IdCard* newIdCard);
	IdCard* getIdCard();
	void setRoom(int newRoom);
	int getRoom();
	void setDepartment(Department* newDepartment);
	Department* getDepartment();
	void print();

};