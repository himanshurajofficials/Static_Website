#include<stdio.h>
void main()
{
int n,n1,n2,i;
printf("enter any number");
scanf("%d",&n);
n1=0;
n2=1;
for(i=1;i<=n;i++)
{
n2=n1+n2 ;
printf("%d , ",n1);
n2=n1+n2;
n1=n2-n1;
n2=n2-n1;
}
}
