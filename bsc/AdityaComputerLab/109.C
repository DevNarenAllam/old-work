#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,l=10,k=0;
clrscr();
printf("Enter how many lines :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=0;j<l;j++)
    printf("   ");
    k=n;
    for(j=1;j<=i;j++)
    printf("%3d",j);
    printf("\n");
    l--;
}
getch();
}