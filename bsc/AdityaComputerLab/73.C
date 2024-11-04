#include<stdio.h>
main()
{
long power=1;
int m,n,i,j;
clrscr();
printf("Enter M & N values :");
scanf("%d%d",&m,&n);
for (i=1;i<=n;i++)
  power=power*m;
printf("m ^ n = %d",power);
}