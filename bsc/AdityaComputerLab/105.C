      /* 105 */
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,k;
clrscr();
printf("Enter how many lines :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=0;j<10;j++)
    printf("   ");
    k=n;
    for(j=1;j<=i;j++,k--)
    printf("%3d",k);
    printf("\n");
}
getch();
}