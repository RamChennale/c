/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <process.h>

void main()
{
  FILE *fp;
  fp=fopen("D:\\test.txt","w");
  if(fp==NULL)
  {
     printf("\File No Created: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     getch();
     exit(1);
  }
  //fprintf(fp,"%dwelcome%d",10,20);
  fprintf(fp,"\nHello");
  fclose(fp);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */