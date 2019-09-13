/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
void main()
{
  int arr[5]={4,14,24,34,44};
  int *ptr;
  ptr=arr+1;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ++ptr;
  ++*ptr;
  --ptr;
  --*ptr;
  printf("\n%d %d %d",*(arr+0),*(arr+1),*(arr+2));
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */