
#include<stdio.h>
main()
{
int n,i,j,k,m;
clrscr();
 printf("Enter number of rows :");
 scanf("%d",&n);
 m=1;
 for(i=1;i<=n;i++)
  {
    if(i%2==0)
    k=30;
    else
    k=30-(4*i)+4;
    for(j=1;j<=k;j++)
    printf(" ");
    for(j=1;j<=i;j++,m++)
    printf("%4d",m);
    printf("\n");
  }
 getch();
}