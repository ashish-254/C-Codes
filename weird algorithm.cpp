#include<iostream>
using namespace std;
int main()
{
	long int n;
	int i;
	cin>>n;
	//i=1;
	while(1)
	{	cout<<n<<" ";
		if(n==1)
		break;
		
		if(n%2==0)
		n=n/2;
		else
		n=n*3+1;
		
	}
}
