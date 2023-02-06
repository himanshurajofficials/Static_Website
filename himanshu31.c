#include<stdio.h>
void main()
{
int i,m,x,y;
m=1;
printf("enter the base and then the power"); 
scanf("%d%d",&x,&y);
for(i=1;i<=y;i++)
{
m=m*x;
}
printf("result is %d ",m);
}

