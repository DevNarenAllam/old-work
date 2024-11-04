#include<stdio.h>
main()
{
	int a[10],i=0,sum=0;
	clrscr();
	aaa:
	if(i<10)
	{
		printf("Enter a number : ");
		scanf("%d",&a[i]);
		i++;
		goto aaa;
	}
	i=0;
	kkk:
	if(i<10)
	{
		sum=sum+a[i];
		i++;
		goto kkk;
	}
	printf("sum of given numbers %d",sum);
	getch();
}


