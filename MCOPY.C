/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<process.h>
int main(int argc, char*argv[])
{
  FILE *sfp,*dfp;
  char ch;
  if(argc>3||argc<3)
  {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    printf("\nInvalid Arguments: ");
    exit(1);
  }
  sfp=fopen(argv[1],"r");
  if(sfp==NULL)
  {
printf("\nSource File Not Found: ");
    exit(2);
  }
  dfp=fopen(argv[2],"w");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  if(dfp==NULL)
  {
  printf("\nFile Not Created: ");
    exit(3);
  }
  while(!feof(sfp))
  {
     ch=fgetc(sfp);
     fprintf(dfp,"%c",ch);
     //fputc(ch,dfp);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
  fclose(sfp);
  fclose(dfp);
  printf("\nFile Copy:" );
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */