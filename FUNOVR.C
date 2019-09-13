/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
void abc(int x,...)
{
  int i;
  int*ptr=(int*)...;
        //Argument block base address
  printf("\n");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  for(i=0;i<x;i++)
  printf("%d ",ptr[i]);//*(ptr+i)

}
void main()
{
  abc(1,10);
  abc(2,10,20);
  abc(3,10,20,30);
  abc(4,10,20,30,40);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

}
10
10 20
10 20 30
10 20 30 40
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */