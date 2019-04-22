// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mage.h"
void mage:: init( int newhp,  int newmp,  string newname)
{
	this->hp=newhp;
	this->mp=newmp;
	this->name=newname;
	return;
}
string mage::getname()
{
	return this->name;
}
void mage::say(string text)
{
	cout <<this->name<<" say: " << text << endl;
	return;
}

int mage::cast(spell & spl,mage & target)
{
	if (this->hp>0)
	{
		cout << this->name << " hit with " << spl.name << " enemy " << target.getname() << endl;
		target.hit(spl);
	} else
	{
		cout << this->name << " is loser and cant spell";
	}
		return 0;
}

void mage::hit(spell & spl)
	 {
		 this->hp= this->hp - spl.dhp;
		 if (this->hp<0) this->say(" i am loser ");
		 }

int _tmain(int argc, _TCHAR* argv[])
{
	spell bolt, drain;
	bolt.dhp=40;
	bolt.dmp=0;
	bolt.name="bolt";

	drain.dhp=50;
	drain.dmp=70;
	drain.name="molniya";

	mage vanya,boris;
	vanya.init(100,100,"Ã¿√ VANKgA");
	boris.init(100,100,"Ã¿√ BORKA");
	
		vanya.cast(bolt, boris);
		boris.cast(drain, vanya);
		vanya.cast(drain, boris);
		boris.cast(bolt, vanya);
		vanya.cast(bolt, boris);
		boris.cast(drain, vanya);

		system ("pause");
	
	return 0;
}

