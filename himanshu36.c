#include<stdio.h>
void main()
{
int n,n1,n2;
printf("enter any number");
scanf("%d",&n);
n1=0;
n2=1;
while(n1<=(n))
{
n2=n1+n2 ;
printf("%d , ",n1);
n2=n1+n2;
n1=n2-n1;
n2=n2-n1;
}
printf("%d",a);
printf("%d",b);
}
