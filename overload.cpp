#include<iostream>
#include<conio.h>
using namespace std;
int fun();
int fun(int x,int y);
int fun(int x);
int main()
{
	fun();
	fun(5,6);
	fun(5);
	return 0;	
}

int fun()
{int x,y; 
cout<<"enter the value";
cin>>x>>y;
cout<<"sum="<<x+y<<endl;
return 0;
}

int fun(int x,int y)
{
	cout<<"sum="<<x+y<<endl;
	return 0;
}

int fun(int x)
{
	cout<<"multiplication="<<x*x<<endl;
	return 0;
}
