#include<stdio.h>
main()
{
int i,n,j,k=15,m;
clrscr();
printf("Enter Number of Rows :");
scanf("%d",&n);
m=0;
for(i=n;i>=1;i--)
{
     m++;
     for(j=0;j<k;j++)
     printf(" ");
     for(j=1;j<=i;j++)
     if (j>m && j<i-m+1)
     printf("%2c",' ');
     else
     printf("%2c",'*');
     printf("\n");
     k++;
}
getch();
}