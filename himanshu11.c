#include<stdio.h>
void main()
{
char c;

printf("enter the letter to be check : ");
scanf("%c",&c);
int m=c;
if (m>64 && m<91 ||m>96 && m<123)
{
if(c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u' ||c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U')
{
printf("%c is a vowel",c);
}
else
{
printf("%c is a consonent",c);
}
}
else
{
printf("it is not a letter");
}
}
