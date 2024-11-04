main()
{
char a[120];
int i,j,s,n;
clrscr();
printf("Enter string\n");
gets(a); n=strlen(a);
n--;
for(i=n;i>=0;i--)
{
  for(s=0;s<=i;s++)
  {
    printf("%c",a[s]);
   }
   printf("\n");
 }
 getch();
 }