/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Program of sorting using merge sort through recursion*/
#include<stdio.h>
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#define MAX 20
int array[MAX];
main()
{
	int i,n;

	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		printf("Enter element %d : ",i+1);
		scanf("%d",&array[i]);
	}

	printf("Unsorted list is :\n");
	for( i = 0 ; i<n ; i++)
		printf("%d ", array[i]);

	merge_sort( 0, n-1);

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	printf("\nSorted list is :\n");
	for( i = 0 ; i<n ; i++)
		printf("%d ", array[i]);
	printf("\n");
}/*End of main()*/

merge_sort( int low, int high )
{
	int mid;
	if( low != high )
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	{
		mid = (low+high)/2;
		merge_sort( low , mid );
		merge_sort( mid+1, high );
		merge( low, mid, high );
	}
}/*End of merge_sort*/

merge( int low, int mid, int high )
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	int temp[MAX];
	int i = low;
	int j = mid +1 ;
	int k = low ;

	while( (i <= mid) && (j <=high) )
	{
		if(array[i] <= array[j])
			temp[k++] = array[i++] ;
		else
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
			temp[k++] = array[j++] ;
	}/*End of while*/
	while( i <= mid )
		temp[k++]=array[i++];
	while( j <= high )
		temp[k++]=array[j++];

	for(i= low; i <= high ; i++)
		array[i]=temp[i];
}/*End of merge()*/
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */







/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */