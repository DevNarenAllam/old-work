#include<stdio.h>
main()
{
	int n,i,j,k,x,s,c;
	clrscr();
	puts("enter u r range");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=0;j<i;j++)
		printf("  ");
		for(j=n;j>i;j--)
		printf(" %d",j);
		for(j=i;j<=n;j++)
		printf(" %d",j);
		printf("\n");
		if(i==1)
		{
		for(j=n,x=2,c=2;j>=2;j--,x++)
		{
			for(k=0;k<x;k++)
			printf(" ");
			for(k=0;k<x;k++)
			printf(" ");
			for(s=n;s>=c;s--)
			printf(" %d",s);
			c++;
			for(s=c;s<=n;s++)
			printf(" %d",s);
			printf("\n");
		}
		}
		}
	getch();
}