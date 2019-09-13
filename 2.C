/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int main(){
  int n1,n2,gcd;
  printf("\nEnter two numbers: ");
  scanf("%d %d",&n1,&n2);
  gcd=findgcd(n1,n2);
  printf("\nGCD of %d and %d is: %d",n1,n2,gcd);
  return 0;
}


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int findgcd(int x,int y){
     while(x!=y){
          if(x>y)
              return findgcd(x-y,y);
          else
             return findgcd(x,y-x);
     }
     return x;
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */