/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program that uses Stack operations to perform the following:
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	i) Converting infix expression into postfix expression
	ii) Evaluating the postfix expression */

#include<stdio.h>
#include<conio.h>

int st[100];
int st_top=-1;

int cal(char post[]);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void in_post(char in[]);
void push_item(int it);
int pop_item();
int st_ISP(char t);
int st_ICP(char t);

/*main function*/
void main()
{
  char in[100],post[100];
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  clrscr();
  printf("\n\tEnter the Infix Expression: ");
  gets(in);
  in_post(in);
  getch();
}
/*end main*/

void push_item(int it)
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  if(st_top==99)
  {
    printf("\n\n\t*STACK is Full*");
    getch();
    exit(1);
  }
  st[++st_top]=it;
}

int pop_item()
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  int it;
  if(st_top==-1)
  {
    getch();
  }
  return(st[st_top--]);
}

/*Function for converting an infix expression to a postfix expression. */
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void in_post(char in[])
{
  int x=0,y=0,z,result=0;
  char a,c, post[100];
  char t;
  push_item('\0');
  t=in[x];
  while(t!='\0')
  {
    if(isalnum(t))
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    /*For checking whether the value in t is an alphabet or number. */
    {
      post[y]=t;
      y++;
    }
    else if(t=='(')
    {
      push_item('(');
    }
    else if(t==')')
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    {
      while(st[st_top]!='(')
      {
	c=pop_item();
	post[y]=c;
	y++;
      }
    c=pop_item();
    }
    else
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    {
      while(st_ISP(st[st_top])>=st_ICP(t))
      {
	c=pop_item();
	post[y]=c;
	y++;
      }
      push_item(t);
    }
    x++;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    t=in[x];
  }

  while(st_top!=-1)
  {
    c=pop_item();
    post[y]=c;
    y++;
  }
  printf("\n\tThe Postfix Expression is:");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  
  for(z=0;z<y;z++)
    printf("%c",post[z]);
  printf("\n\nDo you want to evaluate the Result of Postfix Expression?(Y/N):");
  scanf("%c",&a);
  if(a=='y' || a=='Y')
  {
    result=cal(post);
    printf("\n\n\tResult is: %d\n",result);
    getch();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
  else if(a=='n' || a=='N')
  {
    exit(0);
  }
}

/*Determining priority of inside elements*/
int st_ISP(char t)
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  switch(t)
  {
    case '(':return (10);
    case ')':return (9);
    case '+':return (7);
    case '-':return (7);
    case '*':return (8);
    case '/':return (8);
    case '\0':return (0);
    default: printf("Expression is invalid.");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    break;
  }
  return 0;
}

/*Determining priority of approaching elements*/
int st_ICP(char t)
{
  switch(t)
  {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

    case '(':return (10);
    case ')':return (9);
    case '+':return (7);
    case '-':return (7);
    case '*':return (8);
    case '/':return (8);
    case '\0':return (0);
    default: printf("Expression is invalid.");
    break;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
  return 0;
}

/*Evaluating the result of postfix expression*/
int cal(char post[])
{
  int m,n,x,y,j=0,len;
  len=strlen(post);
  while(j<len)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  {
    if(isdigit(post[j]))
    {
      x=post[j]-'0';
      push_item(x);
    }
    else
    {
      m=pop_item();
      n=pop_item();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

      switch(post[j])
      {
	case '+':x=n+m;
	break;
	case '-':x=n-m;
	break;
	case '*':x=n*m;
	break;
	case '/':x=n/m;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	break;
      }
      push_item(x);
    }
    j++;
  }
  if(st_top>0)
  {
    printf("Number of Operands are more than Operators.");
    exit(0);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  }
  else
  {
    y=pop_item();
    return (y);
  }
  return 0;
}


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */