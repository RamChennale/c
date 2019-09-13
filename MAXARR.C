/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
int max(int arr[],int n)
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   int r,i;
   r=arr[0];
   for(i=1;i<n;i++)
   {
       if(arr[i]>r)//*(arr+i)
	r=arr[i];
   }
   printf("\nsize %d",sizeof(arr));
   return r;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int main()
{
  int arr[10];
  int i,m;
  clrscr();
  printf("\nEnter 10 Values :");
  for(i=0;i<10;i++)
    scanf("%d",&arr[i]);
    m=max(arr,10);
printf("\nMax Value of list is:%d",m);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  getch();
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */