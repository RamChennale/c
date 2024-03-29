/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a program for creation of sorted list from a given list of numbers */

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */


#include <stdio.h>
#include <stdlib.h>
#define NULL 0

struct linked_list
{
	int number;
	struct linked_list *next;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
};
typedef struct linked_list node;

main ()
{
	int n;
	node *head = NULL;
	void print(node *p);
	node *insert_Sort(node *p, int n);

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("Input the list of numbers.\n");
	printf("At end, type -999.\n");
	scanf("%d",&n);

	while(n != -999)
	{
		if(head == NULL)       /* create 'base' node */
		{
			head = (node *)malloc(sizeof(node));
			head ->number = n;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
			head->next = NULL;
		
		}

		else				/* insert next item */
		{
			head = insert_sort(head,n);
		}
		  scanf("%d", &n);
	}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("\n");
	print(head);
	print("\n");
}
node *insert_sort(node *list, int x)
{
	node *p1, *p2, *p;
	p1 = NULL;
	p2 = list; /* p2 points to first node */

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	for( ; p2->number < x ; p2 = p2->next)
	{
		p1 = p2;

		if(p2->next == NULL)
		{
			p2 = p2->next;				/* p2 set to NULL */
			break;			   /* insert new node at end */
		}
	}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

		/* key node found */
		p = (node *)malloc(sizeof(node)); /* space for new node */
		p->number = x;     /* place value in the new node */
		p->next = p2;      /* link new node to key node */
		if (p1 == NULL)
						list = p;      /* new node becomes the first node */
		else
						p1->next = p;  /* new node inserted after 1st node */
 		return (list);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
void print(node *list)
{
	if (list == NULL)
		printf("NULL");
	else
	{
		printf("%d-->",list->number);
		print(list->next);
	}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	return;
}

Output
Input the list of number.
At end, type -999.
80 70 50 40 60 -999
40-->50-->60-->70-->80 -->NULL
Input the list of number.
At end, type -999.
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
40 70 50 60 80 -999
40-->50-->60-->70-->80-->NULL
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */