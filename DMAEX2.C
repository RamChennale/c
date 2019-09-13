/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{
  int *arr;
  int t,i,j,ne;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  clrscr();
  printf("\nEnter No Of Values: ");
  scanf("%d",&ne);
  arr=(int*)calloc(ne,sizeof(int));

printf("\nArray Default List is: ");
  for(i=0;i<ne;i++)
  printf("%d ",arr[i]);

  printf("\nEnter %d Elements:\n",ne);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  for(i=0;i<ne;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<ne;i++)
  {
    for(j=i+1;j<ne;j++)
    {
	if(arr[i]>arr[j])
	{
	    t=arr[i];
	    arr[i]=arr[j];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	    arr[j]=t;
	 }
   }
}
  printf("\nSorted Array List is: ");
  for(i=0;i<ne;i++)
  printf("%d ",arr[i]);
  free(arr);
  getch();
  return 0;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */