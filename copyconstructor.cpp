#include<iostream>
using namespace std;
class as
{
	private:
		int a,b,c,d;
	//	int b;
	//	int c;
	//	int d;
	public:
		as(int e,int f,int g,int h)
		{a=e;
		 b=f;
		 c=g;
		 d=h;
		}
      as(as &s)
		{c=s.a;
		 d=s.b;
		}
		void show()
		{
		cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl<<"d="<<d<<endl;
		}
 };
int main()
{
	as s2(4,8,12,14);
	s2.show();
	as s3(s2);
	s3.show();
return 0;
}


