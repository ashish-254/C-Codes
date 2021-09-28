#include<iostream>
using namespace std;

void selection(int list[],int lb,long int ub)
{
	int i,j,small,temp;
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
}
/* void traverse(int list[],int lb, long int ub)
 {
 	int i;
 	for (i=lb;i<ub;i++)
 	{
 		cout<<list[i]<<endl;
	 }
 }
*/
int check(int list[],int lb,long int ub)
{
	int i;
	long int j=1;
	for(i=lb;i<ub;i++)
	{
		if(list[i]!=j)
		{
			return j;
		}
		j++;
	}
return 0;
}

int main()
{
	int a[2*10^5],b;
	long int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i];
	}
	selection(a,0,n-1);
	b=check(a,0,n-1);
//	traverse(a,0,n-1);
	cout<<b;
}
