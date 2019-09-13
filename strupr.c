/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<string.h>
void mystrupr(char *src)
{
	while(*src!='\0')
	{
		 if(*src>='a'&&*src<='z')
		 {
			 *src=*src-32;
		 }
		 src++;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	}
}
int main()
{
  char str[15];
  clrscr();
  printf("Enter a string: ");
  gets(str);
  puts(str);
  //strupr(str);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  mystrupr(str+2);
  puts(str);
  getch();
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */