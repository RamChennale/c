/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
int num,rev;
printf("\nEnter a number :");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
scanf("%d",&num);
rev=reverse(num);
printf("\nAfter reverse the no is :%d",rev);
return 0;
}


int sum=0,r;
reverse(int num){
if(num){
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
r=num%10;
sum=sum*10+r;
reverse(num/10);
}
else
return sum;
return sum;
}


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */