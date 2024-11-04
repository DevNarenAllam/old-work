#include<stdio.h>
main()
{
	int year,i;
	clrscr();
	printf("Enter a Year : ");
	scanf("%d",&year);
	if(year%4==0 || year%400==0)

		printf("Entered Year is Leap Year");
	else
		printf("Entered Year is Not Leap Year");
	getch();
}
