#include<stdio.h>
main()
{
long int n,pos;
int j=0,l;
clrscr();
printf("Enter N value :");
scanf("%ld",&n);
printf("Enter Digit to be searched :");
scanf("%d",&l);
j=n%10;
pos=1;
while (j!=l && n>0)
{
n=n/10;
pos=pos*10;
j=n%10;
}
if (j==l)
printf("\nPOSITION OF %d IS %d ",l,pos);
else
printf("\nTHIS No DOESNOT EXIST ");
getch();
}