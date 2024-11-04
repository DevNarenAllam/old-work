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
  i=0;
printf("After Helical Traversing \n");
for(j=0;j<3;j++)
 {
  printf("%d",arr[0][j]);
  if (j==2)
  {
     for(i=j-1;i<3;i++)
      printf("%d",arr[i][j]);
   }

   if(i==2)
    {
     for(j=i-1;j>0;j--)
       printf("%d",arr[i][j]);
      }
}    }