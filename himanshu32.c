#include<stdio.h>
#include<math.h>
void main()
{
int n1,n2,n,c,s,y,x;
s=0;
c=0;
printf("enter any no.");
scanf("%d",&n);
n1=n;
n2=n;
{
while(n1>0)
{
x=n1%10;
c++;
n1=n1/10;
}
while(n2>0)
{
--c;
y=n2%10;
s=s+(y*pow(10,c));
n2=n2/10;
}
}
if(s==n)
printf("palindrome no.");
else
printf("not a palindrome no.");
}


