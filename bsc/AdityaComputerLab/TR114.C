main()
{
	int n,i,j;
	clrscr();
	puts("enter u r range");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=0;j<i;j++)
		printf(" ");
		for(j=i;j<=n;j++)
		printf("%d",j);
		printf("\n");
	}
	getch();
}