#include<stdio.h>
main()
{
 int n,i,j,k=1;
 clrscr();
 printf("Enter n value\n");
 scanf("%d",& n);
 for (i=1;i<=n/5&&k!=n;i++)
  {
   for(j=1;j<=5;j++)
   printf("%4d",k++);
  printf("\n");}
  getch();
}