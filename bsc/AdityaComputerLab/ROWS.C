#include<stdio.h>
main()
{
 int n,i;
 clrscr();
 printf("Enter n value\n");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
  {
    if(i%5==0)
       {
       printf("%4d",i);
       printf("\n");
      }
     else
      printf("%4d",i);
  }
  getch();
}