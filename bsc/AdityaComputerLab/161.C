#include<stdio.h>
main()
{
  int m,n;
  clrscr();
  printf("Enter two numbers :");
  scanf("%d%d",&m,&n);
  printf("\nG.C.D = %d ",gcd(m,n));
}
int gcd(p,q)
int p,q;
{
int r;
r=p-(p/q*q);
if (r==0)
return(q);
else
gcd(q,r);
}