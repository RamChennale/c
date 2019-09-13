/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void xyz()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  auto int a;
  static int s=5;
  a=s++;
  printf("\n%d %d",a,s);
  if(a<8)
    xyz();
  printf("\n%d %d",a,s);
}
void main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  xyz();
  xyz();
}
  
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */