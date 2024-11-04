#include<stdio.h>
main()
{
char *str1,*str2;
clrscr();
str1=(char *)malloc(80*sizeof(char));
printf("Enter string1 : ");
gets(str1);
str2=str1;
printf("string2 = %s",str2);
}