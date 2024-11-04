/*To delete repeated character in a string*/
main()
{
char a[20];int i,j,c=0,l;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
c=0;
for(j=0;j<i;j++)
{
if(a[i]==a[j])
{
c=1;
break;
}
}
if(c==0)
printf("%c",a[i]);
 }
getch();
}


