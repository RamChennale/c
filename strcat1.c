/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>
int main()
{
  char src[10];
  int l;
  int mystrlen(const char*);
  clrscr();
  printf("\nEnter a string: ");
  gets(src);
  //l=strlen(src);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  l=mystrlen(src);
  printf("\nString lenght:%d",l);
  getch();
  return 0;
}
int mystrlen(const char*src)
{
	int c=0;
	while(*src!='\0')
	{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		++c;
		src++;
	}
	return c;
}


/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */