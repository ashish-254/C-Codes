#include<iostream>
using namespace std;
class copy
{private:
	int a,b,c,d;
 public:
 	copy(int e,int f)
 	{a=e;
 	b=f;
	}
	copy(copy &s)
	{
	c=s.a;
	d=s.b;
	}
	void display(){
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl<<"d="<<d;	
	}
};

int main()
{
	int e,f;
	cout<<"enter 2 number: ";
	cin>>e>>f;
	copy s2(e,f);
	s2.display();
	copy s3(s2);
	s3.display();
	return 0;
}
