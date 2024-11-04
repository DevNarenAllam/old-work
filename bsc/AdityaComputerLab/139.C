#include<stdio.h>
#include<math.h>
main()
{
int n,i,j;
clrscr();
n=0;
j=1;
for (i=1;i<1024;i=i*2,j++)
  n=n+(i*pow(-1,j));
printf("%d",n);
}