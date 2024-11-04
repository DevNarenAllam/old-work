main()
{
	int n,i,j;
	clrscr();
	puts("enter u r range");
	scanf("%d",&n);
	printf("\n\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		printf(" %d",j);
		printf("\n");
	}
	getch();
}
