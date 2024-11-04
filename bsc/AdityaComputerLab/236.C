#include<stdio.h>
main()
{
char *s;
int i,j;
clrscr();
s=(char *)malloc(20*sizeof(char));
printf("Enter the string :");
gets(s);
j=i=0;
while(*(s+i)!='\0')
{
j++;
i++;
}
printf("Length of the String : %d ",j);
}