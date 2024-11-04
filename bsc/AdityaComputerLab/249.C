#include<stdio.h>
main()
{
int *p,*q,*r,i,j,k;
clrscr();
printf("Enter three values :");
scanf("%d%d%d",&i,&j,&k);
p=&i;
q=&j;
r=&k;
if (*p>*q && *p<*r || *p<*q && *p>*r)
printf("%d is middle number ",*p);
if (*q>*p && *q<*r || *q<*p && *q>*r)
printf("%d is middle number ",*q);
if (*r>*p && *r<*q || *r<*p && *r>*q)
printf("%d is middle number ",*r);
}