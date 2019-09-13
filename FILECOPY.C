/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program which copies one file to another.*/

#include <stdio.h>
#include <conio.h>
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <process.h>

void main(int argc, char *argv[])
{
 FILE *fs,*ft;
 char ch;
 clrscr();
 if(argc!=3)
 {
  puts("Invalid number of arguments.");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  exit(0);
  }
 fs = fopen(argv[1],"r");
 if(fs==NULL)
 {
 puts("Source file cannot be opened.");
 exit(0);
 }
 ft = fopen(argv[2],"w");
 if (ft==NULL)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 {
 puts("Target file cannot be opened.");
 fclose(fs);
 exit(0);
 }
 while(1)
 {
  ch=fgetc(fs);
  if (ch==EOF)
  break;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  else
  fputc(ch,ft);
  }
  fclose(fs);
  fclose(ft);
  getch();
}



/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */








/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */