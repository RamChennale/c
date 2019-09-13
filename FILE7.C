/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
  FILE *fp;
  int na,ns,nt,nn,nd;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  char ch;
  char fname[20];
  clrscr();
  printf("\nEnter a File :");
  gets(fname);
  fp=fopen(fname,"r");
  if(fp==NULL)
  {
    printf("\nFile Not Found: ");
    getch();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    exit(1);
  }
  na=ns=nt=nn=nd=0;
  while(!feof(fp))
  {
    ch=fgetc(fp);
if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
      na++;
    if(ch==' ')
       ns++;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    if(ch=='\t')
      nt++;
    if(ch=='\n')
      nn++;
    if(ch>='0'&&ch<='9')
     nd++;
  }
  printf("\nNo Of Alph: %d",na);
  printf("\nNo of Spac:%d",ns);
  printf("\nNo of Tab:%d",nt);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nNo of New Lin:%d",nn);
  printf("\nNo of Dig:%d",nd);
  fclose(fp);
  getch();
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */