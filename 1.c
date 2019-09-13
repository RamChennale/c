/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*Write a c program to check given number is perfect number or not. */
#include<stdio.h>
int main(){
  int n,i=1,sum=0;
  printf("\nEnter a number:-");
  scanf("%d",&n);
  while(i<n)
  {
      if(n%i==0)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
           sum=sum+i;
          i++;
  }
  if(sum==n)
      printf("\nThe no %d is a perfect number",i);
  else
      printf("\nThe no %d is not a perfect number",i);
  return 0;
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */