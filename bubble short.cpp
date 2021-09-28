#include<iostream>
using namespace std;
void bubble(int list[],int lb,int ub, int max)
{
	int i,j,temp,k;
	for(i=lb;i<ub-1;i++)
	{
		for(j=lb;j<ub-1-i;j++)
		{
			if(list[j]>list[j+1])
			{
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
			}
		}
	}
	
	cout<<"\n shorted array is \n";
	for(k=lb;k<ub;k++)
	{
		cout<<list[k]<<endl;
	}
}

int main()
{
	int i,a[5];
	cout<<"bubble short"<<endl;
	cout<<"enter unshorted array"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	bubble(a,0,5,5);
	return 0;
}
