/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program, which takes two integer operands and one operator form the user,
   performs the operation and then prints the result. 
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   (Consider the operators +,-,*, /, % and use Switch Statement)
*/

#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,res,ch;
clrscr();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
printf("\t   *********************");
printf("\n\tMENU\n");
printf("\t********************");
printf("\n\t(1)ADDITION");
printf("\n\t(2)SUBTRACTION");
printf("\n\t(3)MULTIPLICATION");
printf("\n\t(4)DIVISION");
printf("\n\t(5)REMAINDER");
printf("\n\t(0)EXIT");
printf("\n\t********************");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
printf("\n\n\tEnter your choice:");
scanf("%d",&ch);

if(ch<=5 & ch>0)
{
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
}

switch(ch)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
 case 1:
 res=a+b;
 printf("\n Addition:%d",res);
 break;

 case 2:
 res=a-b;
 printf("\n Subtraction:%d",res);
 break;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

 case 3:
 res=a*b;
 printf("\n Multiplication:%d",res);
 break;

 case 4:
 res=a/b;
 printf("\n Division:%d",res);
 break;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

 case 5:
 res=a%b;
 printf("\n Remainder:%d",res);
 break;

 case 0:
 printf("\n Choice Terminated");
 exit();
 break;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

 default:
 printf("\n Invalid Choice");
}
getch();
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */