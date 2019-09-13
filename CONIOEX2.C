/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>
int main()
{
  char str[20];
  int v1,v2;
  //clreol();
  clrscr();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  gotoxy(20,10);
  textcolor(5);
  textbackground(8);
  cprintf("Enter a string: ");
  textcolor(3);
  flushall();
  cgets(str);
  textcolor(6);
  gotoxy(20,11);
  cprintf("Enter v1 & v2 Values: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  cscanf("%d%d",&v1,&v2);
  textcolor(12);
  gotoxy(20,12);
  cputs(str);
  gotoxy(20,13);
  cprintf("v1=%d v2=%d",v1,v2);
  return 0;
}


/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */