/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int main()
{
  int *arr;
  int ne1,ne2;
  int i;
  clrscr();
  printf("\nEnter Ne1 Value: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  scanf("%d",&ne1);
  arr=(int*)calloc(ne1,sizeof(int));
  printf("\nEnter %d Elements: ",ne1);
  for(i=0;i<ne1;i++)
  scanf("%d",&arr[i]);

  printf("\nArray List Is: ");
  for(i=0;i<ne1;i++)
  printf("%d ",arr[i]);

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nEnter Ne2 Value: ");
  scanf("%d",&ne2);
arr=(int*)realloc(arr,sizeof(int)*(ne1+ne2));

  printf("\nEnter %d Elements:",ne2);
  for(i=ne1;i<(ne1+ne2);i++)
  scanf("%d",&arr[i]);

  printf("\nAfter Realloc Array List Is: ");
  for(i=0;i<(ne1+ne2);i++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   printf("%d ",arr[i]);
  free(arr);
  getch();  
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */