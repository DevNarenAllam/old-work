#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char para[20][80];
	int i,j,x,y,n;
	printf("Enter up to lines");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	gets(para[i]);
	printf("Enter range ");
	scanf("%d%d",&x,&y);
	y++;
	for(;x<=y;x++,y++)
	{
		if(y<n)
		strcpy(para[x],para[y]);
		else
		continue;
	}

		for(i=0;i<n-(y-x);i++)
		puts(para[i]);

		for(i=n-(y-x);i<n;i++)
		strcpy(para[i],'\0');
	 getch();
}




