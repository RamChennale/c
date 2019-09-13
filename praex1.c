/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void abc();
void xyz();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#pragma startup abc
#pragma exit xyz
void abc()
{
  printf("\nFrom abc:");
}
void main()
{
  printf("\nFrom Main:");
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void xyz()
{
 printf("\nFrom xyz");
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */