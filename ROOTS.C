/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program toe find the roots of a quadratic equation. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
float a,b,c,root1,root2;
clrscr();
printf("\n Enter values of a,b,c for finding roots of a quadratic eq:\n");
scanf("%f%f%f",&a,&b,&c);

/*checking condition*/
if(b*b>4*a*c)
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 root1=-b+sqrt(b*b-4*a*c)/2*a;
 root2=-b-sqrt(b*b-4*a*c)/2*a;
 printf("\n*****ROOTS ARE*****\n");
 printf("\n root1=%f\n root2=%f",root1,root2);
}
else
 printf("\n Imaginary Roots.");
 getch();
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */