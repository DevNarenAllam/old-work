#include<stdio.h>
#include<math.h>
main()
{
 float n,l,r,k;
 clrscr();
 printf("Enter milk in letters\n");
 scanf("%f",&n);
 l=n*3.25;
 printf("%fletters milk vendor buys actual rate:  %f \n ",n,l);
 r=(n+n/4.0)*4.15;
 printf("%fletters milk+add water vendor buys actual rate:  %f\n",n,r);
 k=r-l;
 printf("the gain for milk vendor: %f\n",k);
 getch();
}