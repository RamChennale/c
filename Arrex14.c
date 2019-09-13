/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
void main()
{
  int A[]={2,4,6,8,10};
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int B[]={3,6,9,12,15};
  int C[]={4,8,12,16,20};
  int *ptr[3];//Array pointer
  int **pptr;
  int i;
  ptr[0]=A;
  ptr[1]=B;
  ptr[2]=C;
  pptr=ptr;

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 for(i=1;i<=3;i++)
  {
   *pptr+=i;//*pptr=*pptr+i;
   **pptr+=i;//**pptr=**pptr+i;
   ++pptr;
 }
 --pptr;
 printf("\n%d\n",**pptr);
 for(i=0;i<3;i++)
  printf("%d ",*ptr[i]);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

for(i=0;i<5;i++)
printf("\n%d %d %d",A[i],B[i],C[i]);
}






/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */