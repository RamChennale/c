/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write C programs that implement the following sorting methods to sort
   a given list of integers in ascending order: i) Bubble sort */

#include <stdio.h>
#define MAX 10

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void swapList(int *m,int *n)
{
   int temp;
   temp = *m;
   *m = *n;
   *n = temp;
}

// Function for Bubble Sort
void bub_sort(int list[], int n)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
   int i,j;
   for(i=0;i<(n-1);i++)
      for(j=0;j<(n-(i+1));j++)
	     if(list[j] > list[j+1])
		    swapList(&list[j],&list[j+1]);
}

void readlist(int list[],int n)
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   int j;
   printf("\nEnter the elements: \n");
   for(j=0;j<n;j++)
       scanf("%d",&list[j]);
}

// Showing the contents of the list
void printlist(int list[],int n)
{
   int j;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   for(j=0;j<n;j++)
      printf("%d\t",list[j]);
}

void main()
{
   int list[MAX], num;
   clrscr();
   printf("\n\n\n***** Enter the number of elements [Maximum 10] *****\n");
   scanf("%d",&num);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   readlist(list,num);
   printf("\n\nElements in the list before sorting are:\n");
   printlist(list,num);
   bub_sort(list,num);
   printf("\n\nElements in the list after sorting are:\n");
   printlist(list,num);
   getch();
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */