#include<stdio.h>
main()
{
int arr[10];
int i,j,min;
clrscr();
printf("Enter 10 elements \n");
for (i=0;i<10;i++)
scanf("%d",&arr[i]);
min=arr[0];
for (i=0;i<10;i++)
if (min>arr[i])
min=arr[i];
for (j=0;j<10;j++)
 arr[j]=arr[j]-min;
printf("After doing the operation \n");
for(j=0;j<10;j++)
 printf("%d\n",arr[j]);
}