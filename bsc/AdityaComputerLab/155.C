			   /* PROGRAM TO FIND SADDLE POINT */
# include <stdio.h>
main()
{
   int a[10][10],big,sml,i,j,m,n,k,max[10],min[10],c=0;
   clrscr();
   printf("ENTER THE ORDER OF THE SQUARE MATRIX \n");
   scanf("%d%d",&m,&n);
   printf("ENTER THE ELEMENTS OF THE MATRIX \n");
   for (i=0;i<m;i++)
     for (j=0;j<n;j++)
	   scanf("%d",&a[i][j]);
   clrscr();
   printf("THE GIVEN MATRIX IS \n\n");
   for (i=0;i<m;i++)
   {
     for (j=0;j<n;j++)
	   printf("%3d",a[i][j]);
	 printf("\n");
   }
   for (i=0;i<m;i++)
   {
	 big=0;
	 for (j=0;j<n;j++)
     {
       if (a[i][j] > big)
		  big=a[i][j];
	  }
	  max[i]=big;
	}
	for (i=0;i<m;i++)
	{
	   sml=a[i][0];
	   for (j=0;j<n;j++)
	   {
		  if (a[j][i] <sml )
		  sml=a[j][i];
	   }
	   min[i]=sml;
	}
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
		  if (min[i]==max[j])
		  {
			printf("\nSADDLE POINT IS : %d\n",min[i]);
			c++;
		  }
	   }
	}
	if(c==0)
		printf("\nTHERE IS NO SADDLE POINT\n");
	getch();
}




