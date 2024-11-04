	    /* GIVEN STRING IS A WEAK PALINDROME OR NOT */

#include<stdio.h>
main()
{
    char x[100];
    int c,i,j=0,t=0;
    clrscr();
      printf("Enter the string\n");
      gets(x);
      c=strlen(x);
      printf("%d\n",c);
      for(i=c-1;i>=0;i--)
      {
	   printf("%c",x[i]);
	   if(x[i]==x[j])
	      t++;
	      j++;
       }
	printf("\n");
	if(t!=c)
	{
	    printf("Not palindrome");
	    exit();
	 }
	 else
	 {
	    printf("palindrome");
	 }
	 getch();
}