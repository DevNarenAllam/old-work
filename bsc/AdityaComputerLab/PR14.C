#include<stdio.h>
main()
{
  float f,c,cs;
  clrscr();
  printf("Enter fahrenheit\n");
  scanf("%f",&f);
  c=(5.0/9.0)*(f-32.0);
  printf("%0.2f\n",c);
  cs=((9.0*c)/5.0)+32.0;
  printf("%0.2f",cs);
  }