/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write  C programs that implement stack (its operations) using ii) Pointers */

#include<stdio.h>
#include<conio.h>

struct st_point
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int ele;
  struct st_point *l;
}

*t;
int i;

void push_ele(int j);
int pop_ele();
void display_ele();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

void main()
{
  char choice,num1=0,num2=0;
  int i;
  while(1)
  {
    clrscr();
    printf("======================================");
    printf("\n\t\t MENU ");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    printf("\n======================================");
    printf("\n[1] Using Push Function");
    printf("\n[2] Using Pop Function");
    printf("\n[3] Elements present in Stack");
    printf("\n[4] Exit\n");
    printf("\n\tEnter your choice: ");
    fflush(stdin);
    scanf("%c",&choice);

    switch(choice-'0')
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    {
      case 1:
      {
	printf("\n\tElement to be pushed:");
	scanf("%d",&num1);
	push_ele(num1);
	break;
      }

      case 2:
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      {
	num2=pop_ele(1);
	printf("\n\tElement to be popped: %d\n\t",num2);
	getch();
	break;
      }

      case 3:
      {
	printf("\n\tElements present in the stack are:\n\t");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	display_ele();
	getch();
	break;
      }

      case 4:
	exit(1);
	break;

      default:
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("\nYour choice is invalid.\n");
	break;
    }
  }
}

/*Inserting the elements using push function*/
void push_ele(int j)
{
  struct st_point *m;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  m=(struct st_point*)malloc(sizeof(struct st_point));
  m->ele=j;
  m->l=t;
  t=m;
  return;
}

/*Removing the elements using pop function*/
int pop_ele()
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  if(t==NULL)
  {
    printf("\n\STACK is Empty.");
    getch();
    exit(1);
  }
  else
  {
    int i=t->ele;
    t=t->l;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    return (i);
  }
return 0;
}

/*Displaying the elements */
void display_ele()
{
  struct st_point *pointer=NULL;
  pointer=t;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  while(pointer!=NULL)
  {
    printf("%d\t",pointer->ele);
    pointer=pointer->l;
  }
}


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */