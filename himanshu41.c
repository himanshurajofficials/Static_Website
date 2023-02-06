#include<stdio.h>
void main()
{
int a[100][100];
int r1,c1,i,j;
printf("enter the value of rows and coloumn");
scanf("%d%d",&r1,&c1);
if(r1>0&&c1>0&&r1<100&&c1<100)
{
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
}
else
printf("error");
}
