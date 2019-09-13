/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write C program that implement the following sorting methods
to sort a given list of integers in ascending order: i) Insertion sort */

#include<stdio.h>
#include<conio.h>

void inst_sort(int []);

void main()
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int num[5],count;
   clrscr();
   printf("\nEnter the Five Elements to sort:\n");

  for (count=0;count<5;count++)
    scanf("%d",&num[count]);
    inst_sort(num);

  printf("\n\nElements after sorting: \n");
  for(count=0;count<5;count++)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    printf("%d\n",num[count]);
    getch();
}

// Function for Insertion Sorting
void inst_sort(int num[])
{
 int i,j,k;
 for(j=1;j<5;j++)
  {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    k=num[j];
     for(i=j-1;i>=0 && k<num[i];i--)
       num[i+1]=num[i];
       num[i+1]=k;
   }
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */