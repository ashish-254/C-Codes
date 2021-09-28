#include<stdio.h>
#include<conio.h>
void insertionsort(int a[],int n)
{
	int i,j,key;
	for(j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
			while(i>=0&&a[i]>key)
			{
				a[i+1]=a[i];
				i=i-1;
			}
		a[i+1]=key;
	}
}

int main()
{
	int i,n,a[]={42,15,89,41,54,02,11};
	n= sizeof(a)/sizeof(a[0]);
	insertionsort(a,n);
	printf("sorted array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
}
