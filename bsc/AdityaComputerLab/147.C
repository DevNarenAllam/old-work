#include<stdio.h>
#include<math.h>
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
for(i=0;i<n;i++)
{
  sum=0;
  for(j=0;j<n;j++)
  sum=sum+arr[i][j];
  printf("Sum of %d row : %d\n",i+1,sum);
}
for(i=0;i<n;i++)
{
  sum=0;
  for(j=0;j<n;j++)
  sum=sum+arr[j][i];
  printf("Sum of %d column : %d\n",i+1,sum);
}
}