/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
  int num,f;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  f=fact(num);
  printf("\nFactorial of %d is: %d",num,f);
  return 0;
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

int fact(int n){
   if(n==1)
       return 1;
   else
       return(n*fact(n-1));
 }



/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */