#include<iostream>
using namespace std;
int main()
{ cout<<" welcome";
try{
	throw 10;
	cout<<"\nin try";
	
}
catch(int e)
{
cout<<" exception no"<<e;}
cout<<" last line";

}
