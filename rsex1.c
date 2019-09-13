/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void xyz()
{
  static int s=5;
  int a;
  a=s++;
  printf("\n%d %d",a,s);
  if(a<=7)
   xyz();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\n%d %d",a,s);
}
void main()
{
  xyz();
  xyz();
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */