#include<stdio.h>
main()
{
int *p,i,j,temp,n;
clrscr();
printf("Enter how many numbers :");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
printf("Enter the elements \n");
for(i=0;i<n;i++)
 scanf("%d",p+i);
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
   if(*(p+i)<*(p+j))
   {
   temp=*(p+i);
   *(p+i)=*(p+j);
   *(p+j)=temp;
   }
   printf("After sorting :\n");
for(i=0;i<n;i++)
printf("%d\n",*(p+i));
 }