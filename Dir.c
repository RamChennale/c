/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <dir.h>
#include<string.h>
void framepath(char*dname,char*name,char*fname)
{
      strcpy(fname,dname);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      for(;*fname;fname++);
      for(;*fname!='\\';fname--);
      strcpy(fname+1,name);
}

void main()
{
   struct ffblk ffblk;
   int done;
   int counter=0;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   char dirname[200];
   char fname[200];
   FILE *sfp,*tfp;
   char ch;
   char str[200];
   int nl=0,num;
   clrscr();
   printf("ENTER DIRNAME:");
   gets(dirname);
   printf("ENTER STR	:");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   flushall();
   gets(str);
   printf("ENTER NUM	:");
   scanf("%d",&num);
   printf("Directory listing of %s",dirname);
   done = findfirst(dirname,&ffblk,0);
   while (!done)
   {
      framepath(dirname,ffblk.ff_name,fname);
      printf("\n%d.%s",++counter,fname);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       sfp=fopen(fname,"r");
      if(sfp==NULL)
      {
	printf("\nFILE NOT FOUND");
	getch();
	exit(1);
      }
     tfp=fopen("temp.txt","w");
      if(tfp==NULL)
       {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	 printf("\nUNABLE........");
	 exit(2);
       }
      fprintf(tfp,"%s\n",str);
       while(1)
	   {
	      ch=fgetc(sfp);
	      if( feof(sfp) )
	      break;
	      fprintf(tfp,"%c",ch);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	      if(ch=='\n')
	      nl++;
	      if(nl==num)
	      {
		fprintf(tfp,"%s\n",str);
		nl=0;
	      }
	   }
	   fprintf(tfp,"\n%s",str);
	fclose(sfp);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	fclose(tfp);
	sfp=fopen("temp.txt","r");
	tfp=fopen(fname,"w");
	  while(1)
	   {
	      ch=fgetc(sfp);
	      if( feof(sfp) )
	      break;
	      fprintf(tfp,"%c",ch);
	   }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	fclose(sfp);
	fclose(tfp);
	remove("temp.txt");
      done = findnext(&ffblk);
   }
   getch();
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */