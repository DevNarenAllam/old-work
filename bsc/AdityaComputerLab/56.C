#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
int arr[20];
int n,i,max1,max2,pos;
clrscr();
printf("Enter how many numbers :");
scanf("%d",&n);
for (i=0;i<n;i++)
 scanf("%d",&arr[i]);
max1=arr[0];
for(i=0;i<n;i++)
  if (max1<arr[i])
  max1=arr[i];
for(i=0;i<n;i++)
   if (max1!=arr[i])
   {
   max2=arr[i];
   break;
   }
for(i=0;i<n;i++)
  if (max1!=arr[i] && max2<arr[i])
  {
  max2=arr[i];
  pos=i+1;
  }
printf("Second biggest element : %d\n",max2);
printf("Its position is : %d",pos);
}