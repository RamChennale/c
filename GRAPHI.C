/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<dos.h>
int main(void)
{
int gdriver = DETECT, gmode,
		       errorcode;
int midx, midy;
int radius = 200;
int i,j;
initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
if (errorcode != grOk)
{
printf("Graphics error: %s\n",
	grapherrormsg(errorcode));
printf("Press any key to halt:");
  getch();
  exit(1);
}
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   i=0; j=0;
   while(!kbhit())
   {
    setcolor(j+1);
    //setbkcolor(j+1);
    circle(midx, midy, radius--);
    delay(100);
    i++;j++;
    if(i==200)
	i=0;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    if(j==15)
	j=0;
   }
   getch();
   closegraph();
   return 0;
}


/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */