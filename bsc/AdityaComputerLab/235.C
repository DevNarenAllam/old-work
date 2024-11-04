#include<stdio.h>
main()
{
char *s,*p,*q;
int i,j;
clrscr();
s=(char *)malloc(20*sizeof(char));
p=(char *)malloc(20*sizeof(char));
printf("Enter 1 string :");
gets(s);
printf("Enter 2 string :");
gets(p);
j=i=0;
while(*(s+i)!='\0' && *(p+i)!='\0')
{
if (*(s+i)==*(p+i))
      j++;
i++;
}
if (*(s+i)=='\0' && *(p+i)=='\0' && j==strlen(s))
printf("Strings are same ");
else
printf("Strings are not same ");
}