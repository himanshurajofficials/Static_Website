#include<stdio.h>
void main()
{
char ch[100] , s[100];
int i,j,l=0;
printf("enter a string");
scanf("%[^\n]",ch);
for(i=0;ch[i]!='\0';i++)
{
l++;
}
s[l]='\0' ;
for(i=0,j=l-1;i<l,j>=(0);i++,j--)
{
s[i]=ch[j];
}
printf("%s",s);
}
