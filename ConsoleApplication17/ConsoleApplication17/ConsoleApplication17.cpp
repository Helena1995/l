// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "Header.h"
#include <string>


void Department::setName(string newName)
{
	this->name=newName;
	return;
}
string Department::getName()
{
	return this->name;
}

void Department::setHead(Employee* newHead)
{
	this->head=newHead;
	return;
}

Employee* Department::getHead()
{
	return this->head;
}

void Department::print()
{
	cout <<"Dpt: "<<this->name << " \nGlava: " << endl;
	this->head->print();
	return;
}

void Employee::setPosition(string newPosition)
{
	this->position=newPosition;
	return;
}

string Employee::getPosition()
{
	return this ->position;
}

void Employee:: setIdCard(IdCard* newIdCard)
{
	this->card=newIdCard;
	return;
}

IdCard* Employee::getIdCard()
{
	return this ->card;
}
void Employee::setRoom(int newRoom)
{
	this->room=newRoom;
	return;
}
int Employee::getRoom()
{
	return this->room;
}
void Employee::setDepartment(Department* newDepartment)
{
	this->departament=newDepartment;
	return;
}
Department* Employee::getDepartment()
{
	return this->departament;
}

void Employee:: print()
{
	cout <<"Emp: "<<this->name<< " Pos: "<<this->position <<" sidit v "<< this->room << " Dpt: "<<this->departament->getName() << endl;
	return;
}
void IdCard::setNumber(int newNumber)
{
	this->number=newNumber;
	return;
}

int IdCard:: getNumber()
{
	return this->number;
}
void IdCard:: setDateExpire(string newDateExpire)
{
	this->dateExpire=newDateExpire;
	return;
}

string IdCard:: getDateExpire()
{
	return this->dateExpire;
}
void IdCard::print()
{
	cout <<"id: "<<this->number << endl;
	return;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Department dA, dB;
	
	Employee Ivan, Petr, Sidor, Evgenia, Misha, Alex;
	IdCard id101;
	IdCard id5016;
	IdCard id5018;
	IdCard id201;
	IdCard id5022;
	IdCard id5019;
	id101.setNumber(101);
	id5016.setNumber(5016);
	id5018.setNumber(5018);
	id201.setNumber(201);
	id5022.setNumber(5022);
	id5019.setNumber(5019);

	dA.setName("Dpt Razrabotka");
	Ivan.setPosition("Glava depratamenta");
	dA.setHead(&Ivan);
	Petr.setPosition("Glavniy razrabotchik");
	Sidor.setPosition("razrabotchik");
	Ivan.setDepartment(&dA);
	Petr.setDepartment(&dA);
	Sidor.setDepartment(&dA);
	Ivan.setRoom(101);
	Petr.setRoom(102);
	Sidor.setRoom(102);
	Ivan.setIdCard(&id101);
	Petr.setIdCard(&id5016);
	Sidor.setIdCard(&id5018);
	

	dB.setName("Admini");
	Misha.setPosition("Director");
	dB.setHead(&Misha);
	Alex.setPosition("Zam Directora");
	Evgenia.setPosition("Glavniy buhgalter");
	Misha.setDepartment(&dB);
	Alex.setDepartment(&dB);
	Evgenia.setDepartment(&dB);
	Misha.setRoom(201);
	Alex.setRoom(202);
	Evgenia.setRoom(202);
	Misha.setIdCard(&id201);
	Alex.setIdCard(&id5022);
	Evgenia.setIdCard(&id5019);
	Ivan.name="Vano";
	Petr.name="Petun";
	Sidor.name="Sidor";
	Evgenia.name="Jeka";
	Misha.name="Mike";
	Alex.name="Alex";

	dA.print();
	dB.print();
	Misha.print();
	Alex.print();
	Evgenia.print();
	Ivan.print();
	Petr.print();
	Sidor.print();

	system("pause");
	
	return 0;
}

