/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
void main()
{
  const int arr[2]={10,20};
  int const * const ptr=(int*)arr;
//const int*const ptr=(int*)arr;
  ++*ptr; Error
  //++ptr; Error ptr is const
  //ptr=&arr[1];//Error
  --*ptr;Error
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("%d %d",arr[0],arr[1]);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */