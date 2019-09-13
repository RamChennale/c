/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<alloc.h>
#include<conio.h>
int main()
{
  int **arr;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int nr,nc;
  int r,c,i;
  clrscr();
  printf("\nEnter No Of Rows: ");
  scanf("%d",&nr);
  arr=(int*)calloc(nr,sizeof(int));
  printf("\nEnter No Of Columns: ");
  scanf("%d",&nc);
  for(i=0;i<nr;i++)
    arr[i]=(int*)calloc(nc,sizeof(int));
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nEnter %d Elements: ",nr*nc);
for(r=0;r<nr;r++)
for(c=0;c<nc;c++)
scanf("%d",&arr[r][c]);

printf("\nArray List Is: ");
for(r=0;r<nr;r++)
{
   printf("\n");
   for(c=0;c<nc;c++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   printf("%d ",arr[r][c]);
}

  for(i=0;i<nr;i++)
  free(arr[i]);

  free(arr);
  getch();
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */