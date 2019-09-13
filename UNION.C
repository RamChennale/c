/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
union A
{
  int i;
  char ch;
};
void main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  union A obj;
  obj.i=511;
   printf("\n%d %d",obj.i,obj.ch);
  obj.ch=10;
  printf("\n%d %d",obj.i,obj.ch);
}



/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */