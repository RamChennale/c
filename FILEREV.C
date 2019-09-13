/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program to reverse the first n characters in a file. 
(Note: The file name and n are specified on the command line.)*/

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <process.h>

void main(int argc, char *argv[])
{
  char a[15];
  char s[20];
  char n;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int k;
  int j=0;
  int i;
  int len;
  FILE *fp;

  if(argc!=3)
  {
  puts("Improper number of arguments.");
  exit(0);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
  fp = fopen(argv[1],"r");
  if(fp == NULL)
  {
  puts("File cannot be opened.");
  exit(0);
  }

  k=*argv[2]-48;
  n = fread(a,1,k,fp);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  a[n]='\0';
  len=strlen(a);
  for(i=len-1;i>=0;i--)
  {
   s[j]=a[i];
   printf("%c",s[j]);
   j=j+1;
}
s[j+1]='\0';
getch();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}




/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */