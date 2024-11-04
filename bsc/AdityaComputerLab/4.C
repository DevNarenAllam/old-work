	   /* 4 */

#include<stdio.h>
#include<math.h>
main()
{
	float a,sq_root;
	clrscr();
	printf("Enter a value to a : ");
	scanf("%f",&a);
	sq_root=sqrt(a);
	printf("Square root of %0.2f is %0.2f",a,sq_root);
	getch();
}