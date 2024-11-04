#include<stdio.h>
main()
{
int arr[10][10],brr[10][10],crr[10][10];
int i,j,n;
clrscr();
printf("Enter the order of the matrices :");
scanf("%d",&n);
printf("Enter first 2x2 matrix \n");
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&arr[i][j]);
printf("Enter second 2x2 matrix \n");
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&brr[i][j]);
printf("Enter 2x2 matrix addition :\n");
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  crr[i][j]=arr[i][j]-brr[i][j];
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  printf("%4d",crr[i][j]);
  printf("\n");
}
}