#include<stdio.h>
#include<math.h>
void main()
{
int i,n,j,f,y,s;
printf("enter the value of y and n");
scanf("%d%d",&y,&n);
s=0;
for(i=0;i<=n;i++)
{
f=1;
for(j=1;j<=i;j++)
{
f=f*j;
}
s=s+(pow(y,i)/f);
}
printf("%d",s);
}
