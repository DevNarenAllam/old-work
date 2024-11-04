#include<stdio.h>
main()
{
char *str[10],temp[20];
int i,j;
clrscr();
for(i=0;i<10;i++)
str[i]=(char *)malloc(20 * sizeof(char));
printf("Enter 10 strings \n");
for(i=0;i<10;i++)
{
printf("Enter %d string :",i+1);
gets(str[i]);
}
for(i=0;i<10;i++)
  for(j=0;j<10;j++)
  if (strcmp(str[i],str[j])<0)
  {
  strcpy(temp,str[i]);
  strcpy(str[i],str[j]);
  strcpy(str[j],temp);
  }
  for(i=0;i<10;i++)
  puts(str[i]);
}