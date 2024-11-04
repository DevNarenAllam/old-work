#include<stdio.h>
main()
{

	int i,j,count=0,t;
	char ch[80],ch1[80],aditya,*s,*p;
	clrscr();
	printf("Enter a string : ");
	gets(ch);
	printf("Enter a string : ");
	gets(ch1);
	s=ch;
	p=ch1;
	t=strlen(ch1);
	for(i=0;p[i]!='\0';i++)
	{
			if(p[i]==s[i])
			{
				count++;
			}
	}
	if(count==t)
	{
		printf("Initial length  of s2 in s1 : %d ",count);
		goto vijay;
	}
	for(i=0;p[i]!='\0';i++)
	{
		aditya=p[i];
		for(j=0;ch[j]!='\0';j++)
		{
			if(s[j]==aditya)
			{
				count++;
			}
		}
		if(s[i]!=aditya)
		{
			printf("0");
			exit();
		}
	}
	printf("Initial length of s2 in s1 : %d ",count);
vijay:
	getch();
}
