#include<stdio.h>
main()
{
 int s,h,m;
 clrscr();
 printf("Enter time in seconds\n");
 scanf("%d",&s);
 h=s/360;
 m=s/60;
 printf("%d  : %d : %d",h,m,s);
 }