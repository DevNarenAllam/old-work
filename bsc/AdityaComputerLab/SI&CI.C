#include<math.h>
main()
{
float p,n,r,si,ci,m;
clrscr();
printf("Enter p,n,r values\n");
scanf("%f%f%f",&p,&n,&r);
si=(p*n*r)/100;
m=pow(1+(r/100),n);
ci=(p*m)-p;
printf("simple interest= %0.2f   ,compound interest= %0.2f",si,ci);
}
