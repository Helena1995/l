// зад 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "зад 10.h"
#include <string>
#include <math.h>

void Time::setTime(long newHours, unsigned char newMinutes )
{
	this->hours=newHours;
	this->minutes=newMinutes;
}
long  Time::getHours()
{
	return this->hours;
}
unsigned char Time::getMinutes()
{
	return this->minutes;
}
Time Time::operator+(Time& plusTime)
{
	using namespace std;
	Time result;
	result.hours=this->hours+plusTime.hours;

	result.minutes=this->minutes+plusTime.minutes;
	if (result.minutes>=60) 
	{
		result.minutes=(result.minutes-60);
		result.hours=(result.hours+1);
	}; 
	return result;
}
Time Time::operator-(Time& minusTime)
{
	using namespace std;
	Time result;
	result.hours=this->hours-minusTime.hours;
	int r;
	r=this->minutes-minusTime.minutes;
	if (r<0) 
	{
		result.minutes=r+60;
		result.hours=(result.hours-1);
	}
	else result.minutes=r; 
	return result;
}
Time Time::operator*(int mulTime)
{
	using namespace std;
	Time result;
	result.hours=this->hours*mulTime;
	int t=this->minutes*mulTime;
	if (t>60)
	{
		int AddMinutes=t % 60;
		int AddHours=t / 60;
		result.hours=result.hours+ AddHours;
		result.minutes =  AddMinutes;
	}
	else
		result.minutes=t;
 

	return result;

}

bool Time::operator< (Time& minusTime)
{
	using namespace std;
	Time result;
	if (this->hours<minusTime.hours) 
		return true;
		else if (this->hours>minusTime.hours) 
		return false;
	    else if (this->minutes<minusTime.minutes) 
		return true;
		else if (this->minutes>=minusTime.minutes) ;
		return false;
}
bool Time::operator> (Time& minusTime)
{
	using namespace std;
	Time result;
	if (this->hours<minusTime.hours) 
		return false;
		else if (this->hours>minusTime.hours) 
		return true;
	    else if (this->minutes>minusTime.minutes) 
		return true;
		else if (this->minutes<=minusTime.minutes) ;
		return false;
}

void Time::print()
{
	cout <<this->hours<<"h "<<(int)this->minutes<<"m "<<endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
	Time *arr, temp;

	cout<<"n = ";

arr = new Time[10]; 

	arr[0].setTime(2,0);
	arr[1].setTime(2,30);
	arr[2].setTime(3,0);
	arr[3].setTime(3,30);
	arr[4].setTime(4,0);
	arr[5].setTime(4,30);
	arr[6].setTime(5,0);
	arr[7].setTime(5,30);
	arr[8].setTime(6,0);
	arr[9].setTime(6,30);




    // Сортировка массива пузырьком
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        arr[i].print();
    }
    cout << endl;

	Time a,b,c,d,e,f;
	Time x,n,m;
	bool z,w;

	a.setTime(2,30);
	b.setTime(2,30);
	c.setTime(0,40);
	d.setTime(3,0);
	e.setTime(3,20);
	f.setTime(2,40);

		x=a+b;
		n=a-c;
		m=a*5;
		z=a<e;
		w=a<f;



	x.print();
	n.print();
	m.print();

		if (a>e)
	{
		a.print();
			cout << ">"; 
			e.print();
	} else
	{
		a.print();
			cout << "<="; 
			e.print();
	}
	if (a>f)
	{
		a.print();
			cout << ">"; 
			f.print();
	} else
	{
		a.print();
			cout << "<="; 
			f.print();
	}

	system("pause");
	return 0;

}

