#include<stdio.h>
main()
{
long i,j,k,l,m,n;
clrscr();
printf("Enter M & N values ");
scanf("%ld%ld",&m,&n);
k=l=m;
for (i=1;i<n;i++)
{
while (l!=k/m)
{
k=k+m;
}
l=k;
}
printf("%ld",k);
getch();
}