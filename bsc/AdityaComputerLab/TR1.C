main()
{
int n,i,j,s;
clrscr();
printf("Enter n value\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=n;j>i;j--)
{
 printf(" ");
 }
 for(s=i;s>=1;s--)
  printf("%d",s);
  printf("\n");
}}
