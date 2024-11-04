#include<stdio.h>
main()
{
	int n,i,j,k;
	clrscr();
	puts("enter u r range");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	     for(j=n;j>i;j--)
	     printf(" ");
	     for(j=i;j>0;j--)
	     printf(" %d",i);
	     printf("\n");
	     if(i==1)
	     {
	     for(k=2;k<=n;k++)
	     {
		 for(j=0;j<=n-k;j++)
		 printf(" ");
		 for(j=2;j<=k;j++)
		 printf(" %d",k);
		 printf("\n");
	    }
	    }
	    }

	getch();
}
