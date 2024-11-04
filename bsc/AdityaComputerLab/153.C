#include<stdio.h>
#include<math.h>
main()
{
int arr[10][10];
int i,j,k,l;
clrscr();
printf("Enter 3x3 matrix \n");
for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  scanf("%d",&arr[i][j]);
printf("After Helical Traversing \n");
for(j=0;j<3;j++)
printf("%3d",arr[0][j]);
for(i=1;i<3;i++)
printf("%3d",arr[i][2]);
for(j=1;j>=0;j--)
printf("%3d",arr[2][j]);
printf("%3d",arr[1][0]);
printf("%3d",arr[1][1]);
}