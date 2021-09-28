#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

int main()
{
	node *start=new node;
	node *temp=start;
	start->data=5;
	start->next=new node;
	start=start->next;
	start->data=6;
	start->next=NULL;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	return 0;
}
