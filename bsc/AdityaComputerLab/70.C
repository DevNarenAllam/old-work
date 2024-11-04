#include<stdio.h>
main()
{
int n;
long fact(int);
clrscr();
for(n=1;n<=99;n++)
{
printf("Factorial for %2d is  ::  %ld\n",n,fact(n));
if (n%20==0)
getch();
}
}

long fact(int i)
{
long mul=1;
int j;
for(j=1;j<=i;j++)
  mul=mul*j;
return(mul);
}