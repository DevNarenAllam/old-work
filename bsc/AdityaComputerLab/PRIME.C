main()
{
int i,j,n,temp;
clrscr();
printf("Enter n value\n");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
  temp=0;
  for(j=2;j<=i-1;j++)
  {
   if(i%j==0)
    {
     temp=temp+1;
     }
    }
    if(temp==0)
     printf("%d\n",i);
   }
   getch();
   }