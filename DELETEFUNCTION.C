/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/* Write a  function for deleting an item from linked list */

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

node *delete(node *head)
{
	node *find(node *p, int a);
	int  key;		/* item to be deleted */
	node *n1;		/* pointer to node preceding key node */
	node *p;		/* temporary pointer */
	printf("\n What is the item (number) to be deleted?");
	scanf("%d", &key);
	if(head->number == key) 	/* first node to be deleted) */
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
		p = head->next;		/* pointer to 2nd node  in list */
		free(head);		/* release space of key node */
		head = p;		/* make head to point to 1st node */
	}
	else
	{
		n1 = find(head, key);
		if(n1 == NULL)
		   printf("\n key not found \n");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		else		                 	/* delete key node */
		{
			p = n1->next->next;		/*  pointer to the node 
							following the keynode */
	
			free(n1->next);			/* free key node */
			n1->next = p;			/* establish link */
		}
	}
	return(head);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
                /* USE FUNCTION find() HERE */
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */