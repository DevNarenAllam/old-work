	  /*  3  */

#include<stdio.h>
main()
{
	int a,square,cube;
	clrscr();
	printf("Enter a value to a : ");
	scanf("%d",&a);
	square=a*a;
	cube=square*a; /* a*a*a */
	printf("\nSquare of %d = %d\n",a,square);
	printf("Cube of %d = %d",a,cube);
	getch();
}

