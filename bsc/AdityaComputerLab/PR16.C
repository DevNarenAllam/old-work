#include<stdio.h>
#include<math.h>
main()
{
 int x1,x2,y1,y2;
 float d;
 clrscr();
 printf("Enter  two points\n");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
 printf("d=  %0.2f",d);
 }