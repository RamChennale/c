/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
void mystrcpy(char *dest,const char*src)
{
	while(*src)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
	  *dest=*src;
	  src++;
	  dest++;
	}
	*dest='\0';
}
int main()
{
  char str1[10]="Welcome";
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  char str2[10];
  clrscr();
  printf("\nEnter a string: ");
  gets(str2);
  puts(str1);
  puts(str2);
  //stcpy(str1,str2);
  mystrcpy(str1,str2);
  puts(str1);
  puts(str2);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  return 0;
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */