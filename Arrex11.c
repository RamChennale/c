/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>

#define size 5
int main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  int arr[size];
  int i;
  void xyz(int*);
  clrscr();
printf("\nEnter %d Values: ",size);
  for(i=0;i<size;i++)
   scanf("%d",&arr[i]);
  
  for(i=0;i<size;i++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    xyz(&arr[i]);
printf("\nArr List is: ");
for(i=0;i<size;i++)
  printf("%d ",arr[i]);
  getch();
 return 0;
}
void xyz(int *ptr)
{
   *ptr*=2;//*ptr=*ptr*2;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}

O/P:
Enter 5 Values: 2 4 6 8 1

Arr List is: 4 8 12 16 20

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */