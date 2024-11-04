#include<stdio.h>
main()
{
int n,x,c,t;
clrscr();
printf("Enter N value :");
scanf("%d",&n);
c=0;
t=n;
while (n>0)
{
x=n%10;
c=c*10+x;
n=n/10;
}
if (c=t)
printf("PALINDROME ");
else
printf("NOT PALINDROME ");
getch();
}
