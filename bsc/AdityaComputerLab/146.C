#include<stdio.h>
#include<math.h>
main()
{
int arr[10][10];
int i,j,n,k,sum=0;
float norm;
clrscr();
printf("Enter the order of the matrix :");
scanf("%d",&n);
printf("Enter %dx%d matrix \n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&arr[i][j]);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  sum=sum+(arr[i][j]*arr[i][j]);
  norm=sqrt(sum);
  printf("Norm of %dx%d matrix :%f",n,n,norm);
}