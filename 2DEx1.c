/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
int main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int arr[2][3]={
                  {10,20,30},
                  {40,50,60}
               };
  int *ptr[2];
  ptr[0]=arr[0];
  ptr[1]=arr[1];
  ptr[0]++;
  ++*ptr;//++ptr[0];
  ptr[1]++;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  --*ptr;//--ptr[0];
 printf("\n%d %d",*ptr[0],*ptr[1]);
 return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */