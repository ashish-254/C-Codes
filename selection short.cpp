#include<iostream>
using namespace std;
void selection(int list[],int lb,int ub, int max)
{
	int i,j,k,small,temp;
	for(i=lb;i<ub-1;i++)
	{
		small=list[i];
		for(j=i+1;j<ub;j++)
		{
			if(small>list[j])
			{
				temp=small;
				small=list[j];
				list[j]=temp;
			}
		}
		list[i]=small;
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
	cout<<"selection short"<<endl;
	cout<<"enter unshorted array"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	selection(a,0,5,5);
	return 0;
}
