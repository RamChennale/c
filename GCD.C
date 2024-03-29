/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write C programs that use both recursive and non-recursive functions
   To find the GCD (greatest common divisor) of two given integers.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

unsigned int GcdRecursive(unsigned m, unsigned n);
unsigned int GcdNonRecursive(unsigned p,unsigned q);

int main(void)
{
  int a,b,iGcd;
  clrscr();

  printf("Enter the two numbers whose GCD is to be found: ");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  scanf("%d%d",&a,&b);

  printf("GCD of %d and %d Using Recursive Function is %d\n",a,b,GcdRecursive(a,b));
  printf("GCD of %d and %d Using Non-Recursive Function is %d\n",a,b,GcdNonRecursive(a,b));

  getch();
}

/* Recursive Function*/
unsigned int GcdRecursive(unsigned m, unsigned n)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
 if(n>m)
        return GcdRecursive(n,m);
 if(n==0)
         return m;
 else
     return GcdRecursive(n,m%n);
}

/* Non-Recursive Function*/
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
unsigned int GcdNonRecursive(unsigned p,unsigned q)
{
 unsigned remainder;
 remainder = p-(p/q*q);

 if(remainder==0)
     return q;
 else
     GcdRecursive(q,remainder);
}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */