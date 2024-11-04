#include<stdio.h>
main()
{
int i;
float exp=0;
clrscr();
for (i=1;i<100;i++)
      exp=exp+(i*1.0)/(i+1);
printf("The Value Of The EXPRESSION =%.3f",exp);
}