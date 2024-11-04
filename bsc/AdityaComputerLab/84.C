#include<stdio.h>
main()
{
int arr[10];
int i,j,accumulation;
clrscr();
printf("Enter 10 elements \n");
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
for(i=0;i<10;i++)
   if (arr[i]==0)
   {
   accumulation=0;
   for(j=0;j<10;j++)
   accumulation=accumulation+arr[j];
   arr[i]=accumulation;
   }
for(i=0;i<10;i++)
printf("%d\n",arr[i]);
}