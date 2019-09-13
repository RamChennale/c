/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#include <process.h>
int main()
{
  FILE *fp;
     char ch;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     clrscr();
   fp=fopen("D:\\test.txt","r");
     if(fp==NULL)
     {
    printf("\nFile Not Found: ");
       getch();
       exit(1);
     }
     fscanf(fp,"%c",&ch);
     while(1)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     {
       printf("%c",ch);
       fscanf(fp,"%c",&ch);
       if(feof(fp))
	break;
     }
     getch();
     return 0;
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */