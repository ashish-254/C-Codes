//use of associative array or vector

#include<iostream>
#include <vector>
using namespace std;
int p=0;
//global int p=0;
typedef struct values
{
    int v;
    const char *s;
} data;
//struct values data;

vector<data>stack;
//vector<stack>stack2;
void tekeinput()
{
    //struct
    values ashish,sagar;
    ashish.v=4;
    ashish.s="|";
    stack.push_back(ashish);
    sagar.v=7;
    sagar.s="<";
    stack.push_back(sagar);

}

void giveoutput()
{
    cout<<"\n output is :"<<endl;
    cout<<stack[0].v<<"  "<<stack[0].s<<endl;
    cout<<stack[1].v<<"  "<<stack[1].s<<endl;
}

int main()
{   
    p=4;
    cout<<p<<endl;
    tekeinput();
    giveoutput();
    p=5;
    cout<<p<<endl;
}
