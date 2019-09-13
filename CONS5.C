/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  const int arr[2]={10,20};
  int const *ptr=NULL;
  //const int *ptr;
  ptr=(int*)arr;
  //++*ptr;//Error
  ++ptr;
  //--*ptr;Error
  printf("%d %d",arr[0],arr[1]);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */