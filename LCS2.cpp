#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include <vector>
using namespace std;



typedef struct values
{
    int v;
    char s;
    values()
    {
    	s=' ';
	}
} data;

class clsn
{
	struct values stack[20][20];
	int p;
	public:
		clsn()
		{
			p=0;
		}
	void takeinput(char[],char[]);	
};


void clsn:: takeinput(char text[],char pattern[])
{
	int i,j,m=strlen(text);
	int n=strlen(pattern);
	cout<<m<<endl<<n<<endl;
	m=m+1;
	n=n+1;
	
	
	for(i=0;i<m;i++)
	{
		stack[i][0].v=0;
	}
	for(i=0;i<n;i++)
	{
		stack[0][i].v=0;
	}
	
	
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
	
	cout<<stack[4][4].v<<"\noutput is :"<<endl;
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		cout<<stack[i][j].v<<stack[i][j].s<<"  ";
		}
		cout<<endl;
	}

}


int main()
{   
	
	char p[20]={"abcbdab"},t[20]={"bdcaba"};
	clsn c;
	c.takeinput(p,t);
}
