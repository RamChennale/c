/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Program of sorting using shell sort */
#include <stdio.h>
#define MAX 20

main()
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
	int arr[MAX], i,j,k,n,incr;

	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("Unsorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\nEnter maximum increment (odd value) : ");
	scanf("%d",&incr);
	/*Shell sort*/
	while(incr>=1)
	{
		for(j=incr;j<n;j++)
		{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
			k=arr[j];
			for(i = j-incr; i >= 0 && k < arr[i]; i = i-incr)
				arr[i+incr]=arr[i];
			arr[i+incr]=k;
		}
		printf("Increment=%d \n",incr);
		for (i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
		incr=incr-2; /*Decrease the increment*/
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	}/*End of while*/
	printf("Sorted list is :\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}/*End of main()*/


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */