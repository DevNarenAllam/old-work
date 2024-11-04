#include<stdio.h>
main()
{
char *s,*p,*q;
int i,j;
clrscr();
s=(char *)malloc(20*sizeof(char));
p=(char *)malloc(20*sizeof(char));
q=(char *)malloc(40*sizeof(char));
printf("Enter 1 string :");
gets(s);
printf("Enter 2 string :");
gets(p);
j=0;
for(i=0;*(s+i)!='\0';i++,j++)
   *(q+j)=*(s+i);
for(i=0;*(p+i)!='\0';i++,j++)
   *(q+j)=*(p+i);
puts(q);
}