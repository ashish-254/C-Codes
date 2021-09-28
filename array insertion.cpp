#include<iostream>
using namespace std;
void insertion(int list[], int lb, int ub, int max,int item, int place)
{	
	int temp,i,j,k;
	if(place+1>ub)
	{
		cout<<"error";
		return ;
	}
	if(ub>max)
	{
		cout<<"error";
		return ;
	}
	for(i=place;i<ub;i++)
	{
		temp=list[i];
		list[i]=item;
		item=temp;
	}
	
	cout<<"\nafter insertion \n";
	for(k=lb;k<ub;k++)
	{
		cout<<list[k]<<endl;
	}
}


int main()
{
	int a[5],i,p,n;
	cout<<"insertion\n";
	cout<<"enter array"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\nenter place(between 1 to 5) and number \n";
	cin>>p>>n;
	insertion(a,0,5,5,n,p-1);
	return 0;
}
