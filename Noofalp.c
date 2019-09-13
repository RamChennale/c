/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
int main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  char str[25];
  int counter=0,i;
  clrscr();
  printf("Enter a string: ");
  gets(str);
  for(i=0;str[i];i++)
  {
     if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
    counter++;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
printf("\nNo OF alph: %d",counter);
getch();
return 0;
}
  

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */