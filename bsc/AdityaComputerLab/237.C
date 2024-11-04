#include<stdio.h>
main()
{
int m,n;
clrscr();
printf("Enter two numbers :");
scanf("%d%d",&m,&n);
fun(&m,&n);
printf("m = %d\n",m);
printf("n = %d\n",n);
}

fun(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}
