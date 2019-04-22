#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
class spell
{
public:
string name;
int dhp;
int dmp;
};

class mage
{
private:
	int hp;
	int mp;
string name;
public:
	void init( int newhp,  int newmp,  string newname);
	string getname();
	void say(string text);
	int cast( spell & spl, mage & target );
	void hit(spell & spl);

};