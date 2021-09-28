#include<iostream>
using namespace std;
int main()
{
	int long x[2*10^5+1],n;
	int c=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(int i=1;i<n;i++)
	{
		if(x[i]<x[i-1])
		{
		c=c+(x[i-1]-x[i]);	
		}
	}
	cout<<c;
	return 0;
}
