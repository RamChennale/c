/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#include<process.h>
int main()
{
  FILE *fp;
  char ch,ch1,ch2;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  char fname[20];
  clrscr();
  printf("\nEnter a File: ");
  gets(fname);
  fp=fopen(fname,"rt+");
  if(fp==NULL)
  {
     printf("\nFile not found: ");
     getch();
     return 1;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
  printf("\nEnter ch1: ");
  ch1=getche();
  printf("\nEnter ch2: ");
  ch2=getche();
  while(!feof(fp))
  {
     ch=fgetc(fp);
     if(ch==ch1)
     {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       fseek(fp,-1,SEEK_CUR);
       fprintf(fp,"%c",ch2);
       fseek(fp,0,SEEK_CUR);
     }
  }
  fclose(fp);
  getch();
  return 0;
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */