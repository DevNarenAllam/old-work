#include<stdio.h>
main()
{
	long int sal;
	int no,ic;
	char name[20];
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&no);
	fflush(stdin);
	printf("Enter a name   : ");
	scanf("%s",&name);
	printf("Enter a salar  : ");
	scanf("%ld",&sal);
	if(sal>=50000)
		ic=375+sal * .16;
	if(sal<=50000 && sal>=40000)
		ic=350+sal*.14;
	if(sal<40000 && sal>=30000)
		ic=325+sal*.12;
	if(sal<30000 && sal>=20000)
		ic=300+sal*.9;
	if(sal<20000 && sal>=10000)
		ic=250+sal*.5;
	if(sal<10000)
		ic=200+sal*.3;
	sal=sal+ic;
	printf("Gross salary = %ld",sal);
	getch();
}

