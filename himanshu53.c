#include<stdio.h>
int cal(int a,int b);
void main()
{

int x,y,z;
printf("enter two no.");
scanf("%d%d",&x,&y);
cal(x,y);
}


int cal(int a,int b)
{
int s=0,m1=0,d=0,m;
float di=0.000;
printf("enter your choice\n");
printf("enter 5 to exit");
scanf("%d",&m);
if(m!=5)
{
switch (m)
{
case 1:
s=a+b;
printf("sum=%d",s);
break;
case 2:
d=a-b;
printf("subtraction=%d",d);
break;
case 3:
m1=a*b;
printf("multi=%d",m1);
break;
case 4:
di=(float)a/b;
printf("sum=%f",di);
break;

default:
printf("wrong choice");
}

int x,y,z;
printf("enter two no.");
scanf("%d%d",&x,&y);
cal(x,y);
}

}

