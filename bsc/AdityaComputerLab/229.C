#include<stdio.h>
main(int argc,char *argv[])
{
	FILE *s,*p;
	char c;
	clrscr();
	if(argc!=3)
	{
		printf("Insufficien argruments : ");
		exit();
	}
	s=fopen(argv[1],"a");
	if(s==NULL)
		printf("Unable to open target file (i.e 1st file: )");
	p=fopen(argv[2],"r");
	if(p==NULL)
		printf("Unable to open source file (i.e 2nd file: )");

	while(!feof(p))
	{
		c=getc(p);
		putc(c,s);
	}
	printf("File succesfully copied :" );
}

