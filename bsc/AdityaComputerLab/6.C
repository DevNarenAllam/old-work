	    /* 6 */

#include<stdio.h>
#include<math.h>
main()
{
	int r;
	float area,circumference;
	clrscr();
	printf("Enter the radius of the circle : ");
	scanf("%d",&r);
	area=(float)22/7*r*r;
	circumference=(float)2*(float)22/7*r;
	printf("\nArea of the circle of radius %d = %.2f\n",r,area);
	printf("Circumference of the circle of radius %d = %.2f",r,circumference);
	getch();
}
