main()
{
int n,i,j,s;
clrscr();
printf("Enter n value\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=n;j>i;j--)
{
printf("   ");
}
for(s=i;s>=0;s--)
{
printf("%3d",s);
}
for(s=1;s<=i;s++)
{
printf("%3d",s);
}
printf("\n");
}
getch();
}