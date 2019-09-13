/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
int main()
{
  const int arr[2]={10,20};
  int *ptr;
  ptr=arr;
  ++*ptr;
  ++ptr;
  --*ptr;
  printf("%d %d",ptr[0],ptr[-1]);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 return 0;
}
O/P:19 11
  
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */