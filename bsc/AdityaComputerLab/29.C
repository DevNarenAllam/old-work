#include<stdio.h>
#include <math.h>
main()
{
	int a,b, c,d,x1,x2,x;
	clrscr();
	printf(" Enter the values a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	if (a==0)
	{
		x=-c/b;
		printf(" Single root exist \n");
		printf("x : %d",x);
	}
	d=(b*b-4*a*c);
	if (d>0)
	{
		x1= (-b+sqrt(d))/(2*a);
		x2= (-b-sqrt(d))/(2*a);
		printf(" Roots are Real & Different \n");
		printf("x1=%d\tx2=%d",x1,x2);
	}
	if (d==0)
	{
		x1=-b/(2*a);
		x2=x1;
		printf(" Roots are real and equal \n");
	printf("x1=%d\tx2=%d",x1,x2);
	}
	if (d<0)
	{
		d=-d;
		x1= -b/(2*a);
		x2= sqrt(d)/(2*a);
		printf(" Roots are Imaginary and Different \n");
		printf(" First root : %d+i%d\n",x1,x2);
		printf(" Second root : %d-i%d",x1,x2);
	}
getch();
}




