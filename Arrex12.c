/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
int main()
{
  int arr[5]={2,4,8,14,16};
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int i;
  void abc(int*);
  abc(arr+1);
  printf("\nArr List is: ");
  for(i=0;i<5;i++)
  printf("%d ",arr[i]);
  return 0;
}
void abc(int *ptr)
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ++*ptr;
  if(*ptr<=10)
   abc(ptr+1);
  ++*ptr;
}
O/P:Arr List is:2 6 10 16 16
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */