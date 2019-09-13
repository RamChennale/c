/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
#include<process.h>

#define f1 "D:\\part1.mp3"
#define f2 "D:\\part2.mp3"
#define f3 "D:\\part3.mp3"
#define f4 "D:\\part4.mp3"
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

int main()
{
  FILE *sfp,*tfp;
  char sfname[20];
  char str[4][50]={f1,f2,f3,f4};
  char ch;
  int i=0;
  long int size,nb=0;
  clrscr();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nEnter Source File :");
  gets(sfname);
  sfp=fopen(sfname,"rb");
  if(sfp==NULL)
  {
     printf("\nFile Not Found: ");
     getch();
     return 1;

  }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  fseek(sfp,0,SEEK_END);
  size=ftell(sfp);
  fseek(sfp,0,SEEK_SET);
  tfp=fopen(str[i],"wb");
  while(1)
  {
    ch=fgetc(sfp);
    if(feof(sfp))
      break;
    fprintf(tfp,"%c",ch);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    nb++;
    if(nb==size/4&&i!=3)
    {
       fclose(tfp);
       tfp=fopen(str[++i],"wb");
       nb=0;
    }
  }
  fclose(tfp);
  fclose(sfp);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  return 0;
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */