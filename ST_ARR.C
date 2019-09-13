/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write  C programs that implement stack (its operations) using i) Arrays */

#include<stdio.h>
#include<conio.h>

int st_arr[20];
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int t=-1;

void push_ele(int ele);
int pop_ele();
void display_ele();

void main()
{
  char choice,num1=0,num2=0;
  while(1)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  {
    clrscr();
    printf("======================================");
    printf("\n\t\t MENU ");
    printf("\n======================================");
    printf("\n[1] Using Push Function");
    printf("\n[2] Using Pop Function");
    printf("\n[3] Elements present in Stack");
    printf("\n[4] Exit\n");
    printf("\n\tEnter your choice: ");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    fflush(stdin);
    scanf("%c",&choice);

    switch(choice-'0')
    {

      case 1:
      {
	printf("\n\tElement to be pushed: ");
	scanf("%d",&num1);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	push_ele(num1);
	break;
      }

      case 2:
      {
	 num2=pop_ele(1);
	 printf("\n\tElement to be popped: %d\n\t",num2);
	 getch();
	 break;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      }

      case 3:
      {
	display_ele();
	getch();
	break;
      }

      case 4:
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	exit(1);
	break;

      default:
	printf("\nYour choice is invalid.\n");
	break;
    }
  }
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/*Implementing the push() function. */
void push_ele(int ele)
{
  if(t==99)
  {
    printf("STACK is Full.\n");
    getch();
    exit(1);
  }
  st_arr[++t]=ele;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}

/*Implementing the pop() function. */
int pop_ele()
{
  int ele1;
  if(t==-1)
  {
    printf("\n\tSTACK is Empty.\n");
    getch();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    exit(1);
  }
  return(st_arr[t--]);
}

/*Implementing display() function. */
void display_ele()
{
  int k;
  printf("\n\tElements present in the stack are:\n\t");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  for(k=0;k<=t;k++)
  printf("%d\t",st_arr[k]);
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */