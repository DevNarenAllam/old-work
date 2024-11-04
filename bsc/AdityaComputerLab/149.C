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
  if (i==j || j==n-1-i)
  printf("%3d",arr[i][j]);
  else
  printf("   ");
  printf("\n");
}
}