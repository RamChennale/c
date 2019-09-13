/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
int main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  int arr[10];
  int i,t;
  clrscr();
  printf("Enter 10 Values:");
  for(i=0;i<10;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<10/2;i++)
  {
    t=arr[i];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    arr[i]=arr[10-i-1];
    arr[10-i-1]=t;
  }
  printf("\nReverse Array List: ");
  for(i=0;i<10;i++)
  printf("%d ",arr[i]);
  getch();
  return 0;
    
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */