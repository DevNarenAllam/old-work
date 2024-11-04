main()
{
int i,j,f,n,c=0,s;
clrscr();
printf("Enter n\n");
scanf("%d",&n);
i=0;j=1;
f=i+j;
while(f<=n)
{
f=i+j;
i=j;
j=f;
c=0;
for(s=1;s<=f;s++)
{
if(f%s==0)
c++;
}
if(c==2)
if(f<=n)
printf("%d\n",f);
}
getch();
}
