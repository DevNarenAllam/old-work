	     /* 11 */

#include<stdio.h>
main()
{
	float m,g,h,v,e;
	clrscr();
	printf("Enter M,G,H,V values : ");
	scanf("%f%f%f%f",&m,&g,&h,&v);
	e=m*g*h+(1/2*m*v*v);
	printf("Energy for given values = %.2f",e);
	getch();
}