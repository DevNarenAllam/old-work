#include<stdio.h>
main()
{
int arr[10][10];
int i,j,n,k,trace=0;
clrscr();
printf("Enter the order of the matrix :");
scanf("%d",&n);
printf("Enter %dx%d matrix \n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&arr[i][j]);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  if (i==j)
  trace=trace+arr[i][j];
  printf("Trace of %dx%d matrix :%d",n,n,trace);
}