#include<stdio.h>
void main()
{
int a[100][100],b[100][100];
int r1,c1,i,j,r2,c2;
printf("enter the value of rows and coloumn");
scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
printf("1st matrix");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
//printf("\n");
}
printf("2nd matrix");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
//printf("\n");
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf(" %d",a[i][j]+b[i][j]);
}
printf("\n");
}

}
