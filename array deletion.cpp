#include<iostream>
using namespace std;
void deletion(int list[],int lb,int ub,int max,int place)
{
	if(ub>max)
	{
		cout<<"error";
		return ;
	}
	if(place>max)
	{
		cout<<"error";
		return ;
	}
	
	int i,j,k;
	for(i=place-1;i<=ub;i++)
	{
		int temp;
		//temp=list[place];
		list[i]=list[i+1];
	}
}

void traverse(int list[],int lb,int ub,int max )
{
		if(ub>max)
	{
		cout<<"error";
		return ;
	}
	
	for(int i=lb;i<ub;i++)
	{
		cout<<list[i]<<endl;
	}
}


int main()
{
	int i,p,a[5];
	cout<<"deletion\n";
	cout<<"enter array "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the place for performing deletion:"<<endl;
	cin>>p;
	cout<<"before deletion, array is:"<<endl;
	traverse(a,0,5,5);
	deletion(a,0,5,5,p);
	cout<<"after deltion, array is :"<<endl;
	traverse(a,0,5,5);
}
