main()
{
int i,j,n,k=1;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
printf("   ");
{
for(j=1;j<i;j++)
printf("%3d",k++);
printf("\n");
}
}
k=k+2;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("%3d",j);
printf("\n");
k--;
}
getch();
}