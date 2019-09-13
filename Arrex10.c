/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void abc(int a)
{
  ++a;
}
void main()
{
  int arr[5]={1,2,3,4,5};
  int i;
  for(i=0;i<5;i++)
    abc(arr[i]);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nArr List Is: ");
  for(i=0;i<5;i++)
   printf("%d ",arr[i]);
}
O/P:
Arr List Is: 1 2 3 4 5
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */