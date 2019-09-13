/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
int main()
{
  const int a=20;
  int *ptr;
  ptr=&a;
  //++a; Error
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 ++*ptr;
 printf("%d",a);
 return 0;
}
O/P:21
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */