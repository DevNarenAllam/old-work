#include<stdio.h>
main(){
char n[20];
int i,j,s,k;
clrscr();
printf("Enter a string ");
gets(n);
j=strlen(n);
printf("Reverse of the string is    :");
for(i=j-1;i!=0;i--)
printf("%c",n[i]);
printf("%c",n[i]);
s=0;
k=strlen(n)-1;
for(i=0;i<k;i++){
if (n[i]!=n[k]){
s=5;
break;
}
k--;
}
if (s==0)
printf("\npalindrum");
else
printf("\nnot palindrum");
getch();
}