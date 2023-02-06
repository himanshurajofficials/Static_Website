#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d;
float m,x1,x2;
printf("enter the value a,b,c of quadratic equations ");
scanf("%d%d%d",&a,&b,&c);
d=((b*b)-(4*a*c));
m=sqrt(d);
x1=(-b+m)/(2*a);
x2=(-b-m)/(2*a);
printf("the roots of quadratic equation are %f %f",x1,x2);
}
