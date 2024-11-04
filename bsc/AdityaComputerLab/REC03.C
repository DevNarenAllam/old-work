#include<stdio.h>
main()
{
int d,m,y,k;
clrscr();
printf("Enter the date :");
scanf("%d",&d);
printf("Enter the month :");
scanf("%d",&m);
printf("Enter the year :");
scanf("%d",&y);
k=d/10;
if(k==1)
{
 switch(d%10)
   {
    case 0: printf("Ten");
	     break;
    case 1: printf("Eleven");
	    break;
   case 2: printf("Twelve");
	    break;
   case 3: printf("Thirteen");
	    break;
   case 4: printf("Fourteen");
	    break;
   case 5: printf("Fifteen");
	    break;
   case 6: printf("Sixteen");
	    break;
   case 7: printf("Seventeen");
	    break;
   case 8: printf("Eighteen");
	    break;
   case 9: printf("Nineteen");
	    break;
}}
else
{
 if(k==2)
 {
      printf("Twenty");
  }
else
{
 if(k==3)
 {
  printf("Thirty");
    }
switch(d%10)
{
   case 1: printf("One");
		break;

   case 2: printf("Two ");
	    break;
   case 3: printf("Three ");
	    break;
   case 4: printf("Four ");
	    break;
   case 5: printf("Five ");
	    break;
   case 6: printf("Six ");
	    break;
   case 7: printf("Seven ");
	    break;
   case 8: printf("Eight ");
	    break;
   case 9: printf("Nine ");
	    break;
}
}
}

}
