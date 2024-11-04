main()
{
	int n,i,j,k=1;
	clrscr();
	puts("enter u r range");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		printf(" ");
		for(j=i;j>=1;j--)
		printf("%d",k);
		k++;
		printf("\n");
	}
	getch();
}