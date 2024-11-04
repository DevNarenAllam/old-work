#include<stdio.h>
main()
{
int n;
clrscr();
printf("The numbers divisible by 3 & 7 \n");
for (n=1;n<=100;n++)
   if (n%3==0 && n%7==0)
   printf("%d\n",n);
}