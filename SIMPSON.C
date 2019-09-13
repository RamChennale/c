/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write C program to implement  Simpson method. */

#include<stdio.h>
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<conio.h>
#include<math.h>

char postfix[80];
float stack[80];
char stack1[80];
int top=-1,top1=-1;
float eval(char postfix[], float x1);
void infix_postfix(char infix[]);

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
main()
{
 float x0, xn, h, s,e1,e2, e3;
 char exp[80], arr[80];
 int i,n,l=0;
 clrscr();
 printf("\nEnter an expression: ");
 gets(exp);
 puts("Enter x0, xn and number of sub-intervals: ");
 scanf("%f%f%d", &x0, &xn, &n);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 h=(xn-x0)/n;
 if(exp[0]=='l'&& exp[1]=='o'&& exp[2]=='g')
{
   l=strlen(exp);
   for(i=0;i<l-3; i++)
   arr[0]=exp[i+3];
   arr[i]='\0';
   infix_postfix(arr);
   e1=eval(postfix,x0);
   e2=eval(postfix,xn);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   e3=4*eval(postfix, x0+h);
   s=log(e1)+log(e2)+log(e3);
   for (i=3;i<=n-1;i+=2)
      s+=4*eval(postfix,x0+i*h)+2*eval(postfix, x0+(i-1)*h);
}
 else
{
   infix_postfix(exp);
   s=eval(postfix,x0)+eval(postfix,xn)+4*eval(postfix, x0+h);
   for (i=3;i<=n-1;i+=2)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   s+=4*eval(postfix,x0+i*h)+2*eval(postfix, x0+(i-1)*h);
}
 printf("The value of integral is %6.3f\n",(h/3)*s);
return(0);
}
/*Inserting the operands in a stack. */
void push(float item)
{
if(top==99)
 {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   printf("\n\tThe stack is full");
   getch();
   exit(0);
}
else
{
  top++;
  stack[top]=item;
}
return;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
/*Removing the operands from a stack. */
float pop()
{
  float item;
  if(top==-1)
{
 printf("\n\tThe stack is empty\n\t");
 getch();
}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 item=stack[top];
 top--;
 return (item);
}
void push1(char item)
{
 if(top1==79)
{
  printf("\n\tThe stack is full");
  getch();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  exit(0);
}
 else
{
  top1++;
  stack1[top1]=item;
}
return;
}
/*Removing the operands from a stack. */
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
char pop1()
{
 char item;
 if(top1==-1)
{
  printf("\n\tThe stack1 is empty\n\t");
  getch();
}
 item=stack1[top1];
 top1--;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 return (item);
}
/*Converting an infix expression to a postfix expression. */
void infix_postfix(char infix[])
{
 int i=0,j=0,k;
 char ch;
 char token;
 for(i=0;i<79;i++)
 postfix[i]=' ';
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 push1('?');
 i=0;
 token=infix[i];
 while(token!='\0')
 {
   if(isalnum(token))
    {
      postfix[j]=token;
      j++;
    }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   else if(token=='(')
    {
     push1('(');
    }
   else if(token==')')
   {
    while(stack1[top1]!='(')
    {
     ch=pop1();
     postfix[j]=ch;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     j++;
    }
   ch=pop1();
  }
 else
 {
  while(ISPriority(stack1[top1])>=ICP(token))
  {
   ch=pop1();
   postfix[j]=ch;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   j++;
  }
push1(token);
}
i++;
token=infix[i];
}
while(top1!=0)
{
 ch=pop1();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 postfix[j]=ch;
 j++;
}
postfix[j]='\0';
}

/*Determining the priority of elements that are placed inside the stack. */
int ISPriority(char token)
{
 switch(token)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 {
  case '(':return (0);
  case ')':return (9);
  case '+':return (7);
  case '-':return (7);
  case '*':return (8);
  case '/':return (8);
  case '?':return (0);
  default: printf("Invalid expression");
 }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
return 0;
}

/*Determining the priority of elements that are approaching towards the stack. */
int ICP(char token)
{
 switch(token)
 {
  case '(':return (10);
  case ')':return (9);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  case '+':return (7);
  case '-':return (7);
  case '*':return (8);
  case '/':return (8);
  case '\0':return (0);
  default: printf("Invalid expression");
  }
return 0;
}
/*Calculating the result of expression, which is converted in postfix notation. */
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
float eval(char p[], float x1)
{
 float t1,t2,k,r;
 int i=0,l;
 l=strlen(p);
 while(i<l)
 {
  if(p[i]=='x')
  push(x1);
  else
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   if(isdigit(p[i]))
    {
     k=p[i]-'0';
     push(k);
    }
 else
 {
  t1=pop();
  t2=pop();
  switch(p[i])
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  {
   case '+':k=t2+t1;
   break;
   case '-':k=t2-t1;
   break;
   case '*':k=t2*t1;
   break;
   case '/':k=t2/t1;
   break;
   default: printf("\n\tInvalid expression");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
 push(k);
}
i++;
}
if(top>0)
 {
  printf("You have entered the operands more than the operators");
  exit(0);
 }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
else
 {
  r=pop();
  return (r);
 }
return 0;
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */