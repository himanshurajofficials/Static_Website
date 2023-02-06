#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float s,ar;
printf("enter sides of the triangle");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle using herons formula is %f",ar);
}
