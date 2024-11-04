    /* PROGRAM TO READ 9 ELEMENTS AND PRINT THEM IN 3*3 MATRIX FORM */
# include <stdio.h>
main()
{
  int a[9],c=0,i=0;
 /*register int i;*/
  clrscr();
  printf("ENTER 9 ELEMENTS\n");
  for (i=0;i<9;i++)
    scanf("%d",&a[i]);
  printf("THE ELEMENTS IN 3*3 MATRIX FORM IS\n");
  for (i=0;i<9;i++)
  {
    printf("%2d",a[i]);
    c++;
    if (c%3==0)
      printf("\n");
  }
  getch();
}



