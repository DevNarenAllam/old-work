#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char para[20][80];
	int i,j,x,y,n,p;
	printf("Enter how many u want ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	gets(para[i]);
	printf("Enter range to be deleted");
	scanf("%d%d",&x,&);

	for(;x<y;x++,y++)
	{
		if(y<=n)
		strcpy(para[x],para[y]);
		else{
		for(i=0;i<n-(y-x);i++)
	 puts(para[i]);
	 }


	 }

	 getch();
}