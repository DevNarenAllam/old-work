	 /*  13 */

#include<stdio.h>
#include<math.h>
main()
{
	float mc=3.25,x,y,a,i,j;
	clrscr();
	printf("Enter milk in liters : ");
	scanf("\n%f",&a);
	x=a/4;
	printf("\nWater added in %.2f lts of milk = %.2f",a,x);
	i=a*mc;
	j=(a+x)*4.15;
	y=j-i;
	printf("\nGain for the milk vendor         = %.2f",y);
	getch();
}



