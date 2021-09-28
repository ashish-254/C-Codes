#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long int n;
	int b;
	int a[10^9],i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(j=1;j<n;j++)
	{
		if(a[j]<a[j-1])
		{
			b=b+a[j-1]-a[j];
		}
	}
cout<<b;
}
