   /* PROGRAM TO PRINT THE SUM OF THE FOLLOWING SERIES 1+3+5+7+9+....+n */
# include <stdio.h>
main()
{
  int i,n,sum=0;
  clrscr();
  printf("UPTO WHICH NUMBER YOU WANT TO FIND THE SUM\n");
  scanf("%d",&n);
  for(i=1;i<=n;i+=2)
	sum=sum+i;
  printf("SUM = %d",sum);
  getch();
}

