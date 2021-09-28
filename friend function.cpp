#include<iostream>
using namespace std;
class base
{
	private:
		int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;b=y;
		}
		void showdata()
		{
			cout<<"\na="<<a<<"\nb="<<b;
		}
		friend base add(base d); 
};

base add(base d)
{
	base c;
	c.a = d.a+d.a;
	c.b = d.b+d.b;
	cout<<"a is "<<c.a<<"\nb is "<<c.b;
	return c;
}

int main()
{
	base com,ak;
	com.setdata(5,4);
	ak=add(com);
	com.showdata();
	ak.showdata();
	return 0;
}
