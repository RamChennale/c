/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<string.h>
#include<conio.h>
int mystricmp(const char*s1,const char*s2)
{
  int r=0;
  while(*s1!='\0'||*s2!='\0')
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  {
	if(*s1-*s2==32||*s1-*s2==-32||*s1-*s2==0)
	  {
		  ++s1;
		  ++s2;
	  }
	  else
	  {
		  r=(int)(*s1-*s2);
		  return r;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	  }
  }
  return r;
}

int main()
{
  char s1[10]="Hello";
  char s2[10]="heLlo";
  int d;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  clrscr();
  puts(s1);
  puts(s2);
  //d=stricmp(s1,s2);
  d=mystricmp(s1,s2);
  printf("\nDiff is:%d",d);
  getch();
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */