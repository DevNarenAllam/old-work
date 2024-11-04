#include<stdio.h>
main()
{
char a[10],ch;
int i,c;
clrscr();
printf("Enter howmany digits\n");
scanf("%d",&c);
fflush(stdin);
printf("Enter a number\n");
for(i=1;i<=c;i++)
a[i]=getchar();
printf("Enter a digit\n");
scanf("\n%c",&ch);
for(i=1;i<=c;i++)
{
if(a[i]==ch)
 printf("%c is in %d position\n",ch,i);
}
getch();}
