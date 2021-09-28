#include<iostream>
using namespace std;

struct node{
	int data;
	node *ref; //self refrence structure
};

class linklist()
{
	node *start;
	public:
		linklist();
		void display();
		void insertend(int);
		int isempty();
		~linklist();
		
};

linklist::linklist()
{
	start=NULL;
}

int linklist::isempty()
{
	if(start==NULL)
	return 1;
	else
	return 0;
}

void linklist::display()
{
	if(isempty())
	{
		cout<<"list is empty";
	}
	cout<<"etems in SLL are:";
	node *ptr=start;
	while(ptr!=NULL)
	{
		
	}
}
