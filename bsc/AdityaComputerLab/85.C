#include<stdio.h>
main()
{
int arr[5],brr[5];
int i,j,k,temp;
clrscr();
printf("Enter 5 elements into arr\n");
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
printf("Enter 5 elements into brr\n");
for(j=0;j<5;j++)
scanf("%d",&brr[j]);
temp=arr[0];
arr[0]=brr[4];
brr[4]=temp;
temp=brr[0];
brr[0]=arr[4];
arr[4]=temp;
for(i=1;i<4;i++)
 {
 temp=arr[i];
 arr[i]=brr[i];
 brr[i]=temp;
 }
for(i=0;i<5;i++)
printf("%d       %d\n",arr[i],brr[i]);
}