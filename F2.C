/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#include <process.h>
int main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
 FILE *fp;
 char fname[25];
 clrscr();
 printf("\nEnter File Name: ");
 gets(fname);
 fp=fopen(fname,"w");
 if(fp==NULL)
 {
  printf("\nFile Not Created: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  getch();
  exit(1);
 }
 fprintf(fp,"C & C++");
 fprintf(fp,"\nHello Naresh" );
 fclose(fp);
 return 0;
}


/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */