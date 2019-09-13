/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void f1()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nFrom f1: ");
}
void f2()
{
  printf("\nFrom f2: ");
}
void main()
{
  void f3();//Forword Declaration
  printf("\nFrom main: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  f1();
  f2();
  f3();
}
void f3()
{
  printf("\nFrom f3:");
  f1();
  f2();
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */