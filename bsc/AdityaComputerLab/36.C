#include<stdio.h>
main()
{
	int i=0,j;
	char a;
	clrscr();
	printf("Enter a string : ");
	scanf("%s",&a);
	while(a!='$')
	{
	 i++;
	  scanf("%s",&a);
          	}
	printf("The length of the string = %d",i);
	getch();
}
