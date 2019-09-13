/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>
#include<string.h>
#include<process.h>
#include<alloc.h>
int main()
{
  FILE *fp;
  long int i=0;
  long int fsize;
  char *str;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  char fname[20];
  char ch;
  clrscr();
  printf("\nEnter File Name: ");
  gets(fname);
  fp=fopen(fname,"rt");
  if(fp==NULL)
  {
    printf("\nFile Not Found: ");
    getch();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    return 1;
  }
  fseek(fp,0,SEEK_END);
  fsize=ftell(fp);
  fseek(fp,0,SEEK_SET);
str=(char*)calloc(fsize+1,sizeof(char));
  while(!feof(fp))
  {
    ch=fgetc(fp);
    str[i++]=ch;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
  str[--i]='\0';
  fclose(fp);
  strrev(str);
  fp=fopen(fname,"wt");
  fputs(str,fp);
  fclose(fp);
  free(str);
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */