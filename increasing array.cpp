#include<iostream>
using namespace std;
int main()
{
	int n,i,k,a=0,j;
	long long int x[10^9];
	cin>>n;
	cout<<"n is "<<n<<endl;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(j=1;j<n;j++)
	{
		if(x[j]<x[j-1])
		{
			a=a+x[j-1]-x[j];
		}
	}
	cout<<a;
	return 0;
}
