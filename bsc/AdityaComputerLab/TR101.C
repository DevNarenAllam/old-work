main()
{
	int n,i,j;
	clrscr();
	puts("enter u r range");
	scanf("%d",&n);
	printf("\n\n\n");
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		printf(" %d",j);
		printf("\n");
	}
	getch();
}
