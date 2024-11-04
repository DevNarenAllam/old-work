main()
{
int n,i,j,s,k=1;
clrscr();
printf("Enter n value\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=i;j<=n;j++)
{
printf("   ");
}
for(s=i;s>=0;s--)
{
printf("%3d",k);
k++;
}
/*for(s=1;s<=i;s++)
{
printf("%3d",s);
} */
printf("\n");
}
getch();
}