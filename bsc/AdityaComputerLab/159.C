#include<stdio.h>
main()
{
	int s,n;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	s=fact(n);
	printf("%d",s);
	getch();
}
 int  fact(int n)
{
	int m;
	if(n==1)
		return(1);
	m=n*fact(n-1);
		return(m);
}