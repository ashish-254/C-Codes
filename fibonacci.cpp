#include<iostream>
using namespace std;
class fibonacci
{
 private:
 int n;
 public:
  fibonacci(int a)
  {
   n=a;
   }
  void fibo();
};

void fibonacci::fibo()
{
 int a=0,b=1,c;
 cout<<a<<" "<<b<<" ";
 for(int j=1;j<n-1;j++)
 {  c=a+b;
    a=b;
    b=c;
    cout<<c<<" ";
 }
}

int main()
{ 
int n;
cout<<"enter the number: ";
cin>>n;
cout<<"\n fibonacci series of "<<n<<" is"<<endl;
fibonacci f(n);
f.fibo();
return 0;
}

