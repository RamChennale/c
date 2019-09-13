/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>

#define size 10
int main()
{
  int arr[size];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int sum=0,i;
  float avg;
  clrscr();
printf("\nEnter %d Values: ",size);
 for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
 for(i=0;i<size;i++)
   sum+=arr[i];
    avg=(float)sum/size;
 printf("\nSum of list:%d",sum);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 printf("\nAvg of list:%.2f",avg);
 //printf("\nAvg of list:%g",avg);
 getch();
 return 0;
}
 




/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */