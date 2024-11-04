#include<stdio.h>
struct person
{
int sno;
char name[20];
int age;
struct date
{
	int year;
	int month;
	int day;
	}
	d;
}a[10];
main()
{      int i;
  clrscr();
  for(i=1;i<=4;i++)
    {
    printf("ENTER SNO\n");
    scanf("%d",&a[i].sno);
  fflush(stdin);
  printf("Enter name\n");
  gets(a[i].name);
  fflush(stdin);
  printf("Enter age\n");
  scanf("%d",&a[i].age);
  printf("Enter date of birth\n");
  scanf("%d%d%d",&a[i].d.day,&a[i].d.month,&a[i].d.year);
  }
    printf("sno	name	age	date of birth\n");
  for(i=1;i<=4;i++)
  {
   printf("%d\t%s\t%d\t%d-%d-%d\n",a[i].sno,a[i].name,a[i].age,a[i].d.day,a[i].d.month,a[i].d.year);
  }
  getch();
  }

