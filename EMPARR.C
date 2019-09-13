/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>
typedef struct
{
  int ID;
  char name[36];
  int sal;
}EMP;

EMP getdata()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  EMP te;
  printf("\nEnter EMP ID: ");
  scanf("%d",&te.ID);
  printf("\nEnter EMP Name: ");
  flushall();
  gets(te.name);
  printf("\nEnter EMP Sal: ");
  scanf("%d",&te.sal);
  return te;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void showdata(EMP te)
{
   printf("\nID:%d", te.ID);
   printf("\tName:%s",te.name);
   printf("\tSal:%d",te.sal);
}
void main()
{
  EMP arr[10];
  EMP te;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int i,j;
  clrscr();
  for(i=0;i<10;i++)
   arr[i]=getdata();
  for(i=0;i<10;i++)
  {
    for(j=i+1;j<10;j++)
    {
    if(strcmp(arr[i],arr[j])>0)
       {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	 te=arr[i];
	 arr[i]=arr[j];
	 arr[j]=te;
       }
    }
  }
  printf("\nAfter Sorting:\n");
  for(i=0;i<10;i++)
    showdata(arr[i]);
  getch();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */