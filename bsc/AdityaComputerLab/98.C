	   /* 98 */

#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n;
clrscr();
printf("Enter n value :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=n;j<i;j++)
    printf("    ");
    for(j=1;j<=i;j++)
    printf("%3d ",j);
    printf("\n");
}
getch();
}