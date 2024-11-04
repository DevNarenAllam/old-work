
      #include<stdio.h>
      #include<math.h>
      main()
      {
       int n,m=1,d=1,i,y,s,p,k,k1,t,l,a,x,c,c1,j1=1,day;
       char month[12][20]={"JANUARY","FEBRUARY","MARCH","APRIL",
			   "MAY","JUNE","JULY","AUGUST",
			   "SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
	clrscr();
	 gotoxy(10,2);
	 printf("Enter the year which you want-(yyyy)\n");
	 gotoxy(10,3);
	 scanf("%d",&n);
	 if (n>2000)
	   s=n-2000;
	 else
	 if (n>1600)
	   s=n-1600;
	 else
	   s=n-1200;
	{
	   p=(s / 100) * 5;
	   k=s % 100;
	   t=k-1;
	   l=t / 4;
	   a=l*2+(t-l);
	 }
	   c=p+a;
	   y=d;
	 if ((k % 4==0) && (m>2))
	    x=(c+y+1) % 7;
	 else
	    x=(c+y) % 7;
	 for(i=0;i<x;i++)
	   printf(" ");
	   k1=x; c1=x;j1=m;
	clrscr();
	  gotoxy(10,2);
	  printf("\n\n                    %d   C A L A N D E R \n",n);
	  gotoxy(15,5);
	  printf("***********************************\n\n");
	getch();
	clrscr();
	while(j1<=12)
	{
	printf("\n\t\t\t\t%s",month[j1-1]);
	printf("\n        SUN       MON       TUE       WED       THU       FRI       SAT");
	if ((j1==1)||(j1==3)||(j1==5)||(j1==7)||(j1==8)||(j1==10)||(j1==12))
	{
	   printf("\n");
	   for(i=0;i<k1;i++)
	   printf("          ");
	   for(i=1;i<=31;i++)
	   {
	     printf("%10d",i);
	     c1=c1+1;
	     if (c1 % 7 ==0)
	     printf("\n\n");
	   }
	   k1=c1 % 7;
	   c1=k1;
	   j1=j1+1;
	   if ((j1-1) % 2 ==0)
	   {
	     getch();
	     clrscr();
	   }
	 }
	  if(j1==2)
	  {
	   printf("\n\t\t\t\t%s",month[j1-1]);
	   printf("\n        SUN       MON       TUE       WED       THU       FRI       SAT");
	   if ((n % 4) ==0)
	    day=29;    else    day=28;
	     printf("\n");
	     for(i=0;i<k1;i++)
	     printf("          ");
	     for(i=1;i<=day;i++)
	     {
	      printf("%10d",i);
	      c1=c1+1;
	      if (c1 % 7 ==0)
	      printf("\n\n");
	     }
	      k1=c1 % 7;
	      c1=k1;
	      j1=j1+1;
	    if((j1-1) % 2 ==0)
	   {
	    getch();
	    clrscr();
	  }
	}
	   if ((j1==4)||(j1==6)||(j1==9)||(j1==11))
	  {
	   printf("\n\t\t\t\t%s",month[j1-1]);
	   printf("\n        SUN       MON       TUE       WED       THU       FRI       SAT");
	   printf("\n");
	   for(i=0;i<k1;i++)
	   printf("          ");
	   for(i=1;i<=30;i++)
	   {
	    printf("%10d",i);
	    c1=c1+1;
	    if (c1 % 7 ==0)
	    printf("\n\n");
	  }
	    k1=c1 % 7;
	    c1=k1;
	    j1=j1+1;
	    if((j1-1) % 2 ==0)
	  {
	    getch();
	    clrscr();
	    }
	  }
	 } /* while end */
	}
