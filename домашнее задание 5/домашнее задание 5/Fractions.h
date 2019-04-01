#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
 
using namespace std;
 
class Fractions {
	public:
long first;
unsigned short second;
 
public:
    Fractions () {
    }
 
    void var(long f,unsigned short s) {
        first=f;
        second=s;
    }
        
    void vvod() {
        cout << "MOD: "; cin >> first;
        cout << "DIV: "; cin >> second;
    }
 
    void vyvod(){
        cout << first << "." << second << endl;
    }
 
    void Slozhenie(Fractions b){
        this->first=this->first+b.first;
		this->second=this->second+b.second;
    }
 
    void Vuchitanie(Fractions b){
       this->first=this->first-b.first;
		this->second=this->second-b.second;
    }
 
	void Umnozhenie(Fractions b){

		this->first=this->first*b.first;
		this->second=this->second*b.second;
	}

	bool Bolshe(Fractions b){

		return true;
		if (first>second) cout <<"First >"<<first<<endl;
	}
 

	Fractions bolhe(Fractions a, Fractions b, Fractions c)
	{
		float i,l,j;
		i = a.second == 0 ? 0 : (float)a.first/(float)a.second;
		l = b.second ==0 ? 0 : (float)b.first/(float)b.second;
		j = c.second ==0 ? 0 : (float)c.first/(float)c.second;
		if (i > l && i > j) 
			return a; 
		else if (l > i && l > j) 
			return b;
		else 
			return c;
	}

   };
 
