/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
extern int g=10;
void abc()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  static int s=5;
  int a;
  ++g;
  a=++s;
  printf("\n%d %d %d",a,s,g);
  if(a<=8)
  abc();  
  printf("\n%d %d %d",a,s,g);
}
void main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  void xyz();
  ++g;
  xyz();
}
void xyz()
{
  static int s;
  auto int a;
  a=s++;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ++g;
  printf("\n%d %d %d",a,s,g);
  abc();
  if(a<=2)
    xyz();
  printf("\n%d %d %d",a,s,g);
}
int g;
  
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */