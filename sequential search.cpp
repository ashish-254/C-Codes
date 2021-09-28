#include<iostream>
using namespace std;
int seq_srch(int list[],int lb,int ub,int max,int item)
{
	if(lb>ub||ub>max)
	{cout<<"error";
	return 0;
	}
	int i,n=-2;
	for(i=lb;i<ub;i++)
	{
		if(list[i]==item)
		{
			n=i;
			break;
		}
	}
	if(n==-2)
	{
		cout<<"item not found";
	}
	else
	{cout<<"item found at index "<<i+1;
	}
	return 0;
}

int main()
{
	int a[5],x,n,i;
	cout<<"enter numbers:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter number for search:"<<endl;
	cin>>x;
	seq_srch(a,0,5,5,x);
}
