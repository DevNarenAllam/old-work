#include<stdio.h>
main()
{
char name[30];
int i,j,k;
clrscr();
printf("Enter a string :");
gets(name);
k=30;
for(i=strlen(name)-1;i>=0;i--)
{
  for(j=0;j<k;j++)
  printf(" ");
  for(j=0;j<=i;j++)
   printf("%2c",name[j]);
  printf("\n");
}
}