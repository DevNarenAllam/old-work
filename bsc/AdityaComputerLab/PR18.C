main()
{
 float d,m,cm;
 clrscr();
 printf("Enter the distance between two cities\n");
 scanf("%f",&d);
 m=d*1000;
 cm=m*100;
 printf("meters  :  %f\n  centimeters:  %f",m,cm);
getch();
}