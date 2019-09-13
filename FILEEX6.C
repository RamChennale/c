/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#include <process.h>
int main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
   FILE *fp;
   fp=fopen("D:\\test.txt","a");
   if(fp==NULL)
   {
   printf("\nFile Not Found: ");
      getch();
      exit(1);
   }
   fprintf(fp,"\nC & C++");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   fprintf(fp,"\nOracle & java");
   fclose(fp);
   return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */