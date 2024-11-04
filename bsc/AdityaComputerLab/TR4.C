#include<stdio.h>
long int fact(long int f);
main()
{
	long int n,i,j,k,f;
	clrscr();
	printf("enter u r range");
	scanf("%ld",&n);
	printf("\n\n\n");
	for(k=0;k<=n;k++)
	{
		for(j=0;j<=n-k;j++)
		printf("   ");
		for(j=0;j<=k;j++)
		{
			f=fact(k)/(fact(k-j) * fact(j));
			printf("   %3ld",f);
		}
		printf("\n");
	}

	getch();
}
long int fact(long int f)
{
long int i,m=1;
for(i=1;i<=f;i++)
m=m*i;
return m;
}