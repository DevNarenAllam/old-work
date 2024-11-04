#include<stdio.h>
main()
{
char lining[80];
int i,cou=0;
clrscr();
printf("Enter a line of text :\n");
gets(lining);
for(i=0;lining[i]!='\0';i++)
  if (lining[i]==' ' || lining[i]=='.' || lining[i]==',')
  cou++;
printf("No of words occured = %d",cou+1);
}