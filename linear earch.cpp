#include<iostream>
#include<conio.h>
using namespace std;
int search(int[],int,int,int,int);
int main()
{
       //clrscr();
       int j,lb,ub,list[5],max,item;
       cout<<"enter the array:"<<endl;
       for(int i=0;i<5;i++)
       {
	cin>>list[i];
	}
	cout<<"enter lb, ub, max and item:"<<endl;
	cin>>lb>>ub>>max>>item;
	j=search(list,lb,ub,max,item);
	cout<<"no of index is "<<j;
	//reverse(lb,ub,list,max);
	//getch();
	return 0;
}


int search(int list[],int lb,int ub,int max,int item)
{	int i;
	for(i=lb;i<ub;i++)
	{
		if(list[i]==item)
		{
			return i+1;
		}
		
	}
	return 0;
}	

