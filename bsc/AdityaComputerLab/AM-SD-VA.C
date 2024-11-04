#include<math.h>
main()
{
int a[10],i,sum=0,n;
float am,var=0.0,sd;
clrscr();
printf("Enter n\n");
scanf("%d",&n);
printf("Enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum+=a[i];
am=(float)sum/n;
for(i=0;i<n;i++)
var=var+pow(a[i]-am,2);
sd=sqrt(var);
printf("mean=%f\nvarience=%f\nsd=%f",am,var,sd);
getch();
}