/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#define size 10
int main()
{
  int arr[size];
  int i,m;
  int min(int*);
  clrscr();
printf("\nEnter %d Values: ",size);
 for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  m=min(arr);
printf("\nMin Value of List:%d",m);
getch();
return 0;
}
int min(int *arr)
{
    int r,i;
    r=arr[0];
    for(i=1;i<size;i++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    {
       if(arr[i]<r)
	r=arr[i];
    }
    return r;
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */