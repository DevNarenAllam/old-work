	  /* 5 */

#include<stdio.h>
#include<math.h>
main()
{
	int side,area,perimeter;
	clrscr();
	printf("Enter a side of the Square : ");
	scanf("%d",&side);
	area=side*side;
	perimeter=side*4;
	printf("\nArea of the Square of side %d is %dsq.cms\n",side,area);
	printf("Perimeter of the Square of side %d is %dc.ms",side,perimeter);
	getch();
}
