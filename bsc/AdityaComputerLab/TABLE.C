main()
{
int i=1,j=0,k,n,m;
clrscr();
printf("Enter 1 to n th table:\n");
scanf("%d",&n);
printf("Enter upto any number:\n");
scanf("%d",&m);
while(i<=n)
{  j=0;
  while(j<=m)
  {
    k=i*j;
    printf("%d*%d=%d\n",i,j,k);
    j++;
    }
    getch();
        i++;
    }
}
