       /* 8 */

#include<stdio.h>
#include<math.h>
main()
{
	float r,h,volume;
	clrscr();
	printf("Enter radius of the cylinder : ");
	scanf("%f",&r);
	printf("Enter height of the cylinder : ");
	scanf("%f",&h);
	volume=(float)1/3*22/7*r*r*h;
	printf("Volume of the cylinder %f ",volume);
	getch();
}