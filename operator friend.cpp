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
	  friend complex operator +(complex,complex);
};
	complex operator +(complex c,complex d)
	{
		complex temp;
		temp.a= d.a+c.a;
		temp.b= d.b+c.b;
		return(temp);
	}
int main()
{complex c1,c2,c3;
c1.setdata(10,4);
c2.setdata(15,6);
c3=c1+c2;
c1.showdata();cout<<"\n\n";
c2.showdata();cout<<"\n\n";
c3.showdata();cout<<"\n\n";
return 0;
}
