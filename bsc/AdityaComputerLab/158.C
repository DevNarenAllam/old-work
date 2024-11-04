#include<stdio.h>
main()
{
int arr[10][10];
int i,j,row,col,n,k;
clrscr();
printf("Enter the order of the matrix :");
scanf("%d",&n);
printf("Enter the %dx%d matrix\n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&arr[i][j]);
for(i=0;i<n;i++)
{
row=0;
col=0;
   for(j=0;j<n;j++)
     if(arr[i][j]==0)
     {
     for(k=0;k<n;k++)
     {
     row=row+arr[i][k];
     col=col+arr[k][j];
     }
     arr[i][j]=row-col;
   }
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  printf("%3d",arr[i][j]);
  printf("\n");
}
}