#include<stdio.h>
void main()
{
int a[100][100],b[100][100],c[100][100];
int r1,c1,i,j,r2,c2,r3,c3,s;
printf("enter the value of rows and coloumn");
scanf("%d%d%d%d%d%d",&r1,&c1,&r2,&c2,&r3,&c3);

for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r1;i++)
{
s=0;
for(j=0;j<c1;j++)
{
s=s+(a[i][j]*b[j][i]);
c[i][j]=s;
}
c[i][j]=s;
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf(" %d",c[i][j]);
}
printf("\n");
}
}

}
