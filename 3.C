/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
  int num,x;
  clrscr();
  printf("\nEnter a number: ");
  scanf("%d",&num);
  x=findsum(num);
  printf("Sum of the digits of %d is: %d",num,x);
  return 0;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}


int r,s;
int findsum(int n){
if(n){
         r=n%10;
         s=s+r;
         findsum(n/10);
     }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     else
       return s;
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */