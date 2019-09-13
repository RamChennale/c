/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#include <process.h>
int main()
{
  FILE *fp;
  int i;
  char fname[25];
  clrscr();
  printf("\nEnter File Name: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  gets(fname);
  fp=fopen(fname,"w");
  if(fp==NULL)
  {
     printf("\nFile Not Created: ");
     getch();
     exit(1);
  }
  for(i=-128;i<=127;i++)
  fprintf(fp,"%d=%c\t",i,i);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  fclose(fp);
  return 0;
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */