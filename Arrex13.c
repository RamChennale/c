/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#define size 5
int main()
{
  int arr[size]={3,6,9,12,15};
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int i;
  void abc(int*);
  abc(arr);
  printf("\nArr List is: ");
  for(i=0;i<size;i++)
  printf("%d ",arr[i]);
  return 0;
}
void abc(int *ptr)
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ++*ptr;
  if(*ptr<=10)
   abc(++ptr);
  ++*ptr;
}
Arr List is: 4 8 11 15 15

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */