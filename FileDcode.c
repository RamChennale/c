/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<process.h>
int main()
{
  int flag=0,code;
  char fname[20];
  FILE *sfp;
  char ch;
  clrscr();
  printf("\nEnter a File: ");
  gets(fname);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  sfp=fopen(fname,"r+t");
  if(sfp==NULL)
  {
   printf("\nFile Not Found: ");
   getch();
   return 1;
  }
 printf("\nFOR ENCODE PRESS..1: ");
 printf("\nFOR DECODE PRESS..2: ");
 scanf("%d",&flag);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   if(flag==1)
      code=40;
   if(flag==2)
      code=-40;
    while(1)
    {
       ch=fgetc(sfp);
	if(feof(sfp))
	   break;
       if(ch!='\n'&&ch!='\r')
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	 {
	 fseek(sfp,-1,SEEK_CUR);
	 fprintf(sfp,"%c",ch+code);
	 fseek(sfp,0,SEEK_CUR);
	 }
      }
     fclose(sfp);
     getch();
     return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */