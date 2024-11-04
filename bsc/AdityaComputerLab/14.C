      /* 14 */

#include<stdio.h>
main()
{
	float c,f;
	clrscr();
	printf("Enter a no. of fahrenheit : ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Temprature in degree celsius = %.2f",c);
	getch();
}
