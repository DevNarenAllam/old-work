#include<stdio.h>
main()
{
	int i=10,*i1,*ch1,*a1,*l1;
	char ch='a';
	float a=1.1;
	long int l=12345;
	clrscr();
	i1=&i;
	ch1=&ch;
	a1=&a;
	l1=&l;
	printf("%u  %u  %u   %u",i1,ch1,a1,l1);
	getch();
}

