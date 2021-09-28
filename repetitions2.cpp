#include<iostream>
#include<string.h>
using namespace std;
int main()
{//char s[10^6];
 long int i;
 long int a=1,c=1,g=1,t=1;
 long int big=0,big1,big2,b;
 string s;
  cin>>s;
 for(i=0;s[i]!='\0';i++)
 {
 	if(s[i]=='A'&&s[i+1]=='A')
 	{a++;
	}
	else
	{
		a=1;
	}
	if(s[i]=='G'&&s[i+1]=='G')
	{g++;
	}
	else
	{
		g=1;
	}
	if(s[i]=='C'&&s[i+1]=='C')
	{c++;
	}
	else
	{
		c=1;
	}
	if(s[i]=='T'&&s[i+1]=='T')
	{t++;
	}
	else
	{
		t=1;
	}
 
//cout<<a<<endl<<c<<endl<<g<<endl<<t<<endl;
if(a>c)
{
	big1=a;
}
else
{
	big1=c;
}
if(g>t)
{
	big2=g;
}
else
{
	big2=t;
}
if(big1>big2)
{
	big=big1;
}
else
{
	big=big2;
}
if(big>b)
{
	b=big;
}
}
cout<<b;
return 0;
}
