#include<stdio.h>
main()
{
char str[10][80];
int i,j,cou,n;
clrscr();
printf("Enter No of names :");
scanf("%d",&n);
printf("Enter strings :\n");
for(i=0;i<n;i++)
{
fflush(stdin);
gets(str[i]);
}
printf("Distinct names are :\n");
for(i=0;i<n;i++)
{
cou=0;
   for(j=0;j<n;j++)
     if(strcmp(str[i],str[j])==0)
     if (i<=j)
     cou++;
     else
     break;
   if (i<=j)
printf("%s\n",str[i]);
}
}