/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void mystrcat(char *dest,const char*src)
{
  int l;
  l=strlen(dest);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  dest+=l;
  while(*dest++=*src++)
  {
  }
}
int main()
{
  char s1[25]="welcome";
  char s2[10]="Hello";
  clrscr();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  puts(s1);
  puts(s2);
  mystrcat(s1," ");
  mystrcat(s1,s2);
  //strcat(s1+2,s2+2);
  puts(s1);
  puts(s2);
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */