#include<stdio.h>
#include<conio.h>
//int i=0;

int main()
{
    int x,y,z;
    x=y=z=1;
    printf("%d",++x||++y&&++y);
   printf(" %d %d %d",x,y,z);
    return 0;
}