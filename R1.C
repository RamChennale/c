/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void abc()
{
  int a;
  static int s;
  a=++s;
  printf("\n%d %d",a,s);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  if(a<=3)
   abc();
   printf("\n%d %d",a,s);
}
void main()
{
  abc();
  abc();
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */