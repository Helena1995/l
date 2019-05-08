#include "stdafx.h"
#include "animal.h"
#include "egg.h"
 
void animal::setname(string name) 
{   this->name=name;
    return;
}
 
string animal::getname() {
    return this->name;
}
 

void animal::say(string text) {
	cout << "Animal " <<this->name << " Say: " << text << endl;
    return;
}

void animal::try_break_egg(egg * some_egg) {
	say(this->name + "bejala hvostikom mahnula");
	bool result;
	result = some_egg->bricking(this->name);
	if (true==result)
	{
		this-> say ("egg upalo i razbilos");
	}
	else
	{
		this-> say (" is trying to break me ");
	}
}

egg * animal::create_egg() {
	if (this->name == "chicken")
	{
		egg * retval;
		retval = new egg;
		retval->size=5;
		retval->weight=50;
		return(retval);}
	else
	{
		return(NULL);
	}
}
