#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
	public:
		virtual void display1()=0;
		
		virtual void display2()=0;
};

class B: public A
{
	private:
		int c;
	public:
		void display1()
		{
			cout<<"this is display 1"<<endl;
		}
		void display2()
		{
			cout<<"this is display 2";
		}
};

int main()
{
B obj;
obj.display1();
obj.display2();
return 0;
}
