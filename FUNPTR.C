/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int funptr()
{
  static int s=10;
  ++s;
  return s;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int r;
  int (*ptr)();
  ptr=&funptr;
  r=ptr();
//r=&funptr(); //r=funptr()

 printf("\nValue=%d",r);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */