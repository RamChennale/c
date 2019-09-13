/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<conio.h>
int main()
{
  char str[25];
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int counter=0,i;
  clrscr();
  printf("Enter a string: ");
  gets(str);
  for(i=0;str[i];i++)
  {
    switch(str[i])
    {
       case 'A':
       case 'a':
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
                 counter++;
                 break;
       case 'E':
       case 'e':
                counter++;
                 break;
       case 'I':
       case 'i':
                counter++;
                 break;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

       case 'O':
       case 'o':
                counter++;
                 break;
       case 'U':
       case 'u':
                counter++;
                 break;
     }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

}
printf("\nNo OF ovls: %d",counter);
getch();
return 0;
}
  

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */