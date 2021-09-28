#include<iostream>
using namespace std;
void insertion(int list[],int lb,int ub, int max)
{
	int i,j,k,flag,temp;
	for(i=lb+1;i<ub;i++)
	{
		flag=list[i];
		for(j=i-1;j>=lb;j--)
		{
			if(flag<list[j])
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
	cout<<"enter unshorted array"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	insertion(a,0,5,5);
	return 0;
}	
