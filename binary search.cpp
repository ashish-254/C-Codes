#include<iostream>
using namespace std;
int binary(int list[],int l,int r,int x)
{
	int mid=1+((l+(r-1))/2);
	if(list[mid]==x)
	{
		cout<<mid+1<<endl;
		return mid+1;
	}
	
	if(x<list[mid])
	{
		binary(list,l,mid,x);
	}
	if(x>list[mid])
	{
		binary(list,mid,r,x);
	}
return 0;
}

int main()
{
	int a[10]={2,44,55,69,74,88,91,119,154,200};
	int i,x;
	cout<<"for binary search"<<endl;
	cout<<"array is:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
//	for(int j=0;j<8;j++)
//	{
	cout<<"\nenter no. for binary search:"<<endl;
	cin>>x;
	cout<<"index of "<<x<<" is: ";
	binary(a,0,10,x);
	//cout<<y<<endl;
	//}
	return 0;
}
