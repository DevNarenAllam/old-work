#include<stdio.h>
main()
{
int n,i,j;
char a[20];
clrscr();
printf("Enter an integer :");
scanf("%d",&n);
i=0;
while (n>0)
{
j=n%16;
n=n/16;
if (j<10)
a[i]=48+j;
else
switch (j)
{
case 10 : a[i]='A';
break;
case 11 : a[i]='B';
break;
case 12 : a[i]='C';
break;
case 13 : a[i]='D';
break;
case 14 : a[i]='E';
break;
case 15 : a[i]='F';
break;
}
i++;
}
printf("\nDECIMAL No = ");
for (j=i-1;j>=0;j--)
printf("%2c",a[j]);
}