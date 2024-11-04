#include<stdio.h>
main()
{
float exp=0.0;
int i;
clrscr();
for (i=1;i<=21;i+=2)
   exp=exp+(float)1/i;
printf("The Value Of The EXPRESSION = %.3f\n",exp);
}