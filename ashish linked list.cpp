#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
};

class list
{
	private:
		node *head;
		node *tail;
	public:
		list()
		{
			head==NULL;
			tail==NULL;
		}
	void instert_start(int);
	void instert_end(int);
	void insertatposition(int,int);
	void delete_first();
	void delete_last();
	void deleteatposition(int);
	void traverse();	
};

void list::instert_start(int item)
{
	node *temp=new node;
	temp->data=item;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
		temp==NULL;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}

void list::instert_end(int item)
{
	node *temp=new node;
	temp->data=item;
	temp->next=NULL;
	tail->next=temp;
	tail=temp;
}

void list::insertatposition(int pos,int item)
{
	node *temp=new node;
	node *temp1=new node;
	node *temp2=new node;
	int j;
	temp2=head;
	for(j=1;temp2!=NULL;j++)
	{
		temp2=temp2->next;
	}
	if(j<pos)
	{cout<<"linked list has only "<<j-1<<" contents so you can't ensert data at position "<<pos<<endl;
	return ;
	}
	temp2=head;
	temp->data=item;
	temp->next=NULL;
	for(int i=1;i<pos;i++)
	{	
		temp1=temp2;
		temp2=temp2->next;
	}
	temp->next=temp2;
	temp1->next=temp;
}

void list::delete_first()
{
	node *temp=new node;
	temp=head;
	temp=temp->next;
	head=temp;
}

void list::delete_last()
{
	node *temp1=new node;
	node *temp2=new node;
	temp2=head;
	while(temp2->next!=NULL)
	{
		temp1=temp2;
		temp2=temp2->next;
	}
	temp1->next=NULL;
	tail=temp1;
}

void list::deleteatposition(int pos)
{
	node *temp1=new node;
	node *temp2=new node;
	node *temp3=new node;
	int j;
	temp2=head;
	for(j=1;temp2!=NULL;j++)
	{
		temp2=temp2->next;
	}
	if(j<pos)
	{cout<<"linked list has only "<<j-1<<" nodes, so you can't delete node no. "<<pos<<endl;
	return ;
	}
	temp2=head;
	for(int i=1;i<pos;i++)
	{	
		temp1=temp2;
		temp2=temp2->next;
	}
	temp3=temp2->next;
	temp1->next=temp3;
	temp2->next=NULL;
}

void list::traverse()
{
	node *temp=new node;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"		";
		temp=temp->next;
	}
}

int main()
{
	int n,a,p;
	list var;
	char ch;
while(1)
{
	cout<<"enter 1 for insert at begin"<<endl;
	cout<<"enter 2 for insert at start"<<endl;
	cout<<"enter 3 for insert at position"<<endl;
	cout<<"enter 4 for delete at begin"<<endl;
	cout<<"enter 5 for delete at last"<<endl;
	cout<<"enter 6 for delete at position"<<endl;
	cout<<"enter 7 for traversing"<<endl;
	cin>>n;
    	switch(n)
		{
		case 1:
		cout<<"enter number"<<endl;
		cin>>a;
		var.instert_start(a);
		cout<<endl;
		break;
		case 2:
		cout<<"enter number"<<endl;
		cin>>a;
		var.instert_end(a);
		cout<<endl;break;
		case 3:
		cout<<"enter number and position:"<<endl;
		cin>>a>>p;
		var.insertatposition(p,a);
		cout<<endl;break;
		case 4:
		var.delete_first();
		cout<<endl;break;
		case 5:
		var.delete_last();
		cout<<endl;break;
		case 6:
		cout<<"enter position:"<<endl;
		cin>>p;
		var.deleteatposition(p);
		cout<<endl;break;
		case 7:
		var.traverse();
		cout<<endl;break;
		default:
		cout<<"option not found\n";
	}
cout<<"put 'y' to get options oterwise 'n'\n";
cin>>ch;
if(ch=='n')
{
	break;
}	
}
return 0;
}
