/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

# include<stdio.h>
#include<conio.h>
#define MAX 20
void main()
{
	int arr[MAX],n,i,item;
	clrscr();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("How many elements you want to enter in the array : ");
	scanf("%d",&n);

	for(i=0; i < n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the element to be searched : ");
	scanf("%d",&item);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	for(i=0;i < n;i++)
	{
		if(item == arr[i])
		{
			printf("%d found at position %d\n",item,i+1);
			break;
		}
	}
	if(i == n)
		printf("\nItem %d not found in array\n",item);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       getch();

}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */