# include <stdio.h>
main()
{
   int i,j,k;
   char  s1[20],s2[20];
   clrscr();
   gets(s1);
   gets(s2);
   for (k=1;k<=4;k++)
   {
   for (i=1;i<=3;i++)
   {
   for (j=1;j<=4;j++)
   {
   printf("%s",s1);
   printf("%s",s2);
   }
   }
   for (i=1;i<=3;i++)
   {
   for (j=1;j<=4;j++)
   {
   printf("%s",s2);
   printf("%s",s1);
   }
   }
   }
   }
