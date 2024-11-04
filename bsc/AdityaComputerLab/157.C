#include<stdio.h>
#include<math.h>
main()
{
int arr[10][10],brr[10][10];
int i,j,n,x;
clrscr();
printf("Enter the order of the matrix :");
scanf("%d",&n);
printf("Enter %dx%d matrix \n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&arr[i][j]);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  brr[i][j]=arr[j][i];
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
 if (brr[i][j]==arr[i][j])
 x=0;
 else
 {
 x=5;
 break;
 }
 if(x==5)
 break;
}
if (x==0)
 printf("\nMatrix is symmetric ");
 else
 printf("\nMatrix is not symmetric");
}