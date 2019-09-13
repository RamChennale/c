/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void swap(int *p1,int *p2)
{
   int t;
   t=*p1;
   *p1=*p2;
   *p2=t;
}
void main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int a,b;
  a=10;b=20;
  swap(&a,&b);
  printf("\n%d %d",a,b);

}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */