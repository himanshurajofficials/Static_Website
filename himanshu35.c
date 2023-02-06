#include<stdio.h>
#include<math.h>
void main()
{
int i,n,j,y,f;
float s,p;
s=0;
printf("enter the value of y and n");
scanf("%d%d",&y,&n);

for(i=1;i<=((2*n)+1);i=i+2)
{
f=1;
for(j=1;j<=i;j++)
{
f=f*j;
}
p=pow(y,i);
s=s+(p/f);
}
printf("%f",s);
}
