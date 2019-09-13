/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
void main()
{
  int const a=10;
  //const int a=10;
  int *ptr;//can modify const object
  ptr=&a;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  //++a; Error
  ++*ptr;
  printf("%d",a);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */