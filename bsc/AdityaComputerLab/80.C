				  /* PROGRAM TO FIND FREQUENCY TABLE */
# include <stdio.h>
main()
{
  int a[20],c=0,d=0,i,j=0,n;
  clrscr();
  printf("ENTER ANY NUMBER\n");
  scanf("%d",&n);
  printf("ENTER %d NUMBERS\n",n);
  for (i=0;i<n;i++)
	scanf("%d",&a[i]);
  do
  {
	 j++;
	 for (i=0;i<n;i++)
	   if (a[i]==j)
	   {
		 c++;
		 d++;
	   }
	 if (c!=0)
	 {
	   printf("%d OCCURED %d TIMES\n",j,c);
	   c=0;
	 }
  }
  while(n!=d);
  getch();
}

