       /* 106 */
#include<stdio.h>
main()
{
	int i,j,k,n;
	clrscr();
	printf("Enter a number of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=0;k<i;k++)
		{
			printf("  ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d ",i);

		}
		printf("\n");
	}
	getch();
}
