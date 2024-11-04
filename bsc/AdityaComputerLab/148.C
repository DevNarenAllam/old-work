#include<stdio.h>
main()
{
int arr[10][10];
int i,j,n,k,sum;
clrscr();
printf("Enter the order of the matrix :");
scanf("%d",&n);
printf("Enter %dx%d matrix \n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&arr[i][j]);
  printf("\nUpper Triangle \n");
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  if (j>=i)
  printf("%3d",arr[i][j]);
  else
  printf("   ");
  printf("\n");
}
printf("\nLower Triangle \n");
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  if (i>=j)
  printf("%3d",arr[i][j]);
  else
  printf("   ");
  printf("\n");
}
}