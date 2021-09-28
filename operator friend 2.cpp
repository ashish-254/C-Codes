#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setdata()
		{
			cout<<"enter 2 numbers: ";
			cin>>a>>b;
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
c1.setdata();
c2.setdata();
c3=c1+c2;
c1.showdata();cout<<"\n\n";
c2.showdata();cout<<"\n\n";
c3.showdata();cout<<"\n\n";
return 0;
}
