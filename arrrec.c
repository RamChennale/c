/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
void xyz(int *ptr)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
   ++*ptr;
   if(*ptr<=5)
   xyz(ptr+1);
   ++*ptr;
}
void main()
{
  int arr[5]={2,3,4,5,6};
  int i;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  xyz(arr);
  for(i=0;i<5;i++)
  printf("%d ",arr[i]);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */