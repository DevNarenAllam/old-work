   /* PROGRAM TO PRINT THE SUM OF THE FOLLOWING SERIES 1+8+27+64+....+n */
# include <stdio.h>
main()
{
  int i,n,sum=0;
  clrscr();
  printf("UPTO WHICH NUMBER YOU WANT TO FIND THE SUM\n");
  scanf("%d",&n);
  for(i=1;i*i*i<=n;i++)
	sum=sum+i*i*i;
  printf("SUM = %d",sum);
  getch();
}

