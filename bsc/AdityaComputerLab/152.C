		/* PROGRAM TO PERFORM THE OPERATIONS ON A GIVEN MATRIX */
# include <stdio.h>
main()
{
  int a[10][10],i,j,temp;
  clrscr();
  printf("ENTER THE ELEMENTS OF ANY 4*4 MATRIX\n");
  for (i=0;i<4;i++)
	for (j=0;j<4;j++)
	  scanf("%d",&a[i][j]);
  clrscr();
  printf("THE GIVEN 4*4 MATRIX IS\n");
  for (i=0;i<4;i++)
  {
	for (j=0;j<4;j++)
	  printf("%3d",a[i][j]);
	printf("\n");
  }
  temp=a[1][1];
  a[1][1]=a[1][1]+a[1][2];
  a[1][2]=a[1][2]+a[2][2];
  a[2][2]=a[2][2]+a[2][1];
  a[2][1]=a[2][1]+temp;
  printf("THE RESULTANT MATRIX IS\n");
  for (i=0;i<4;i++)
  {
	for (j=0;j<4;j++)
	  printf("%3d",a[i][j]);
	printf("\n");
  }
  getch();
}