#include<iostream>
using namespace std;
class fact
{ private:
	int x;
	public:
	fact(int a){
		x=a;		
	}
	void factorial()
	{ int y=1,i;
		for(i=x;i>=1;i--)
		{
			y=i*y;
		}
		cout<<"factorial of "<<x<<" is "<<y<<endl;
	}
};

int main()
{ int a;
cout<<"enter the number"<<endl;
cin>>a;
fact f(a);
f.factorial();
return 0;
}
