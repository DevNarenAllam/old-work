#include<stdio.h>
main()
{
char a[20][20]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN","ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETEEN"};
char c[10][20]={"TWENTY","THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};
long int n,k;
clrscr();
printf("Enter N value :");
scanf("%ld",&n);
if (n==0)
printf("%s ",a[n]);
if (n/100000)
{
k=n/100000;
     if (k>19)
     {
	printf("%s ",c[k/10-2]);
	k%=10;
     }
     if (k<19 && k>9)
	printf("%s LAKH ",a[k]);
     if (k<=9)
	printf("%s LAKH ",a[k]);
}
n%=100000;
if (n/1000)
{
  k=n/1000;
  if (n/1000>9)
     if (k>19)
     {
	printf("%s ",c[k/10-2]);
	k%=10;
     }
     if (k<19 && k>9)
	printf("%s THOUSAND ",a[k]);
     if (k<=9)
	printf("%s THOUSAND ",a[k]);
}
n%=1000;
if (n/100)
printf("%s HUNDRED AND ",a[n/100]);
n%=100;
if (n>19)
printf("%s ",c[n/10-2]);
if (n<19 && n>9)
printf("%s ",a[n]);
n%=10;
if (n>0)
printf("%s ",a[n]);
getch();
}