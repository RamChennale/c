/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>
void main()
{
  char ch1,ch2;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int x,y;
  ch1=getch();
  while(ch1==0)
  {
     ch2=getch();
     x=wherex();
     y=wherey();
     if(ch2==75)
     gotoxy(x-1,y);
     if(ch2==72)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     gotoxy(x,y-1);
     if(ch2==77)
     gotoxy(x+1,y);
     if(ch2==80)
     gotoxy(x,y+1);
     ch1=getch();
  }
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */