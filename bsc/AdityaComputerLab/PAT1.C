main()
{
int i,j,n,k;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
printf("   ");
{
for(j=1;j<=i;j++)
printf("%3d",i);
printf("\n");
}
}
getch();
}
