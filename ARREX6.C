/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
void main()
{
  int arr[5]={8,18,28,38,48};
  int near*ptr=arr+2;//&arr[2];
  --ptr;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ++*ptr;
  ++ptr;
  --*ptr;
printf("\n%d %d %d",ptr[0],ptr[1],ptr[-1]);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */