/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#define C_SIZE 3
int sum(int arr[][C_SIZE],int r)
{
  int s=0;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<C_SIZE;j++)
     s=s+arr[i][j];
     //s=s+ *(*(arr+i)+j);
 }
 return s;
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int main()
{
  int arr[2][C_SIZE];
  int s,r,c;
  clrscr();
  printf("\nEnter 2*3 values: ");
  for(r=0;r<2;r++)
  for(c=0;c<C_SIZE;c++)
  scanf("%d",&arr[r][c]);
  s=sum(arr,2);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nSum of List:%d",s);
  getch();
  return 0;
}






/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */






/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */