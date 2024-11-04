#include<stdio.h>
main()
{
int n,i;
long sum=0;
long int fact(int);
clrscr();
printf("Enter N value :");
scanf("%d",&n);
for(i=1;i<=n;i++)
   sum=sum+(fact(i)/i);
printf("%d",sum);
}


long int fact(int i)
{
int j;
long fat=1;
for(j=1;j<=i;j++)
  fat=fat*j;
return(fat);
}