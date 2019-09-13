/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
extern int g;
void abc()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  auto int a;
  static int s;
  ++g;
  a=s++;
  printf("\n%d %d %d",a,s,g);
  if(a<=3)
   abc();
  printf("\n%d %d %d",a,s,g);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  void xyz();
  g=5;
  ++g;
  xyz();
}
void xyz()
{
   int a;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   static int s=5;
   ++g;
   a=++s;
   printf("\n%d %d %d",a,s,g);
   if(a<=7)
   {
     abc();
     xyz();
   }
   printf("\n%d %d %d",a,s,g);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
int g;








/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */