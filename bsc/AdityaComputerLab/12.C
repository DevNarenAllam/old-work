	    /* 12 */

#include<stdio.h>
#include<math.h>
main()
{
	int sec,min=0,hrs=0,i;
	clrscr();
	printf("Enter the no. of sec : ");
	scanf("%d",&i);
	while(i>=0)
	{
		if(i >=60)
			min++;
		if(min >= 60)
		{
			hrs++;
			min=0;
		}
		if(i <60)
			sec=i;
		i=i-60;

	}
	printf(" %d hrs %d min %d sec ",hrs,min,sec);
	getch();
}