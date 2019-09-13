/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<string.h>
#include<conio.h>
int mystrcmp(const char*s1,const char*s2)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
	 int r=0;
	 while(*s1!='\0'||*s2!='\0')
	 {
		  if(*s1!=*s2)
		  {
			  r=(int)(*s1-*s2);
			  return r;
		  }
		  s1++;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		  s2++;
	 }
	 return r;
}


int main()
{
  char s1[10]="Hello";
  char s2[10]="HeLlo";
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int d;
  clrscr();
  puts(s1);
  puts(s2);
  //d=strcmp(s1,s2);
  d=mystrcmp(s1,s2);
  printf("\nDiff is:%d",d);
  getch();
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */