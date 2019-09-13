/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
int main()
{
  int arr[][3]={
                 {1,2,3},
                 {4,5,6},
                 {7,8,9}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
               };
 int *ptr[3];
 ptr[0]=arr;//arr[0];
 ptr[1]=arr+1;//arr[1];
 ptr[2]=arr+2;//arr[2]

 ++ptr[0];
 --*ptr[0];

 ++ptr[1];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 ++*ptr[1];

 ++ptr[2];
 *ptr[2]=30;

 printf("\n%d %d %d",*ptr[0],*ptr[1],*ptr[2]);
 
printf("\n%d %d %d",**ptr,**(ptr+1),**(ptr+2));

return 0;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */