	/* 107 */
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,l=10;
clrscr();
printf("Enter how many lines :");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
    for(j=0;j<l;j++)
    printf("   ");
    for(j=1;j<=i;j++)
    printf("%3d",j);
    printf("\n");
    l++;
}
getch();
}