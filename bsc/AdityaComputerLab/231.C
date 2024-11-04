#include<stdio.h>
main()
{
int i,*p;
float j,*q;
char k,*r;
clrscr();
printf("Enter an INTEGER  &  FLOAT  &   CHARACTER values :");
scanf("%d%f",&i,&j);
fflush(stdin);
scanf("%c",&k);
p=&i;
q=&j;
r=&k;
printf("Printing the values with pointers \n");
printf("%d\n%f\n%c",*p,*q,*r);
}