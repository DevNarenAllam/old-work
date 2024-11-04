#include<stdio.h>
main()
{
int *arr;
int *p,i,big,sma;
clrscr();
arr=(int *)malloc(10*sizeof(int));
printf("Enter 10 numbers into array :");
for(i=0;i<10;i++)
scanf("%d",arr+i);
p=arr;
sma=big=arr[0];
for(i=0;i<10;i++)
{
   if (big<*(p+i))
   big=*(p+i);
   if (sma>*(p+i))
   sma=*(p+i);
}
printf("Big = %d \n",big);
printf("Small = %d",sma);
}