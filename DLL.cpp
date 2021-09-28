#include<iostream>
using namespace std;

struct node{
	int data;
	int frequency;
	struct node *left;
	struct node *right; //self refrence structure
};

class cl
{
	
	private:
		struct node *head;
		struct node *ref;	
	public:
		cl()
		{
			head=NULL;
			ref=head;
		}
		void insert(int,int);
		void display();
};
/*void insertion(int n)
{
	struct node *head=new node;
	struct node *tail=new node;
	struct node *temp=new node;
	head->left=NULL;
	head->right=NULL;
	temp=head;
	cout<<"enter "<<n<<" characters and frequency:"<<endl;
	for(int i=0;i<n;i++)
	{
	cin>>temp->data;
	cin>>temp->frequency;
	tail=temp;
	temp=new node;
	tail->right=temp;
	}
}*/

struct node *head=NULL;
struct node *ref=head;
void cl:: insert(int c,int n)
{
	struct node *newnode = new node;
	newnode->data=c;
	newnode->frequency=n;
	newnode->left=NULL;
	newnode->right=head;
	if(head != NULL)
	{
		head->left=newnode;
		head=newnode;
	}
}

void cl::display()
{
	struct node *ptr;
	ptr=head;
	while(ptr !=NULL)
	{
		char i=ptr->data;
		int j=ptr->frequency;
		cout<<i<<"   "<<j<<endl;
		ptr =ptr->left;
	}
}

int main()
{
	int n,freq;
	char c;
	cl s;
	cout<<"enter no. of node: ";
	cin>>n;
	cout<<"enter "<<n<<" characters and frequency: "<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<i+1<<". enter character and frequency:"<<endl;
		cin>>c>>freq;
		s.insert(c,freq);
	}
	cout<<endl<<endl<<"your entered data is :"<<endl;
	s.display();
	return 0;
}


/*
#include<iostream>
using namespace std;
struct node{
	char data;
	int frequency;
	node *left;
	node *right; //self refrence structure
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
	void insertion(int);
	void traverse();	
};

void list::insertion(int n)
{
	//node *temp1=new node;
	node *temp1=(struct node*) malloc(sizeof(struct node));
	node *temp2=(struct node*) malloc(sizeof(struct node));
	node *temp3=(struct node*) malloc(sizeof(struct node));
	temp2=head;
	temp3=temp2;
	cout<<"enter "<<n<<" characters and frequency:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>temp2->data;
		cin>>temp2->frequency;
		temp1=temp2;
		temp2=new node;
		temp1->right=temp2;
		temp2->left=temp1;
	}
	temp1->right=NULL;
	tail=temp1;
	head=temp3;
	
}
void list::traverse()
{
	node *temp=new node;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"		"<<temp->frequency<<endl;
		temp=temp->right;
	}
}

int main()
{
	int n;
	cout<<"enter node no.:"<<endl;
	cin>>n;
	list l;
	l.insertion(n);
	cout<<"entered data is "<<endl;
	l.traverse();
	return 0;
}*/


/*
int main()
{
    const char *n="|";
    const char *m=n;
    cout<<m;
    return 0;
}
*/
