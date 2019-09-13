/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program that uses functions to perform the following operations:
   To delete n Characters from a given position in a given string.
*/
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void delchar(char *x,int a, int b);

void main()
{
     char string[10];
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     int n,pos,p;
     clrscr();

     puts("Enter the string");
     gets(string);
     printf("Enter the position from where to delete");
     scanf("%d",&pos);
     printf("Enter the number of characters to be deleted");
     scanf("%d",&n);
     delchar(string, n,pos);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     getch();
}

// Function to delete n characters
void delchar(char *x,int a, int b)
{
  if ((a+b-1) <= strlen(x))
  {
    strcpy(&x[b-1],&x[a+b-1]);
    puts(x);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    }
}



/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */