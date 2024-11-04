#include<stdio.h>
main()
{
int arr[10][10],brr[100];
int i,j,n,k;
clrscr();
printf("Enter the order of the matrix :");
scanf("%d",&n);
printf("Enter %dx%d matrix \n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&arr[i][j]);
  k=0;
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
    brr[k]=arr[i][j];
    k++;
  }
  printf("One dimentional array of %dx%d matrix :\n",n,n);
for(i=0;i<n*n;i++)
  printf("brr[%d] =%4d\n",i,brr[i]);
}