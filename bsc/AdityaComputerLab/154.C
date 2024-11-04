	/* PROGRAM TO FIND THE GIVEN MATRIX IS A MAGIC MATIX OR NOT */
# include <stdio.h>
int a[20][20],sr[10],sc[10],z,mr,mc,md;
main()
{
  int i,j,m,n,c=0,s,p,q,cc=0;
  printf("%d\n",z);
  do
  {
    clrscr();
    printf("ENTER THE ORDER OF ANY SQUARE MATRIX\n");
    scanf("%d%d",&m,&n);
  }
  while (m!=n);
  printf("ENTER %d NUMBERS\n",m*n);
  for (i=0;i<m;i++)
     for (j=0;j<n;j++)
       scanf("%d",&a[i][j]);
  clrscr();
  printf("THE GIVEN MATRIX IS\n\n");
  for (i=0;i<m;i++)
  {
     for (j=0;j<n;j++)
       printf("%4d",a[i][j]);
     printf("\n");
  }
  for (p=0;p<m;p++)
  for (q=0;q<n;q++)
    for (i=0;i<m;i++)
       for (j=0;j<n;j++)
	 if (a[p][q]==a[i][j])
	   c++;
	 if (c!=m*m)
	 {
	   printf("\n\nELEMENTS MUST BE UNIQUE\n");
	   getch();
	   exit();
	 }
  mr=sumrow(m,n);
  mc=sumcol(m,n);
  md=sumdig(m,n);
  if (mr==m && mc==n && md==1)
    printf("\n\nHENCE IT IS A MAGIC MATRIX\n");
  else
    printf("\n\nHENCE IT IS NOT A MAGIC MATRIX\n");
  getch();
}
sumrow(int m,int n)
{
  int i,j;
  printf("\n");
  for (i=0;i<m;i++)
  {
    sr[i]=0;
    for (j=0;j<n;j++)
      sr[i]=sr[i]+a[i][j];
  }
  for (i=0;i<m;i++)
    printf("SUM OF ROW NO.%d IS   %d\n",i+1,sr[i]);
  i=0;
  for (j=i+1;j<n;j++)
  {
    if (sr[i]==sr[j])
      mr++;
  }
  mr++;
  return(mr);
}
sumcol(int m,int n)
{
  int i,j;
  for (i=0;i<m;i++)
  {
    sc[i]=0;
    for (j=0;j<n;j++)
      sc[i]=sc[i]+a[j][i];
  }
  for (i=0;i<m;i++)
    printf("SUM OF COLUMN %d IS   %d\n",i+1,sc[i]);
  i=0;
  for (j=i+1;j<n;j++)
  {
    if (sc[i]==sc[j])
      mc++;
  }
  mc++;
  return(mc);
}
sumdig(int m,int n)
{
  int i,j,sd1,sd2,md=0;
  sd1=sd2=0;
  for (i=0;i<m;i++)
      sd1=sd1+a[i][i];
  j=m-1;
  for (i=0;i<n;i++)
  {
      sd2=sd2+a[i][j];
      j--;
  }
  printf("SUM OF DIAGONAL 1 IS %d\n",sd1);
  printf("SUM OF DIAGONAL 2 IS %d\n",sd2);
  if (sd1==sd2)
    md++;
  return(md);
}