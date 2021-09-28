#include<iostream>
using namespace std;
class complex
{private:
	int a,b;
 public:
 	~complex()
 	{cout<<"destructor";
	}
};
void fun()
{complex odj;
}

int main()
{fun();
return 0;

}
