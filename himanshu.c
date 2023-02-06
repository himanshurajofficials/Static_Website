#include<stdio.h>
void main()
{
int a,b;
printf("enter 2 nos.");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;

printf("%d",a);
printf("%d",b);
}

