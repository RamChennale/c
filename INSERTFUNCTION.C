/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/* Write a function for inserting an item into a linked list  */


node *insert(node *head)
{
	node *find(node *p, int a);
	node *new;   		/* pointer to new node */
	node *n1;		/* pointer to node preceding key node */
	int key;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	int x;			/* new item (number) to be inserted */

	printf("Value of new item?");
	scanf("%d", &x);
	printf("Value of key item ? (type -999 if last) ");
	scanf("%d", &key);

	if(head->number == key) 		/* new node is first */
	{
	    new = (node *)malloc(size of(node));
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	    new->number = x;
	    new->next = head;
	    head = new;
	}
	else		/* find key node and insert new node */
	{			/* before the key node */
		n1 = find(head, key);    /* find key node */

		if(n1 == NULL)
		   printf("\n key is not found \n");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		else		/* insert new node */
		{
	      new = (node *)malloc(sizeof(node));
	      new->number = x;
	      new->next = n1->next;
	      n1->next = new;
		}
  	}
	return(head);
}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
node *find(node *lists, int key)
{
		if(list->next->number == key)  	/* key found */
			return(list);
	else

		if(list->next->next == NULL) 	/* end */
			return(NULL);
	else
		find(list->next, key);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */