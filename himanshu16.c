#include<stdio.h>
void main()
{
int a,b,c,d,e;
int p;
printf("enter the marks of 5 subjects :");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
p=(a+b+c+d+e)/5;
if(p>59)
{
printf("you got first division");
}
else if(p>49 && p<60)
{
printf("you got second division");
}
else if(p>39 && p<50)
{
printf("you got third division");
}
else
{
printf("you get fail");
}
}
