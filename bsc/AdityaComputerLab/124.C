#include<stdio.h>
main()
{
int num,p,q,r,x;
clrscr();
num=1;
q=0;
printf("Enter number of rows :");
scanf("%d",&p);
while(q<p)
{
for(r=40-3*q;r>0;r--)
printf(" ");
for(x=0;x<=q;x++)
{
  if(x==0 || q==0)
  num=1;
  else
 num=(num*(q-x+1))/x;
  printf("%6d",num);
}
printf("\n");
q++;
}
getch();
}
