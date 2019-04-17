#include <iostream>
using namespace std;
void vvod(int a[], const int n)
{
	int i;
	for(i=1; i<=n; i++) cin>>a[i];
}
int max(int a[], const int n)
{
	int max, i;
	max=0;
	for(i=1; i<=n; i++) 
		if (a[i]>max) max=a[i];
	return max;
}
int min(int a[], const int n)
{
	int i, min;
	min=100;
	for(i=1; i<=n; i++)
		if(a[i]<min) min=a[i];
	return min;
}
void main()
{
	int a[100], i, s, n=5;
	cin >>n;
	vvod(a, n);
	s=min(a, n)+max(a, n);
	cout <<"s="<<s<<endl;
}



/*  
#include <iostream>
using namespace std;
void vvod(int a[][], const int n)
{
int i, j;
for (i=1; i<=n; i++)
for (j=1; j<=n; j++)
cin >>a[i][j];
}







*/
