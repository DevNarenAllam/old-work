#include<stdio.h>
main()
{
struct student
     {
     int sno;
     char sname[30];
     int avg;
     }stud,*p;
clrscr();
printf("Enter the student number :");
scanf("%d",&stud.sno);
printf("Enter the student name :");
fflush(stdin);
gets(stud.sname);
printf("Enter the student average :");
scanf("%d",&stud.avg);
p=&stud;
printf("\n\n\nprinting with pointer notation \n");
printf("Student number : %d\n",p->sno);
printf("Student name   : %s\n",p->sname);
printf("Student Average: %d\n",p->avg);
printf("Grade          : ");
if (p->avg >=80)
printf("Distinction");
else
if (p->avg >=60 && p->avg < 80)
printf("First Class");
else
if (p->avg >=50 && p->avg < 60)
printf("Second Class");
else
if (p->avg >=40 && p->avg < 50)
printf("Third Class");
else
printf("Failed");
}