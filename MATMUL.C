/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include<conio.h>
#include <process.h>
int main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
 int m1[50][50];
 int m2[50][50];
 int m3[50][50];
 int r,c,r1,c1,r2,c2,r3,c3,t;
 clrscr();
 printf("\nENTER MAT1 DETAILS  :");
 printf("\nENTER NO OF ROWS    :");
 scanf("%d",&r1);
 printf("\nENTER NO OF COLOUMNS:");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 scanf("%d",&c1);
 printf("\nENTER MAT2 DETAILS  :");
 printf("\nENTER NO OF ROWS    :");
 scanf("%d",&r2);
 printf("\nENTER NO OF COLOUMNS:");
 scanf("%d",&c2);
 if(c1!=r2)
 {
  printf("\nMAT MUL NOT POSIBLE");
  getch();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  //goto END;
  //return 1;
   exit(1);
  }
  printf("\nENTER MAT1 %d*%d ELEMENTS\n",r1,c1);
 for(r=0;r<r1;r++)
 for(c=0;c<c1;c++)
 scanf("%d",&m1[r][c]);
 printf("\nENTER MAT2 %d*%d ELEMENTS\n",r2,c2);
 for(r=0;r<r2;r++)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 for(c=0;c<c2;c++)
 scanf("%d",&m2[r][c]);
 r3=r1;
 c3=c2;
 printf("\nTHE RESULT\n");
 for(r=0;r<r3;r++)
 {
    printf("\n");
    for(c=0;c<c3;c++)
    {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	m3[r][c]=0;
	for(t=0;t<c1;t++)
	m3[r][c]+=m1[r][t]*m2[t][c];
	printf("%3d ",m3[r][c]);
    }
 }
  getch();
  END:
  return 0;
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */