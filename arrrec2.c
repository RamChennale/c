/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
void abc(int *ptr)
{
  ++*ptr;
  if(*ptr<=10)
  abc(++ptr);
  ++*ptr;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
void main()
{
  int arr[5]={3,6,9,11,13};
  int i;
  abc(arr);
  for(i=0;i<5;i++)
  printf("%d ",arr[i]);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */