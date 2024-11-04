#include<stdio.h>
main()
{
int arr[10];
int i,j,temp;
clrscr();
printf("Enter 10 elements \n");
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
for(j=0;j<5;j++)
  {
  temp=arr[j];
  arr[j]=arr[j+5];
  arr[j+5]=temp;
  }
for(i=0;i<10;i++)
printf("%d\n",arr[i]);
}