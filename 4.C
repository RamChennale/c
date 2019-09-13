/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
  int pow,num;
  long int res;
  long int power(int,int);
  printf("\nEnter a number: ");
  scanf("%d",&num);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nEnter power: ");
  scanf("%d",&pow);
  res=power(num,pow);
  printf("\n%d to the power %d is: %ld",num,pow,res);
  return 0;
}
  int i=1;
  long int sum=1;
  long int power(int num,int pow){
      if(i<=pow){
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
           sum=sum*num;
          power(num,pow-1);
      }
      else
      return sum;
  }

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */