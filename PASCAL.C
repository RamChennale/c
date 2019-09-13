/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program to generate Pascal's triangle. */

#include<stdio.h>
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>

void main()
{
 int bin,p,q,r,x;
 clrscr();
 bin=1;
 q=0;

 printf("Rows you want to input:");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 scanf("%d",&r);

 printf("\nPascal's Triangle:\n");

 while(q<r)
 {
  for(p=40-3*q;p>0;--p)
  printf(" ");
  for(x=0;x<=q;++x)
  {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    if((x==0)||(q==0))
      bin=1;
    else
      bin=(bin*(q-x+1))/x;
      printf("%6d",bin);
  }

 printf("\n");
 ++q;
 }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
getch();
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */