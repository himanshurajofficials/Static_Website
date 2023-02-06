#include<stdio.h>
int swap(int a,int b);
void main ()
{
int x,y,z;
printf("enter two no.");
scanf("%d%d",&x,&y);
z=swap(x,y);
}

int swap(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf("%d%d",a,b);
}
