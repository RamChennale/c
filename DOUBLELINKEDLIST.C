/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program that uses functions to perform the following operations on doubly linked list.:
	i) Creation ii) Insertion   iii) Deletion   iv) Traversal in both ways
*/

#include "stdio.h"
#include "alloc.h"
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

typedef struct dubll
{
 int data;
 struct dubll *leftlink,*rightlink;
}*DUBLL;

DUBLL high,temp_node,low,last,pntr;
int flag=0;

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
DUBLL NodeAlloc();
DUBLL Search(int,int);

void CreateItem();
void AppendItem();
void PrintItem();
void DeleteItem();
DUBLL Search(int item,int flag);
DUBLL NodeAlloc();
void InsertItem();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

void main(void)
{
 int choice,Item;
 high=NULL;
 while(1)
 {
  clrscr();
  printf("\n \t\t\t***** M A I N   M E N U *****\n\n");
  printf("\n 1: Create Linked List \n 2: Append a Node to the List \n 3: Traverse the List \n 4: Delete a Node from the List  \n 5: Search a Node \n 6: Insert a Node to the List \n 7: Close \n\n\t\t Enter your Option [  ]\b\b");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
         CreateItem();
         puts("\nPress any key to go back to main menu.");
	 getch();
         break;
    case 2:
         AppendItem();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
         break;
    case 3:
	 PrintItem();
         puts("\nPress any key to go back to main menu.");
         getch();
	 break;
    case 4:
         DeleteItem();
         break;
    case 5:
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
         printf("Find an Item: ");
         scanf("%d",&Item);
         temp_node=Search(Item,0);
         if(temp_node)
         {
	  puts("The item is available in the Linked List.");
         }
         else
	 {
          puts("The item is not found in the Linked List.");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
          }
          getch();
	  break;
    case 6:
         InsertItem();
         break;
    case 7:
         exit();
    default:
            puts("Invalid choice.");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
            puts("\nPress any key to go back to main menu.");
	    getch();
            break;
   }
  }
}

/* Function to Create the list*/
void CreateItem()
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   if(high==NULL)
   {
    printf("\n --Creating the list--");
    temp_node=NodeAlloc();
    printf("\n Enter starting data (as integer value) :");
    scanf("%d",&temp_node->data);
    high=temp_node;
   }
   else{ printf("\n List already created @ %d with %d as data.",high,high->data);}
}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/* Function to Append items to the list*/
void AppendItem()
{
   low=high;
   if(high==NULL)
   {
     CreateItem();
   }
   else
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   {
     temp_node=NodeAlloc();
     printf("\n Enter Item (in integer) :");
     scanf("%d",&temp_node->data);
     temp_node->rightlink=NULL;

     while(low->rightlink!=NULL)
      low=low->rightlink;
      low->rightlink=temp_node;
      temp_node->leftlink=low;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      last=low->rightlink;

    }
}

/* Function to Traverse the list both ways and print the data*/
void PrintItem()
{
   DUBLL temp_node;
   if(high==NULL)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   {
     printf("\n List is not available. Please create a list first."); 
     getch();
     CreateItem();
   }
   temp_node=high;
   last=low->rightlink;
   printf("\n--Printing The List In Forward direction--\n");

   while(temp_node!=NULL)             //In forward direction
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	 {
	  printf("\t %d",temp_node->data);
	  temp_node = temp_node->rightlink;
	 }
   printf("\n");
   printf("\n--Printing The List In Backward direction--\n");
	 temp_node=high;
	 if(temp_node->rightlink==NULL){printf("%d",temp_node->data);return; }
	    while(last!=NULL)             //In backward direction
	     {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	       printf("\t %d",last->data);
	       last = last->leftlink;
	      }
}

/* Function to Delete items of the list*/
void DeleteItem()
{
 int value;
 DUBLL temp_node;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 if(high==NULL)
 {
   printf("\n List is not available. Please create a list first.");
   getch();
   CreateItem();
 }
 printf("\n Item to delete :");
 scanf("%d",&value);
 pntr=Search(value,1);
 pntr->leftlink->rightlink=pntr->rightlink;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 pntr->rightlink->leftlink=pntr->leftlink;
 temp_node=pntr;
 free(temp_node);
}

/* Function to Search an item from the list*/
DUBLL Search(int item,int flag)
{
   temp_node = high;
   if(high==NULL)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   {
     printf("\n List is not available. Please create a list first.");
     getch();
     CreateItem();
   }
   while(temp_node!=NULL)
   {
    if(temp_node->data==item )
    {
     if(flag==0)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     {
       return(1);
     }
     else
     {
      return(temp_node);
     }
    }
    temp_node=temp_node->rightlink;
   }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}

/* Function to Allocate nodes*/
DUBLL NodeAlloc()
{
  DUBLL tmep_node;
  tmep_node=malloc(sizeof(struct dubll));
   if(tmep_node==NULL)
     {
      printf("\n No memory available. Node allocation cannot be done.");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     }
     tmep_node->rightlink=tmep_node->leftlink=NULL;
  return(tmep_node);
 }

/* Function to Insert items in the middle of the list*/
void InsertItem()
 {
  int node;
  DUBLL temp_node;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

  if(high==NULL)
  {
    printf("\n List is not available. Please create a list first."); 
    getch();
    CreateItem();
  }
  temp_node=NodeAlloc();
  printf("Position At which node to be inserted: ___ & New Item Value: ___ ");
  scanf("%d",&node);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  scanf("%d",&temp_node->data);
  pntr=Search(node,1);

  if(pntr->rightlink==NULL){printf("\n The operation is not possible."); getch();return;}
     temp_node->leftlink=pntr;                 //creating link to new node
     temp_node->rightlink=pntr->rightlink;

     pntr->rightlink->leftlink=temp_node;
     pntr->rightlink=temp_node;

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     printf("\n Item has been Inserted.");
     getch();
 }

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */