#include<stdio.h>
main()
{
	int a;
	clrscr();
aaa:
	printf("Enter a number :" );
	scanf("%d",&a);
	if( a>0)
		goto aaa;
	else
		goto kkk;
	kkk:
	getch();
}
