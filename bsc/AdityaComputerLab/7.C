	/* 7 */

#include<stdio.h>
#include<math.h>
main()
{
	int r;
	float volume;
	clrscr();
	printf("Enter the radius of the sphere : ");
	scanf("%d",&r);
	volume=(float)4/3*22/7*r*r*r;
	printf("\nVolume of the sphere of radius %d = %.2f",r,volume);
	getch();
}
