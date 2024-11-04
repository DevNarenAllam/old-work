
main()
{
	int n,i,j,s=1;
	clrscr();
	puts("enter u r range");
	scanf("%d",&n);
	printf(" %d\n",s);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf(" %d",j);
		printf(" %d",s);
		printf("\n");
	}
	getch();
}