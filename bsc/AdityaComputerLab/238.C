#include<stdio.h>
main()
{
int *arr[10],*brr[10],*crr[10];
int i,j,n,k;
clrscr();
printf("Enter the order of the matrices :");
scanf("%d",&n);
for(i=0;i<10;i++)
{
arr[i]=(int *)malloc(10*sizeof(int));
brr[i]=(int *)malloc(10*sizeof(int));
crr[i]=(int *)malloc(10*sizeof(int));
}
printf("Enter first %dx%d matrix \n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",*(arr+i)+j);
printf("Enter second %dx%d matrix \n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",*(brr+i)+j);
printf("Enter %dx%d matrix Multiplication :\n",n,n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
  *(*(crr+i)+j)=0;
    for(k=0;k<n;k++)
  *(*(crr+i)+j)=*(*(crr+i)+j)+*(*(arr+i)+k) * *(*(brr+k)+j);
  }
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  printf("%4d",*(*(crr+i)+j));
  printf("\n");
}
}