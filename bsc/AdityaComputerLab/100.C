	      /* 100 */
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n;
clrscr();
printf("Enter how many lines :");
scanf("%d",&n);
for(i=0;i<10;i++)
printf("   ");
printf("%3d\n",1);
for(i=1;i<=n;i++)
{
    for(j=0;j<10;j++)
    printf("   ");
    for(j=1;j<=i;j++)
    printf("%3d",j);
    printf("%3d\n",1);
}
}