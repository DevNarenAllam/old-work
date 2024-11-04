#include<stdio.h>
main(){
char n[10][20];
int i,j,k,c;
clrscr();
printf("Enter 5 strings ");
for(i=0;i<=4;i++)
gets(n[i]);
   for(i=0;i<=4;i++){
   c=0;k=0;
   for(j=0;j<=4;j++){
       if (i>j && strcmp(n[i],n[j])==0){
       k++;
       break;
       }
       if (strcmp(n[i],n[j])==0)
       c++;
       }
       if (k==0 && c>1)
       printf("%s ---> %d times \n",n[i],c);
       }
       getch();
       }