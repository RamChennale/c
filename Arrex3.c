/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main()
{
  int arr[5]={6,16,26,36,46};
  int near*ptr; //Wild pointer
  ptr=arr+2;//ptr=&arr[2];
  ++ptr;
  ++*ptr;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  --ptr;
  --*ptr;
  printf("\n%d %d",arr[2],arr[3]);
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */