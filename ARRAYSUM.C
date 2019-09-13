/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#define size 10
int main()
{
 int arr[size];
 int sum=0,i;
 float avg;
 clrscr();
 printf("Enter %d Values:",size);
 for(i=0;i<size;i++)
 scanf("%d",&arr[i]);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 for(i=0;i<size;i++)
 sum+=arr[i]; //sum=sum+arr[i];
 avg=(float)sum/size;
 printf("\nSum Of Array:%d",sum);
 printf("\nAvg Of Array:%.2f",avg);
 getch();
 return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */