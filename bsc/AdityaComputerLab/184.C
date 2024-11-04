#include<stdio.h>
main()
{
char lining[80];
int i,j;
clrscr();
printf("Enter a line of text :\n");
gets(lining);
for(i=0;lining[i]!='\0';i++)
  for(j=i+1;lining[j]!='\0';j++)
  if (lining[i]==lining[j])
  lining[j]='*';
for(i=0;lining[i]!='\0';i++)
if(lining[i]!='*')
printf("%c",lining[i]);
}