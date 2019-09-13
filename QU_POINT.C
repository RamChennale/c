/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write C programs that implement Queue (its operations) using	ii) Pointers */

#define true 1
#define false 0
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

#include<stdio.h>
#include<conio.h>
#include<process.h>

struct q_point
{
  int ele;
  struct q_point* n;
};
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

struct q_point *f_ptr = NULL;

int e_que(void);
void add_ele(int);
int rem_ele(void);
void show_ele();

/*main function*/
void main()
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  int ele,choice,j;
  while(1)
  {
    clrscr();
    printf("\n\n****IMPLEMENTATION OF QUEUE USING POINTERS****\n");
    printf("==============================================");
    printf("\n\t\t  MENU\n");
    printf("==============================================");
    printf("\n\t[1] To insert an element");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    printf("\n\t[2] To remove an element");
    printf("\n\t[3] To display all the elements");
    printf("\n\t[4] Exit");
    printf("\n\n\tEnter your choice:");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:
      {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("\n\tElement to be inserted:");
	scanf("%d",&ele);
	add_ele(ele);
	getch();
	break;
      }

      case 2:
      {
	if(!e_que())
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
	  j=rem_ele();
	  printf("\n\t%d is removed from the queue",j);
	  getch();
	}
	else
	{
	  printf("\n\tQueue is Empty.");
	  getch();
	}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	break;
      }

      case 3:
	show_ele();
	getch();
	break;

      case 4:
	exit(1);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	break;

      default:
	printf("\n\tInvalid choice.");
	getch();
	break;
    }

  }
}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/* Function to check if the queue is empty*/
int e_que(void)
{
  if(f_ptr==NULL)
  return true;
  return false;
}

/* Function to add an element to the queue*/
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void add_ele(int ele)
{
  struct q_point *queue = (struct q_point*)malloc(sizeof(struct q_point));
  queue->ele = ele;
  queue->n = NULL;
  if(f_ptr==NULL)
    f_ptr = queue;
  else
  {
    struct q_point* ptr;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    ptr = f_ptr;
    for(ptr=f_ptr ;ptr->n!=NULL; ptr=ptr->n);
      ptr->n = queue;
  }
}

/* Function to remove an element from the queue*/
int rem_ele()
{
  struct q_point* queue=NULL;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  if(e_que()==false)
  {
    int j = f_ptr->ele;
    queue=f_ptr;
    f_ptr = f_ptr->n;
    free (queue);
    return j;
  }
  else
  {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    printf("\n\tQueue is empty.");
    return -9999;
  }
}

/* Function to display the queue*/
void show_ele()
{
  struct q_point *ptr=NULL;
  ptr=f_ptr;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  if(e_que())
  {
    printf("\n\tQUEUE is Empty.");
    return;
  }
  else
  {
    printf("\n\tElements present in Queue are:\n\t");
    while(ptr!=NULL)
    {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      printf("%d\t",ptr->ele);
      ptr=ptr->n;
    }
  }
}




/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */