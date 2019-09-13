/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <dir.h>
#include<string.h>
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void password(char*ptr)
{
  while(1)
  {
    *ptr=getch();
    if(*ptr=='\r')
    {
	*ptr='\0';
	break;
    }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    printf("*");
    ptr++;
   }
}
void framepath(char*dname,char*name,char*fname)
{
      strcpy(fname,dname);
      for(;*fname;fname++);
      for(;*fname!='\\';fname--);
      strcpy(fname+1,name);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
void main()
{
   struct ffblk ffblk;
   int done;
   int counter=0,flag,code;
   char dirname[200];
   char fname[200];
   FILE *sfp;
   char ch;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   char str[10];
   clrscr();
   printf("\nEnter Password: ");
   password(str);
   if(strcmp(str,"Balu")!=0)
   {
     printf("\nPassword Incorrect:");
     getch();
     exit(1);
   }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 printf("\nENTER DIRNAME: ");
   gets(dirname);
   printf("\nFOR ENCODE PRESS..1: ");
   printf("\nFOR DECODE PRESS..2: ");
   scanf("%d",&flag);
   if(flag==1)
      code=40;
   if(flag==2)
      code=-40;
printf("\nDirectory listing of %s",dirname);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  done = findfirst(dirname,&ffblk,0);
   while (!done)
   {
   framepath(dirname,ffblk.ff_name,fname);
      printf("\n%d.%s",++counter,fname);
      sfp=fopen(fname,"r+");
      if(sfp==NULL)
      {
	printf("\nFILE NOT FOUND");
	getch();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	exit(1);
      }
      while(1)
      {
	 ch=fgetc(sfp);
	 if(feof(sfp))
	   break;
	 if(ch!='\n'&&ch!='\r')
	 {
	   fseek(sfp,-1,SEEK_CUR);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   fprintf(sfp,"%c",ch+code);
	   fseek(sfp,0,SEEK_CUR);
	 }
      }
     fclose(sfp);
    done = findnext(&ffblk);
   }
   getch();
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */




/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */