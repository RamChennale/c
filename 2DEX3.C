/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
void main()
{
  int arr[3][3]={
                  {10,20,30},
                  {40,50,60},
                  {70,80,90}
               };
 int *ptr[3];
 int **pptr;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 ptr[0]=&arr[0][0];//arr //arr[0]
 ptr[1]=&arr[1][0];//arr+1 //arr[1]
 ptr[2]=&arr[2][0];//arr+2 //arr[2]
 pptr=ptr+1;
 
 ++pptr;
 ++*pptr;
 ++**pptr;
 ++*ptr[2];

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 --pptr;
 ++*pptr;
 --**pptr;
 --*ptr[1];
 
 --pptr;
 ++*pptr;
 --**pptr;
 ++*ptr[0];
 
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 printf("\n%d %d %d",*ptr[0],*ptr[1],*ptr[2]);


printf("\n%d %d %d",**pptr,**(pptr+1),**(pptr+2));
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */