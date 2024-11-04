	/* 9 */

#include<stdio.h>
#include<math.h>
main()
{
	int year ,i;
	long int day;
	clrscr();
	printf("Enter a your age in years : ");
	scanf("%d",&year);
	i=year/4;
	day=year*365+i;
	printf("Your age in days = %ld",day);
	getch();
}

