struct stud
{
  int tel;
  int eng;
 }b;
 struct stud1
   {
    int tam;
    int mal;
    int hin;
    }d;
struct stu
{
  int tot;
  float avg;
  }t[10];
main()
{
 int n,i;
 printf("Enter number of students\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 printf("Enter tel,eng marks\n");
 scanf("%d%d",&t[i].b.tel,&t[i].b.eng);
 printf("Enter tam,mal,hin\n");
 scanf("%d%d%d",&t[i].d.tam,&t[i].d.mal,&t[i].d.hin);
 t[i].tot=t[i].b.tel+t[i].b.eng+t[i].d.tam+t[i].d.mal+t[i].d.hin;
 t[i].avg=(t[i].tot)/5;
 printf("%d%f",t[i].tot,t[i].avg);
}