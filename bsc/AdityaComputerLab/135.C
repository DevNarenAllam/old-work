#include<stdio.h>
#include<math.h>
main()
{
int n,i,x,l;
long float sum=0.0;
long int fact(int);
clrscr();
printf("Enter N value :");
scanf("%d",&n);
printf("Enter X value :");
scanf("%d",&x);
for(i=0;i<=n;i++)
{
 l=pow(x,i);
 sum=sum+((l*1.0)/fact(i));
}
printf("%f",sum);
}


long int fact(int i)
{
int j;
long fat=1;
for(j=1;j<=i;j++)
  fat=fat*j;
return(fat);
}