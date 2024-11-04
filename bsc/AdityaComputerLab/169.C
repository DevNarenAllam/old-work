#include<stdio.h>
main()
{
char name[30];
int i,j,k;
clrscr();
printf("Enter a string :");
gets(name);
k=0;
for(i=0;i<strlen(name);i++)
  {
  printf("\t\t");
  for(j=0;j<=i;j++)
  if (name[k]!='\0')
  {
   printf("%4c",name[k]);
   k++;
  }
  else
  break;
  printf("\n");
}
getch();
}