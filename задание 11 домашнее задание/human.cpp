#include "stdafx.h"
#include "humnew.h"
#include "egg.h"

void human::init(string newname, int newage) 
{
	this->name=newname;
	this->age=newage;
    return;
};
string human::getname() {
	   return (this->name);
};
 
int human::getage() {
	return (this->age);
};
 

void human::say(string text) {
	cout << "Human " <<this->name << " Say: " << text << endl;
    return;
};
 
void human::try_break_egg(egg * some_egg) {
	this->say("bil bil");
	bool result;
	result = some_egg->bricking(this->name);
	if (true==result)
		{
		this->say("razbil");
		}
	else 
		{
		this-> say (" is trying to break me ");
		}
    return;
};