	/* 10 */

#include<stdio.h>
#include<math.h>
main()
{
	float ci,si,p,n,r;
	clrscr();
	printf("Enter P N R values : ");
	scanf("%f%f%f",&p,&n,&r);
	si=p*n*r/100;
	ci=p*pow((1+r/100),n)-p;
	printf("\nSimple interest = %.2f\n",si);
	printf("Compound interest = %.2f",ci);
	getch();
}

