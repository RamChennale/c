/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a program to create a linear linked list interactively and print out the list and the total number of items in the list.  */


#include	<stdio.h>
#include	<stdlib.h>
#define 	NULL 0

struct linked_list
{
	int number;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	struct linked_list *next;
};
typedef struct linked_list node;  /* node type defined */

main()
{
	node *head;
	void create(node *p);
	int count(node *p);
	void print(node *p);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	printf(head);
	printf("\n");
	printf("\nNumber of items = %d \n", count(head));
}
void create(node *list)
{
	printf("Input a number\n");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("(type -999 at end): ");
	scanf("%d", &list -> number); /* create current node */

	if(list->number == -999)
	{
		list->next = NULL;
	}

	else 	/*create next node */
	{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		list->next = (node *)malloc(sizeof(node));
		create(list->next);  */ Recursion occurs */
	}
	return;
}
void print(node *list)
{
		if(list->next != NULL)
		{
		  printf("%d-->",list ->number);  /* print current item */
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		  
		   if(list->next->next == NULL)
			   printf("%d", list->next->number);

		  print(list->next);		/* move to next item */
		}
		return;
	}

	int count(node *list)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
		if(list->next == NULL)
		       return (0);
		else
		       return(1+ count(list->next));
	}

Output

Input a number
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
(type -999 to end); 60
Input a number
(type -999 to end); 20
Input a number
(type -999 to end); 10
Input a number
(type -999 to end); 40
Input a number
(type -999 to end); 30
Input a number
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
(type -999 to end); 50
Input a number
(type -999 to end); -999

60 -->20 -->10 -->40 -->30 -->50 --> -999

Number of items = 6

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */