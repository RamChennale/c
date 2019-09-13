/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#define size 10
int main()
{
  int arr[size];
  int max1,max2,min1,min2;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int max1_i,max2_i;
  int min1_i,min2_i;
  int i;
  clrscr();
printf("\nEnter %d Values: ",size);
 for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
  max1=min1=arr[0];
  max1_i=min1_i=0; 
  for(i=1;i<size;i++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  {
        if(arr[i]>max1)
	{
            max1=arr[i];
            max1_i=i;
         }
 	 if(arr[i]<min1)
         {
            min1=arr[i];
            min1_i=i;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
         }
   }
   max2=min1;
   max2_i=min1_i;
  
   min2=max1;
   min2_i=max1_i;
   for(i=0;i<size;i++)
   {
        if(arr[i]>max2&&arr[i]!=max1)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
    max2=arr[i];
    max2_i=i;
}
if(arr[i]<min2&&arr[i]!=min1)
 {
   min2=arr[i];
   min2_i=i;
 }
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      
   printf("\nMax1=%d Index:%d",max1,max1_i);

   printf("\nMin1=%d Index:%d",min1,min1_i);
   printf("\nMax2=%d Index:%d",max2,max2_i);

   printf("\nMin2=%d Index:%d",min2,min2_i);
 
getch();
 return 0;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
                 







/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */