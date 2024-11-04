main()
{
	int n,i,j;
	clrscr();
	puts("enter u r range");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=0;j<n-i;j++)
		printf(" ");
		for(j=i;j>=1;j--)
		printf("%d",i);
		printf("\n");
	}
	getch();
}