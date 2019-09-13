/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<string.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>
void mystrlwr(char*src)
{
	while(*src!='\0')
	{
		if(*src>='A'&&*src<='Z')
		{
				*src=*src+32;
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
	 //strlwr(str);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	 mystrlwr(str);
	 puts(str);
	 return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */