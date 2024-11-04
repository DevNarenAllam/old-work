# include <stdio.h>
main()
  {
    int n,r,d,f;
    int fact(int, int, int);
    clrscr();
    printf(" Feed value to n : ");
    scanf("%d",&n);
    printf("\n Feed value to r : ");
    scanf("%d",&r);

    d=n-r;
    if (n==0)
      {
	f=1;
	printf("\n\n\t\t NCR for n = %d & r = %d is %d ",n,r,f);
      }
    else
      {
	f = fact(n,r,d);
	printf("\n\n\t\t NCR for n = %d & r = %d is %d ",n,r,f);
      }
    getch();
  }

int fact(int x, int y, int z)
  {
   int i,n1,r1,d1,f;
   n1=r1=d1=1;

   for(i=1;i<=x;i++)  n1 *= i;
   for(i=1;i<=y;i++)  r1 *= i;
   for(i=1;i<=z;i++)  d1 *= i;

   f = n1/(r1*d1);

   return(f);
  }

