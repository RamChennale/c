/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program to find the sum of individual digits of a positive integer.*/

#include<stdio.h>
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>

void main()
{
  int num, k=1, sum=0;
  clrscr();
  printf("Enter the number whose digits are to be added:");
  scanf("%d",&num);
while(num!=0)
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  k=num%10;
  sum=sum+k;
  k=num/10;
  num=k;
}
printf("Sum of the digits:%d",sum);
getch();
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */