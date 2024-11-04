#include<stdio.h>
#include<math.h>
main()
{
int arr[10][10];
int i,j,n;
clrscr();
printf("Enter the order of the matrix :");
scanf("%d",&n);
printf("Enter %dx%d matrix \n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&arr[i][j]);
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  if (i>0 && i<n-1 && j>0 && j<n-1)
  printf("%3d",arr[i][j]);
  else
  printf("   ");
  printf("\n");
}
}