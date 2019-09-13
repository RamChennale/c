/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
#include<process.h>

#define f1 "D:\\part1.mp3"
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#define f2 "D:\\part2.mp3"
#define f3 "D:\\part3.mp3"
#define f4 "D:\\part4.mp3"

int main()
{
  FILE *sfp,*tfp;
  char tfname[20];
  char str[4][50]={f1,f2,f3,f4};
  char ch;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int i=0;
  clrscr();
  printf("\nEnter TFile :");
  gets(tfname);
  tfp=fopen(tfname,"wb");
  if(tfp==NULL)
  {
     printf("\nFile Not Created: ");
     getch();
     return 1;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

  }
  for(i=0;i<4;i++)
  {
    sfp=fopen(str[i],"rb");
    while(1)
    {
      ch=fgetc(sfp);
      if(feof(sfp))
	break;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      fprintf(tfp,"%c",ch);
    }
    fclose(sfp);
  }
  fclose(tfp);
  return 0;
}



/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */









/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */