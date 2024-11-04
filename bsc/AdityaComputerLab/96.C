#include<stdio.h>
#include<math.h>
main()
{
int n,arr[10],sum=0,i;
float stdev,mean;
clrscr();
printf("Enter how many numbers ::");
scanf("%d",&n);
printf("Enter the elements : \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
mean=(sum*1.0)/n;
sum=0;
for(i=0;i<n;i++)
  sum=sum+pow((mean-arr[i]),2);
stdev=sqrt(sum);
printf("MEAN   : %f\n",mean);
printf("STANDARD DEVIATION   : %f",stdev);
}