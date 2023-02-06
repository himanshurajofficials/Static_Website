#include<stdio.h>
void main()
{
float x,da,hra,DA,HRA,TS,ts;
printf("enter the basic of the employ");
scanf("%f",&x);
if(x<1000)
{
da=0.70*x;
hra=0.10*x;
ts=x+da+hra;
printf("total salery of employ is %f",ts);
}
else 
{
DA=0.75*x;
HRA=1000;
TS=x+DA+HRA;
printf("total salery of employ is %f",TS);

}
}


