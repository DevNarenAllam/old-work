#include<stdio.h>
main()
{
 float m,g=980.0,h,v;
 float e;
 clrscr();
 printf("Enter mass,hight,volume\n");
 scanf("%f%f%f",&m,&h,&v);
 e=(m*g*h)+(1.0/2.0)*m*(pow(v,2.0));
 printf("%0.2f",e);
}