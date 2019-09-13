/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
int scanint(char*ptr)
{
  int r=0;
  while(*ptr!='\0')
  {
    if(*ptr>='0'&&*ptr<='9')
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    {
      r=r*10+*ptr-'0';
      ptr++;
    }
    else
    {
      printf("\nInvalid Input:");
      getch();
      exit(1);
    }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
  return r;
}

int main(int argc,char *argv[])
{
  int i,n;
  clrscr();
  if(argc<2||argc>2)
  {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     printf("\nInvalid Arguments: ");
     getch();
     exit(1);
  }
  n=scanint(argv[1]);
  i=1;
  while(i<=10)
  {
    printf("\n%d*%2d=%3d",n,i,n*i);
    i=i+1;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
  getch();
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */