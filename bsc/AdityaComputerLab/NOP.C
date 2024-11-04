main()
{
char x[100],y[100];
int i,j=0,k,s=0,t,p=0,r=0;
clrscr();
printf("Enter string with '@'\n");
gets(x);
k=strlen(x);
printf("%d\n",k);
for(i=0;i<k;i++)
 {
 y[j]=x[i];
 j++;
if(x[i]==' '|| x[i]=='@')
{
for(t=j-2;t>=0;t--)
 {
 if(y[t]==y[s])
  {
  p++;
  s++;
  }}
    if(p==j-1)
   r=r+1;
  j=0;
  p=0;
  s=0;
  }
  }
   printf("no of palindromes:%d",r);
  getch();
  }