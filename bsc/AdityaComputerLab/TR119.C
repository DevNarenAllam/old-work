main()
{
	int n,i,j;
	clrscr();
	puts("enter u r range");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf(" %d",j);
		printf("\n");
	}
	getch();
}