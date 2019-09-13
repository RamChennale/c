/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int *abc()
{
   int a=10; //static int a=10;
   ++a;
   return &a;
}
void main()
{
  int *ptr;
  ptr=abc();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\n%d",*ptr);
  *ptr=20;
  printf("\n%d",*ptr);
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */