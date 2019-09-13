/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
int main()
{
  int const a=50;
  const int *ptr;
  //ptr to const int
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ptr=&a;
  //++a; Error
  ++*ptr;//Error
  printf("%d",a);
  return 0;
}

//int const *ptr;
//ptr to int const 
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */