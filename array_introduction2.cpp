#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,q,n,a[][3*10^5]={'\0'},b[]={'\0'},c[]={'\0'};
    cin>>n>>q;
    for(i=0;i<n;i++)
    {
        cin>>k;
        for(j=0;j<k;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(i=0;i<q;i++)
    {
        cin>>b[i];
		cin>>c[i];
		cout<<a[b[i]][c[i]]<<endl;
    }
    
    /*for(i=0;i<q;i++)
    {
        cout<<a[b[i]][c[i]]<<endl;
    }*/
    return 0;
}

