#include<stdio.h>
int sum(int a,int b);
void main ()
{
int x,y,z;
printf("enter two no.");
scanf("%d%d",&x,&y);
z=sum(x,y);
printf("sum of %d and %d is %d",x,y,z);
}

int sum(int a,int b)
{
int s=a+b;
return s;
}
