/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
int main()
{
  int const arr[2]={30,40};
  int const*ptr;
  ptr=arr;
  //++*ptr; Error
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ++ptr;
  //--*ptr; Error
  printf("%d",*ptr);
 return 0;
}
O/P:40

  
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */