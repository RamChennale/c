/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int* abc()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  static int s=10;
  ++s;
  return &s;
}
void main()
{
   int *p;
   int (*ptr)();
   ptr=&abc;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   p=ptr();
   //p=abc();
   printf("\n%d",*p);
   *p=20;
  printf("\n%d",*p);
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */