/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int main()
{
  auto int arr[5]={3,13,23,33,43};
  int *ptr=NULL;
  ptr=arr;//ptr=&arr[0];
  ++ptr;
  --*ptr;
  --ptr;
  ++*ptr;
 printf("\n%d %d",arr[0],arr[1]);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 return 0;
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */