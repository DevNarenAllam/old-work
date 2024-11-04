#include<stdio.h>
main()
{
int i,j,*p,*q;
clrscr();
printf("Enter Two Integers :");
scanf("%d%d",&i,&j);
p=&i;
q=&j;
printf("Arthematic operations with pointers :\n");
printf("Addiiton       : %d\n",(*p)+(*q));
printf("Substraction   : %d\n",(*p)-(*q));
printf("Multiplication : %d\n",(*p)*(*q));
printf("Division       : %d\n",(*p)/(*q));
}