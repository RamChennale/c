/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int a=10,b=20;
  //int*ptr=NULL;//<stdio.h>
  int *ptr=(int*)0;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  if(ptr==(int*)0)
    ptr=&a;
  if(ptr==(int*)0)
   ptr=&b;
  printf("\n%d %d %d",a,b,*ptr);

}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */