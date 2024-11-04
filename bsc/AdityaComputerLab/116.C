#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,l=10,k;
clrscr();
printf("Enter how many lines :");
scanf("%d",&n);
k=n;
for(i=1;i<=n;i++)
{
    for(j=0;j<l;j++)
    printf("   ");
    for(j=1;j<=i;j++)
    printf("%3d",k);
    printf("\n");
    k--;
}
getch();
}