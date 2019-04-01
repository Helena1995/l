#include "stdafx.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "Fractions.h"


int _tmain(int argc, _TCHAR* argv[])
{

	 Fractions a,b;
	a.first=b.first=1;
	a.second=b.second=3;
a.Umnozhenie(b);
cout << a.first <<"/" << a.second<<endl;

Fractions n,m;
	n.first=m.first=1;
	n.second=m.second=3;
n.Slozhenie(m);
cout << n.first <<"/"<<n.second<<endl;

Fractions i,j;
	i.first=j.first=1;
	i.second=j.second=3;
i.Vuchitanie(j);
cout << i.first <<"/"<<i.second<<endl;

Fractions proverka;
proverka= proverka.bolhe (a,n,i);

cout << proverka.first <<"/" << proverka.second << "bolshe vseh";


    system ("pause");
    return 0;

}

//main
//{
//	Frac a,b;
//	a=3/5;
//	b=5/8;
//	Frac a[10];
//	for (i=1; i<10; i++)to 9
//		for j= 1 to 10-i
//			if Bolshe(a[i],a[i+1]) 
//			{
//				swap(a[i],a[i+1];
//			};
//
//
//	
//
//}
