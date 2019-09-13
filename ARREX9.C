/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main()
{
  int arr[5]={9,19,29,39,49};
  int *ptr;
  ptr=arr+2;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ++*ptr;
  printf("\n%d %d %d",++*ptr,*ptr++,*++ptr);
 return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */