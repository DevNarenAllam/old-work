
/* TO PRINT FIBONACCI SERIES USING RECURSIVE FUNCTIONS */
main()
{
int i,n;
clrscr();
printf("Enter how many values in the series :");

scanf("%d",&n);

for(i=0;i<n;i++)
printf("%d\n",fibo(i));
getch();
}
fibo(int n)
{
if(n==0)
return 0;
else
if(n==1)
return 1;
else if(n<=2)
return 1;
else return fibo(n-1)+fibo(n-2);
}