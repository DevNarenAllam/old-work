main()
{
  char name[20],des[20],dep[20];
  int bas;
  float da,hra,gross;
clrscr();
printf("Enter employee name,designation,department\n");
scanf("%s%s%s",&name,&des,&dep);
printf("Enter basic\n");
scanf("%d",&bas);
da=bas*0.4;
hra=bas*0.2;
gross=bas+da+hra;
printf("\nda :  %f   hra:   %f   Gross : %f",da,hra,gross);
getch();
}