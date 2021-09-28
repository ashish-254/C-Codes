#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
	
		void showdata()
	{
		cout<<"a="<<a<<"\nb="<<b;
	}
	complex operator -()
	{
		complex temp;
		temp.a=-a;
		temp.b=-b;
		return temp;
	}
	
};
int main()
{complex c1,c2;
c1.setdata(10,4);
//c2.setdata(15,6);
c2=-c1;
c2.showdata();
return 0;
}
