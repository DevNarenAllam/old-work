#include<stdio.h>
#include<string.h>
main()
{
char *str,*ch;
int occ,i;
clrscr();
str=(char *)malloc(80*sizeof(char));
ch=(char *)malloc(1*sizeof(char));
printf("Enter the string :\n");
gets(str);
printf("Enter the character to be searched :");
scanf("%c",ch);
for(i=0;str[i]!='\0';i++)
  if (*(str+i)==*ch)
  occ=i;
printf("%c last time occured at %d",*ch,occ+1);
}