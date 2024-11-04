#include<stdio.h>
main()
{
long n;
clrscr();
printf("Enter N value :");
scanf("%ld",&n);
printf("The sum of digits of %ld is %d",n,recursion(n));
}


recursion(long n)
{
int sum=0;
while(n!=0)
{
sum=sum+(n%10);
n=n/10;
}
if(n>10)
sum=recursion(n);
return(sum);
}