/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int g;
void abc()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  static int s;
  auto int a;
  ++g;
  a=++s;
  printf("\n%d %d %d",a,s,g);
  if(a<=2)
   abc();
  printf("\n%d %d %d",a,s,g);
}
void main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  void xyz();
  ++g;
  abc();
  xyz();
}
void xyz()
{
  static int s=10;
  int a;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  a=s++;
  ++g;
  printf("\n%d %d %d",a,s,g);
  if(a<=12)
   xyz();
  printf("\n%d %d %d",a,s,g);
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */