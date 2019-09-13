/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write C program that implement the following sorting methods to sort a given list of integers in ascending order:
ii) Merge sort */

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARY 10

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void merge_sort(int x[], int end, int start);

int main(void) {
 int ary[MAX_ARY];
 int j = 0;

 printf("\n\nEnter the elements to be sorted: \n");
   for(j=0;j<MAX_ARY;j++)
       scanf("%d",&ary[j]);

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 /* array before mergesort */
 printf("Before    :");
 for(j = 0; j < MAX_ARY; j++)
  printf(" %d", ary[j]);

 printf("\n");

 merge_sort(ary, 0, MAX_ARY - 1);

 /* array after mergesort */
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 printf("After Merge Sort :");
 for(j = 0; j < MAX_ARY; j++)
  printf(" %d", ary[j]);

 printf("\n");
 getch();
}

/* Method to implement Merge Sort*/
void merge_sort(int x[], int end, int start) {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 int j = 0;
 const int size = start - end + 1;
 int mid  = 0;
 int mrg1 = 0;
 int mrg2 = 0;
 int executing[MAX_ARY];

 if(end == start)
  return;

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 mid  = (end + start) / 2;

 merge_sort(x, end, mid);
 merge_sort(x, mid + 1, start);

 for(j = 0; j < size; j++)
  executing[j] = x[end + j];

 mrg1 = 0;
 mrg2 = mid - end + 1;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

 for(j = 0; j < size; j++) {
  if(mrg2 <= start - end)
   if(mrg1 <= mid - end)
    if(executing[mrg1] > executing[mrg2])
     x[j + end] = executing[mrg2++];
    else
     x[j + end] = executing[mrg1++];
   else
    x[j + end] = executing[mrg2++];
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  else
   x[j + end] = executing[mrg1++];
 }
}


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */