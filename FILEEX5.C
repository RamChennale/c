/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <conio.h>
#include <process.h>
int main()
{
   FILE *fp;
   char ch;
   char fname[25];
   clrscr();
   printf("\nEnter File Name: ");
   gets(fname);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   fp=fopen(fname,"r");
   if(fp==NULL)
   {
    printf("\nFile Not Found: ");
      getch();
      exit(1);
   }
   while(1)
   {
     ch=fgetc(fp);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     if(ch==EOF)
       break;
     printf("%c",ch);
   }
   getch();
   return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */