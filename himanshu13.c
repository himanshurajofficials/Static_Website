#include<stdio.h>
void main()
{
int a;
long b;
long long c;
double d;
long double e;
int x=sizeof(a);
int y=sizeof(b);
int z=sizeof(c);
int u=sizeof(d);
int v=sizeof(e);
printf("the size of int is %d the size of long is %d the size of long long is %d the size of double is %d the size of long double is %d",x,y,z,u,v);
}

