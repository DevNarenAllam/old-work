 #include<iostream.h>
 #include"listtemp.cpp"
 void read_num(list<long unsigned>& l);
 void main()
 {
 int i,carry=0;
 long unsigned x,y,sum;
 list<long unsigned> a,b,c,,*big,*sml;
 puts("Enter 1 st number:");
 read_num(a);
 puts("\nEnter 2 nd number:");
 read_num(b);
 a.lenc<b.lenc?big=&b,sml=&a:big=&a,sml=&b;//Setting big,small
  for(i=1;i<=sml->lenb||carry;i++)
  {
  x=a.getnode(i,REV);
  y=b.getnode(i,REV);
  sum=x+y+carry
  if(sum>999999999)
  carry=sum/1000000000;
  else
  carry=0;

  c.insert_front(sum);
  sum=0;
  }
  while(i++<=big.lenb)
  {
  c.insert_front(big.getnode(i,REV));
  }
  }


