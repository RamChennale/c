/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
extern int g;
void abc()
{
  auto int a;
  static int s;
  ++g;
  a=s++;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\n%d %d %d",a,s,g);
  if(a<=3)
   abc();
  printf("\n%d %d %d",a,s,g);
}
void main()
{
  void xyz();
  g=5;
  ++g;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  xyz();
}
void xyz()
{
   int a;
   static int s=5;
   ++g;
   a=++s;
   printf("\n%d %d %d",a,s,g);
   if(a<=7)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   {
     abc();
     xyz();
   }
   printf("\n%d %d %d",a,s,g);
}
int g;



/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */






/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */