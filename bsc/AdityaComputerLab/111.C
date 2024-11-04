#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,l=10,k=0;
clrscr();
printf("Enter how many lines :");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
    for(j=0;j<l;j++)
    printf("   ");
    k=n;
    for(j=1;j<=i;j++,k--)
    printf("%3d",k);
    printf("\n");
    l++;
}
getch();
}