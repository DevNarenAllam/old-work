#include<stdio.h>
main()
{
char *p,*q;
int i,j,cou=0,x;
clrscr();
p=(char *)malloc(20 * sizeof(char));
q=(char *)malloc(20 * sizeof(char));
printf("Enter 1 string :");
gets(p);
printf("Enter 2 string :");
gets(q);
for(i=0;*(p+i)!='\0';i++)
{
x=0;
     for(j=0;*(q+j)!='\0';j++)
     if (*(p+i)==*(q+j))
       {
       x=5;
       break;
       }
       if (x==0)
       cou++;
}
printf("No of characters which are in string1 and not in string2 : %d",cou);
}