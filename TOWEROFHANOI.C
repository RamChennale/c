/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write C programs that use both recursive and non-recursive functions
   To solve Towers of Hanoi problem.*/
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

#include<conio.h>
#include<stdio.h>

/* Non-Recursive Function*/
void hanoiNonRecursion(int num,char sndl,char indl,char dndl)
{
  char stkn[100],stksndl[100],stkindl[100],stkdndl[100],stkadd[100],temp;
  int top,add;
  top=NULL;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

  one:
	if(num==1)
	{
	  printf("\nMove top disk from needle %c to needle %c ",sndl,dndl);
	  goto four;
	}
  two:
	top=top+1;
	stkn[top]=num;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	stksndl[top]=sndl;
	stkindl[top]=indl;
	stkdndl[top]=dndl;
	stkadd[top]=3;
	num=num-1;
	sndl=sndl;
	temp=indl;
	indl=dndl;
	dndl=temp;

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	goto one;

  three:
	printf("\nMove top disk from needle %c to needle %c ",sndl,dndl);
	top=top+1;
	stkn[top]=num;
	stksndl[top]=sndl;
	stkindl[top]=indl;
	stkdndl[top]=dndl;
	stkadd[top]=5;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	num=num-1;
	temp=sndl;
	sndl=indl;
	indl=temp;
	dndl=dndl;

	goto one;

  four:
	if(top==NULL)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	  return;
	num=stkn[top];
	sndl=stksndl[top];
	indl=stkindl[top];
	dndl=stkdndl[top];
	add=stkadd[top];
	top=top-1;
	if(add==3)
	  goto three;
	else if(add==5)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	  goto four;
}

/* Recursive Function*/
void  hanoiRecursion( int num,char ndl1, char ndl2, char ndl3)
{
    if ( num == 1 ) {
	printf( "Move top disk from needle %c to needle %c.", ndl1, ndl2 );
	return;
     }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

     hanoiRecursion( num - 1,ndl1, ndl3, ndl2 );
     printf( "Move top disk from needle %c to needle %c.", ndl1, ndl2 );
     hanoiRecursion( num - 1,ndl3, ndl2, ndl1 );
}

void main()
{
  int no;
  clrscr();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("Enter the no. of disks to be transferred: ");
  scanf("%d",&no);

  if(no<1)
     printf("\nThere's nothing to move.");
  else
     printf("Non-Recursive");
     hanoiNonRecursion(no,'A','B','C');
     printf("\nRecursive");
     hanoiRecursion(no,'A','B','C');
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

  getch();
}


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */