/*
1 2 3
3 4 5
6 7 8
*/
void main()
{
	int a[5][5],i,j,n;

	printf("Enter dim");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	clrscr();


	for(i=0;i<n;i++,printf("\n"))
	for(j=0;j<n;j++)
	printf("%2d",a[i][j]);
       i=0;
       while(n>0)
	{
	for(j=i;j<=n-1;j++)
	printf("%d",a[i][j]);
	for(j=i+1;j<n;j++)
	printf("%d",a[j][n-1]);
	for(j=n-2;j>=i;j--)
	printf("%d",a[n-1][j]);
	for(j=n-2;j>i;j--)
	printf("%d",a[j][i]);
	i++;
	n--;

	}



}
