/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
int main()
{
  int arr[3][4]={
 		  {10,20,30,40},
                  {11,21,31,41},
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
                  {12,22,32,42}
               };
 int *ptr[3];
 int **pptr;
 int i,r,c;
 ptr[0]=arr;
 ptr[1]=arr+1;
 ptr[2]=arr+2;
 pptr=ptr;
 for(i=3;i>=1;i--)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 {
   *pptr+=i;
   **pptr+=i;
   ++pptr;
 }
 --pptr;
 printf("\n%d\n",**pptr);
 for(i=0;i<3;i++)
   printf("%d ",*ptr[i]);
 printf("\narr List is: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 for(r=0;r<3;r++)
 {
    printf("\n");
    for(c=0;c<4;c++)
    {
      printf("%d\t",arr[r][c]);
    }
 }
 return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */



 
   
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */