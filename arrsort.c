/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#define size 10
int main()
{
  int arr[size];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int i,j,t;
  clrscr();
  printf("\nEnter 10 Values:");
  for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<size;i++)
  {
      for(j=i+1;j<size;j++)
       {
         if(arr[j]<arr[i])
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
          {
             t=arr[i];
             arr[i]=arr[j];
             arr[j]=t;
           }
        
       }
   }
   printf("\nAfter sorting....");
   for(i=0;i<size;i++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    printf("%d ",arr[i]);
    getch();
    return 0;
}






/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */


  
  
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */