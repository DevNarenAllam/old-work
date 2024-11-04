main()
{
int n,i,j,m,l;
clrscr();
printf("Enter number of rows:\n");
scanf("%d",&n);
l=add(n);
printf("%d\n",l);
m=1;
for(i=1;i<=n;i++)
{
if(i%2==0)
{
for(j=1;j<=n-1;j++)
printf("   ");}
else
{
for(j=1;j<=n-i;j++)
printf("   ");
}
for(j=1;j<=i;j++)
printf("%3d",m++);
printf("\n");
}
getch();
}
add(x)
int x;
{
int sum=0,s;
 for(s=1;s<=x;s++)
 {
   sum=sum+s;
   }
   return(sum);
}

