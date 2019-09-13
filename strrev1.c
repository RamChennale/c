/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>
#include<string.h>
void mystrrev(char *ptr1)
{
	 int l,i;
	 char t;
	 char *ptr2=ptr1;
	 l=strlen(ptr1);
	 ptr2+=l-1;
	 for(i=0;i<l/2;i++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	 {
		t=*ptr1;
		*ptr1=*ptr2;
		*ptr2=t;
		ptr1++;
		ptr2--;
	}
}
int main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  char str[15];
  clrscr();
  printf("\nEnter a string: ");
  gets(str);
  puts(str);
  mystrrev(str);
  puts(str);
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */