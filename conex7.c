/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
int main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int const arr[2]={30,40};
  int const *const ptr=arr;
//const ptr to int const
  ++*ptr; //Error
  //++ptr; Error
  printf("%d",*ptr);
 return 0;
}

const int *const ptr=arr;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
//const ptr to const int


  
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */