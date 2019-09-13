/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
struct emp
{
  int ID;
  char name[36];
  int sal;
};
typedef struct emp EMP;

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
EMP getdata()
{
  EMP te;
  printf("\nEnter EMP ID: ");
  scanf("%d",&te.ID);
  printf("\nEnter EMP Name: ");
  flushall();
  gets(te.name);
  printf("\nEnter EMP Sal: ");
  scanf("%d",&te.sal);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  return te;
}
void showdata(EMP te)
{
   printf("\nID:%d", te.ID);
   printf("\tName:%s",te.name);
   printf("\tSal:%d",te.sal);
}
void main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  struct emp e1;
  EMP e2;
  clrscr();
  e1=getdata();
  e2=getdata();
  showdata(e1);
  showdata(e2);
  getch();

}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */