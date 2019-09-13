/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
#include<process.h>
#include<conio.h>
typedef struct
{
  int id;
  char name[36];
  int sal;
}EMP;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

FILE *fp;
int ne=0;
EMP e;
char ch;
void main()
{
  int flag;
  void createemps();
  void modifyeemps();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  void showdata();
  int noofemps();
  clrscr();
  while(1)
  {
printf("\nFOR CREATE EMPS  ENTER 1:");
printf("\nFOR MODIFYE EMPS ENTER 2:");
printf("\nFOR DISPLAY EMPS ENTER 3:");
printf("\nFOR NO OF   EMPS ENTER 4:");
printf("\nFOR EXIT  ENTER ANY......:");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   scanf("%d",&flag);
   switch(flag)
   {
	  case 1:createemps();
	       break;
	  case 2:modifyeemps();
	       break;
	  case 3:showdata();
	       break;
          case 4:
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
printf("\n No of EMPS=%d",noofemps());
		break;
	 default:exit(0);
  }//End Of switch
}//End Of While

}//End of Main

int noofemps()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		  fp=fopen("E:\\emp.data","rb");
  if(fp==NULL)
    return 0;
  fseek(fp,0,SEEK_END);
  ne=ftell(fp)/sizeof(EMP);
  fclose(fp);
  return ne;
}
void createemps()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   ne=noofemps();
fp=fopen("E:\\emp.data","ab");
if(fp==NULL)
{
printf("\UNABLE TO CREATE DATA BASE");
  getch();
 exit(1);
}
do
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  e.id=++ne;
  printf("\nEMP ID: %d",e.id);
  printf("\nENTER NAME: ");
  flushall();
  gets(e.name);
  printf("\nENTER sALARY: ");
  scanf("%d",&e.sal);
  fwrite(&e,sizeof(e),1,fp);
printf("\nDo you want enter onther y/n:");					flushall();
  ch=getchar();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}while(ch=='y'||ch=='Y');
fclose(fp);
}
void modifyeemps()
{
  int id;
  ne=noofemps();
  if(ne==0)
  {
    printf("\n NO DATA");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    return;
  }
 printf("\nNo of Emps=%d",ne);
 printf("\n Enter ID:");
 scanf("%d",&id);
 if(id<1||id>ne)
 {
  printf("\n Invalid ID");
  return;
 }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 fp=fopen("E:\\emp.data","rb+");
fseek(fp,(id-1)*sizeof(e),SEEK_SET);
fread(&e,sizeof(e),1,fp);

fseek(fp,(id-1)*sizeof(e),SEEK_SET);
printf("\n id=%2d sal=%5d name=%10s",e.id,e.sal,e.name);

printf("\nEnter New Name: ");
flushall();
gets(e.name);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
printf("\nEnter new sal:");
scanf("%d",&e.sal);
fwrite(&e,sizeof(e),1,fp);
fclose(fp);
}
void showdata()
{
  int i;
  ne=noofemps();
  if(ne==0)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  {
    printf("\n No Data");  		    return;
  }
 fp=fopen("E:\\emp.data","rb");
 printf("\n.......................\n");
for(i=1;i<=ne;i++)
{
  fread(&e,sizeof(e),1,fp);
printf("\nID=%2d Sal=%5d  Name=%10s",e.id,e.sal,e.name);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
printf("\n.......................\n");
fclose(fp);
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */