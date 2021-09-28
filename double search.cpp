#include<iostream>
#include<conio.h>
using namespace std;
int search(int[],int,int,int);
int main()
{
       int j,lb,ub,list[5],item;
       cout<<"enter the array:"<<endl;
       for(int i=0;i<5;i++)
       {
	cin>>list[i];
	}
	cout<<"enter lb, ub and item:"<<endl;
	cin>>lb>>ub>>item;
	j=search(list,lb,ub,item);
	cout<<"no of index is "<<j;
	return 0;
}

int search(int list[],int lb,int ub,int item)
{
	int max,min,j,mid;
	max=ub;
	min=lb;
	while(1)
	mid=(max+min)/2;
	if(list[mid]==item)
	{
		//cout<<mid;
		return mid;
	}
	else
	{
		if(list[mid]<item)
		{
			min=mid+1;
		}
		else{
			max=mid-1;
		}
	}
}



