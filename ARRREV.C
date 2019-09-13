/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int main()
{
  int arr[10];
  int t,i;
  clrscr();
  printf("\nEnter 10 Values: ");
  for(i=0;i<10;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<10/2;i++)
  {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     t=arr[i];
     arr[i]=arr[9-i];
     arr[9-i]=t;
  }
  printf("\nrev list is:");
  for(i=0;i<10;i++)
  printf("%d ",arr[i]);
  getch(); 
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */





/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */