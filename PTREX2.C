/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int a,b;
  int*ptr;
  ptr=&a;
  a=10;
  b=20;
  printf("\n%d %d %d",a,b,*ptr);
  *ptr=30;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ptr=&b;
  *ptr=40;
 printf("\n%d %d %d",a,b,*ptr);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */