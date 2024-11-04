		/* PROGRAM TO FIND SALES DETAILES OF FIVE PERSONS */
# include <stdio.h>
main()
{
  char a[5][10];
  int s[6][6],tot[6],i,j,grand=0;
  clrscr();
  for (i=0;i<5;i++)
  {
	printf("ENTER THE NAMES OF %d PERSON\n",i+1);
	scanf("%s",&a[i]);
	printf("ENTER HIS SIX MONTHS SALES DETAILS\n");
	for (j=0;j<6;j++)
	  scanf("%d",&s[i][j]);
  }
  clrscr();
  gotoxy(10,1);
  printf("NAME");
  gotoxy(20,1);
  printf("TOTAL SALES");
  for (i=0;i<5;i++)
  {
	tot[i]=0;
	for (j=0;j<6;j++)
	  tot[i]=tot[i]+s[i][j];
	gotoxy(10,i+2);
	printf("%s",a[i]);
	gotoxy(25,i+2);
	printf("%d",tot[i]);
  }
  gotoxy(15,10);
  for (j=0;j<5;j++)
	 grand=grand+tot[j];
  printf("GRAND TOTAL IS %d",grand);
  getch();
}