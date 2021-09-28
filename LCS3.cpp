#include<iostream>
#include<string.h>
using namespace std;


//structure declaration
struct values
{
    int v;
    char s;
    values()	//initialization of variable of structure
    {
    	s=' ';
	}
} ;

// class for declairing functions and use values globaly
class clsn
{
	struct values stack[20][20];
	public:
	void takeinput(char[],char[]);			//functin declaration for storing values on table and print table
	void check(int,int,char[],char[]);		//function declaration for find matching string and print that string
};

//functin definition for storing values on table and print table
void clsn::takeinput(char text[],char pattern[])
{
	int i,j,m=strlen(text);
	int n=strlen(pattern);
	m=m+1;
	n=n+1;
	
	//storing zero on first column
	for(i=0;i<m;i++)
	{
		stack[i][0].v=0;
		stack[i][0].s=' ';
	}
	//storing zero on first row
	for(i=0;i<n;i++)
	{
		stack[0][i].v=0;
		stack[0][i].s=' ';
	}
	
	//putting values on table on the basis of calculation
	for(i=1;i<m;i++)
	{
		
		for(j=1;j<n;j++)
		{
			if(text[i-1]==pattern[j-1])
			{
				stack[i][j].v=stack[i-1][j-1].v+1;
				stack[i][j].s='D';
			}
			else
			if(stack[i-1][j].v>=stack[i][j-1].v)
			{
				stack[i][j].v=stack[i-1][j].v;
				stack[i][j].s='U';
			}
			else
			{
				stack[i][j].v=stack[i][j-1].v;
				stack[i][j].s='L';
			}
		}
	}
	cout<<"your first string is : "<<text<<endl;
	cout<<"your second string is : "<<pattern<<endl<<endl;
	cout<<"based on input, your C-B table is :\n"<<endl;
    
	for(i=0;i<n-1;i++)
	{
		cout<<"______";
	}
	cout<<endl;
	cout<<"          ";
	
	//print second string on first row
	for(i=0;i<n-1;i++)
	{
		cout<<pattern[i]<<"   ";
	}
	cout<<endl;
	
	for(i=0;i<n-1;i++)
	{
		cout<<"______";
	}
	cout<<endl;
	
	//printing table
	for(i=0;i<m;i++)
    {
    	if(i==0)
    	{
    		cout<<"   |  ";
		}
		else
		{
			cout<<text[i-1]<<"  |  ";
		}
		
    	for(j=0;j<n;j++)
    	{
    		cout<<stack[i][j].v<<stack[i][j].s<<"  ";
		}
		cout<<endl;
	}
	cout<<"where -\nD represent Digonal Arrow\nL represent Left Arrow\nU represent Upper Arrow"<<endl;
	cout<<endl<<"total number of characters in subsequence is : "<<stack[m-1][n-1].v<<endl;
	

	check(m,n,text,pattern);		//function calling for evaluate matched string and printing of that string
}

//function calling for evaluate matched string and printing of that string
void clsn::check(int m,int n,char text[],char pattern[])
{
	int i=m-1, j=n-1,k=0;
	char a[m]={'\0'};		//variable declaration for storing matched string
	//evaluation of matched string
	while(stack[i][j].s!=' '&&stack[i][j].v!=0)
	{
		if(stack[i][j].s=='D')
		{
			a[k]=text[i-1];
			k=k+1;
			i=i-1;
			j=j-1;
		}
		else
		{
			if(stack[i][j].s=='L')
			{
				j=j-1;	
			}
			else
			{
				if(stack[i][j].s=='U')
				{
					i=i-1;
				}
			}
		}
	}
	if(a[0]!='\0')		//when subsequence found then print that string 
	{
		//cout<<endl<<"No Common Subsequence Found "<<endl;
		cout<<endl<<"your subsequence is : "<<strrev(a)<<endl;
	}
	else		//when no subsequence found then print message 
	{
		//cout<<endl<<"your subsequence is : "<<strrev(a)<<endl;
		cout<<endl<<"No Common Subsequence Found "<<endl;
	}
	
}

//driver code
int main()
{   
	char t[30],p[30];
	cout<<"Enter First String : ";
	cin>>t;							//take input from user for first string
	cout<<"Enter Second String : ";
	cin>>p;							//take input from user for second string
	cout<<endl;
	clsn c;
	c.takeinput(t,p);				//function call
	return 0;
}
